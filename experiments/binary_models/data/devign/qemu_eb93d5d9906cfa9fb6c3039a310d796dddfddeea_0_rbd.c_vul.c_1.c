static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[VAR9];
    char VAR10[VAR11];
    char VAR12[VAR13];
    char VAR14[VAR13];
    char *VAR15;
    int VAR16;
    if (FUN2(VAR3, VAR8, sizeof(VAR8), VAR10, sizeof(VAR10), VAR6->VAR17, sizeof(VAR6->VAR17), VAR12, sizeof(VAR12)) < 0)
    {
        return -VAR18;
    }
    VAR6->VAR19 = NULL;
    if (VAR10[0] != '')
    {
        VAR6->VAR19 = FUN3(VAR10);
    }
    VAR15 = FUN4(VAR12, VAR14);
    VAR16 = FUN5(&VAR6->VAR20, VAR15);
    if (VAR16 < 0)
    {
        FUN6("");
        return VAR16;
    }
    if (strstr(VAR12, "") == NULL)
    {
        VAR16 = FUN7(VAR6->VAR20, NULL);
        if (VAR16 < 0)
        {
            FUN6("");
            FUN8(VAR6->VAR20);
            return VAR16;
        }
    }
    if (VAR12[0] != '')
    {
        VAR16 = FUN9(VAR6->VAR20, VAR12);
        if (VAR16 < 0)
        {
            FUN6("");
            FUN8(VAR6->VAR20);
            return VAR16;
        }
    }
    VAR16 = FUN10(VAR6->VAR20);
    if (VAR16 < 0)
    {
        FUN6("");
        FUN8(VAR6->VAR20);
        return VAR16;
    }
    VAR16 = FUN11(VAR6->VAR20, VAR8, &VAR6->VAR21);
    if (VAR16 < 0)
    {
        FUN6("", VAR8);
        FUN8(VAR6->VAR20);
        return VAR16;
    }
    VAR16 = FUN12(VAR6->VAR21, VAR6->VAR17, &VAR6->VAR22, VAR6->VAR19);
    if (VAR16 < 0)
    {
        FUN6("", VAR6->VAR17);
        FUN13(VAR6->VAR21);
        FUN8(VAR6->VAR20);
        return VAR16;
    }
    VAR2->VAR23 = (VAR6->VAR19 != NULL);
    VAR6->VAR24 = 0;
    VAR16 = FUN14(VAR6->VAR25);
    if (VAR16 < 0)
    {
        FUN6("");
        goto VAR26;
    }
    FUN15(VAR6->VAR25[0], VAR27, VAR28);
    FUN15(VAR6->VAR25[1], VAR27, VAR28);
    FUN16(VAR6->VAR25[VAR29], VAR30, NULL, VAR31, NULL, VAR6);
    return 0;
VAR26:
    FUN17(VAR6->VAR22);
    FUN13(VAR6->VAR21);
    FUN8(VAR6->VAR20);
    return VAR16;
}