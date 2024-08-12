static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    char VAR12[256];
    char VAR13[1024];
    char VAR14[1024];
    const char *VAR15;
    VAR8 = (VAR4 & VAR16);
    VAR6 = FUN2(sizeof(VAR5));
    if (!VAR6)
        return FUN3(VAR17);
    VAR2->VAR18 = VAR6;
    FUN4(NULL, 0, NULL, 0, VAR12, sizeof(VAR12), &VAR7, VAR14, sizeof(VAR14), VAR3);
    VAR9 = -1;
    VAR10 = -1;
    VAR11 = -1;
    VAR15 = strchr(VAR3, '');
    if (VAR15)
    {
        if (FUN5(VAR13, sizeof(VAR13), "", VAR15))
        {
            VAR9 = FUN6(VAR13, NULL, 10);
        }
        if (FUN5(VAR13, sizeof(VAR13), "", VAR15))
        {
            VAR10 = FUN6(VAR13, NULL, 10);
        }
        if (FUN5(VAR13, sizeof(VAR13), "", VAR15))
        {
            VAR11 = FUN6(VAR13, NULL, 10);
        }
    }
    FUN7(VAR13, sizeof(VAR13), VAR12, VAR7, VAR10, VAR9, VAR11);
    if (FUN8(&VAR6->VAR19, VAR13, VAR4) < 0)
        goto VAR20;
    VAR10 = FUN9(VAR6->VAR19);
    FUN7(VAR13, sizeof(VAR13), VAR12, VAR7 + 1, VAR10 + 1, VAR9, VAR11);
    if (FUN8(&VAR6->VAR21, VAR13, VAR4) < 0)
        goto VAR20;
    VAR6->VAR22 = FUN10(VAR6->VAR19);
    VAR6->VAR23 = FUN10(VAR6->VAR21);
    VAR2->VAR11 = FUN11(VAR6->VAR19);
    VAR2->VAR24 = 1;
    return 0;
VAR20:
    if (VAR6->VAR19)
        FUN12(VAR6->VAR19);
    if (VAR6->VAR21)
        FUN12(VAR6->VAR21);
    FUN13(VAR6);
    return FUN3(VAR25);
}