static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    uint32_t VAR6;
    int VAR7;
    char VAR8[11];
    char *VAR9;
    uint8_t VAR10[5] = {0};
    FUN2(VAR4, VAR10, 4);
    if (strcmp(VAR10, ""))
        VAR2->VAR11 = 1;
    FUN3(VAR2->VAR12, VAR13, "", (char *)&VAR10);
    FUN4(&VAR2->VAR12->VAR14, "", VAR10, 0);
    VAR6 = FUN5(VAR4);
    snprintf(VAR8, sizeof(VAR8), "" VAR15 "", VAR6);
    FUN4(&VAR2->VAR12->VAR14, "", VAR8, 0);
    VAR7 = VAR5.VAR16 - 8;
    if (VAR7 < 0)
        return VAR17;
    VAR9 = FUN6(VAR7 + 1);
    if (!VAR9)
        return FUN7(VAR18);
    FUN2(VAR4, VAR9, VAR7);
    VAR9[VAR7] = 0;
    FUN4(&VAR2->VAR12->VAR14, "", VAR9, 0);
    FUN8(&VAR9);
    return 0;
}