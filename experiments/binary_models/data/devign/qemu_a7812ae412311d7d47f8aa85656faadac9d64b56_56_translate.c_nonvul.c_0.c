VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    static int VAR4 = 0;
    int VAR5;
    VAR3 = FUN2(sizeof(VAR1));
    if (!VAR3)
        return NULL;
    FUN3(VAR3);
    FUN4(VAR3);
    if (VAR4)
        return VAR3;
    VAR4 = 1;
    VAR6 = FUN5(VAR7, "");
    VAR8 = FUN6(VAR7, FUN7(VAR9, VAR8), "");
    VAR10 = FUN6(VAR7, FUN7(VAR9, VAR10), "");
    VAR11 = FUN6(VAR7, FUN7(VAR9, VAR11), "");
    VAR12 = FUN6(VAR7, FUN7(VAR9, VAR12), "");
    VAR13 = FUN6(VAR7, FUN7(VAR9, VAR13), "");
    VAR14 = FUN6(VAR7, FUN7(VAR9, VAR14), "");
    VAR15 = FUN6(VAR7, FUN7(VAR9, VAR15), "");
    VAR16 = FUN6(VAR7, FUN7(VAR9, VAR17), "");
    VAR18 = FUN6(VAR7, FUN7(VAR9, VAR19), "");
    VAR20 = FUN6(VAR7, FUN7(VAR9, VAR21), "");
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR22[VAR5] = FUN6(VAR7, FUN7(VAR9, VAR23[VAR5]), VAR24[VAR5]);
    }
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR25[VAR5] = FUN6(VAR7, FUN7(VAR9, VAR26[VAR5]), VAR27[VAR5]);
    }
    return VAR3;
}