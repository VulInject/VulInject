static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int socket)
{
    uint64_t VAR9;
    uint32_t VAR10;
    char VAR11[] = "";
    char VAR12[64];
    int VAR13 = FUN2(sizeof(VAR11));
    struct iovec VAR14[] = {
        {
            .VAR15 = &VAR13,
            .VAR16 = sizeof(VAR13),
        },
        {
            .VAR15 = VAR11,
            .VAR16 = sizeof(VAR11),
        },
    };
    int VAR17;
    VAR9 = FUN3(VAR6, 64);
    VAR10 = FUN4(VAR8, VAR9, 64, true, false);
    FUN5(VAR2, VAR4, VAR8, VAR10);
    FUN6("");
    VAR17 = FUN7(socket, VAR14, 2, 0, sizeof(VAR13) + sizeof(VAR11));
    FUN8(VAR17, ==, sizeof(VAR11) + sizeof(VAR13));
    FUN6("");
    FUN6("");
    FUN9(VAR2, VAR4, VAR8, VAR18);
    FUN10(VAR9 + VAR19, VAR12, sizeof(VAR11));
    FUN11(VAR12, ==, "");
    FUN12(VAR6, VAR9);
}