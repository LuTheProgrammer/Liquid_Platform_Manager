#include "platform_logger.h"

void log_message(Log_level level, const char* message, ...){
    const char* level_strings[6] = { "[FATAL]: ", "[ERROR]: ", "[WARN]:  ", "[INFO]:  ", "[DEBUG]: ", "[TRACE]: " };
    bool is_error = level < LOG_WARN;

    // Technically imposes a 32k character limit on a single log entry, but...
    // DON'T DO THAT!
    const int msg_length = 32000;
    char out_message[msg_length];
    memset(out_message, 0, sizeof(out_message));

    // Format original message.
    // NOTE: Oddly enough, MS's headers override the GCC/Clang va_list type with a "typedef char* va_list" in some
    // cases, and as a result throws a strange error here. The workaround for now is to just use __builtin_va_list,
    // which is the type GCC/Clang's va_start expects.
    __builtin_va_list arg_ptr;
    va_start(arg_ptr, message);
    vsnprintf(out_message, msg_length, message, arg_ptr);
    va_end(arg_ptr);

    char out_message2[msg_length];
    sprintf(out_message2, "%s%s\n", level_strings[level], out_message);

    // Platform-specific output.
    if (is_error) {
        platform_console_write_error(out_message2, level);
    }
    else {
        platform_console_write(out_message2, level);
    }
}