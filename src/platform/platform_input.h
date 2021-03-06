
#define DEFINE_KEY(name, code) KEY_##name = code

typedef enum Keys {

    DEFINE_KEY(LEFT, 123),
    DEFINE_KEY(RIGHT, 124),
    DEFINE_KEY(UP, 126),
    DEFINE_KEY(DOWN, 125),

    DEFINE_KEY(ESCAPE, 53),
    DEFINE_KEY(SPACE, 49),
    DEFINE_KEY(TAB, 48),
    DEFINE_KEY(RETURN, 36),
    DEFINE_KEY(ENTER, 76),

    DEFINE_KEY(MINUS, 27),
    DEFINE_KEY(PLUS, 24),
    DEFINE_KEY(DELETE, 51),
    DEFINE_KEY(LEFT_BRACKET, 33),
    DEFINE_KEY(RIGHT_BRACKET, 30),


    DEFINE_KEY(A, 0),
    DEFINE_KEY(B, 11),
    DEFINE_KEY(C, 8),
    DEFINE_KEY(D, 2),
    DEFINE_KEY(E, 14),
    DEFINE_KEY(F, 3),
    DEFINE_KEY(G, 5),
    DEFINE_KEY(H, 4),
    DEFINE_KEY(I, 34),
    DEFINE_KEY(J, 38),
    DEFINE_KEY(K, 40),
    DEFINE_KEY(L, 37),
    DEFINE_KEY(M, 46),
    DEFINE_KEY(N, 45),
    DEFINE_KEY(O, 31),
    DEFINE_KEY(P, 35),
    DEFINE_KEY(Q, 12),
    DEFINE_KEY(R, 15),
    DEFINE_KEY(S, 1),
    DEFINE_KEY(T, 17),
    DEFINE_KEY(W, 13),
    DEFINE_KEY(X, 7),
    DEFINE_KEY(Y, 16),
    DEFINE_KEY(Z, 6),

    DEFINE_KEY(NUMPAD0, 29),
    DEFINE_KEY(NUMPAD1, 18),
    DEFINE_KEY(NUMPAD2, 19),
    DEFINE_KEY(NUMPAD3, 20),
    DEFINE_KEY(NUMPAD4, 21),
    DEFINE_KEY(NUMPAD5, 23),
    DEFINE_KEY(NUMPAD6, 22),
    DEFINE_KEY(NUMPAD7, 26),
    DEFINE_KEY(NUMPAD8, 28),
    DEFINE_KEY(NUMPAD9, 25),

    MAX_KEYS
}Keys;