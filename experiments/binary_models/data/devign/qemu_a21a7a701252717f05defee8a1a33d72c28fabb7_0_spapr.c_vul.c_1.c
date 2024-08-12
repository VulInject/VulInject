static void FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4, hwaddr VAR5)
{
    int VAR6, VAR7;
    size_t VAR8 = 0;
    char *VAR9;
    void *VAR10;
    VAR11 *VAR12;
    VAR10 = FUN2(VAR13);
    FUN3((FUN4(VAR2->VAR14, VAR10, VAR13)));
    VAR6 = FUN5(VAR2, VAR10);
    if (VAR6 < 0)
    {
        fprintf(VAR15, "");
        FUN6(1);
    }
    VAR6 = FUN7(VAR2->VAR16, VAR10);
    if (VAR6 < 0)
    {
        fprintf(VAR15, "");
        FUN6(1);
    }
    FUN8(VAR12, &VAR2->VAR17, VAR18) { VAR6 = FUN9(VAR12, VAR19, VAR10); }
    if (VAR6 < 0)
    {
        fprintf(VAR15, "");
        FUN6(1);
    }
    VAR6 = FUN10(VAR10, VAR4, VAR5);
    if (VAR6 < 0)
    {
        fprintf(VAR15, "");
    }
    VAR6 = FUN11(VAR10, VAR2);
    if (VAR6 < 0)
    {
        fprintf(VAR15, "");
    }
    VAR9 = FUN12(&VAR8, true);
    if (VAR8 && VAR9)
    {
        int VAR20 = FUN13(VAR10, "");
        if (VAR20 < 0)
        {
            FUN6(1);
        }
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            if (VAR9[VAR7] == '')
            {
                VAR9[VAR7] = '';
            }
        }
        VAR6 = FUN14(VAR10, VAR20, "", VAR9);
    }
    if (!VAR2->VAR21)
    {
        FUN15(VAR10, VAR2->VAR16);
    }
    FUN3((FUN16(VAR10)));
    if (FUN17(VAR10) > VAR13)
    {
        FUN18("", FUN17(VAR10), VAR13);
        FUN6(1);
    }
    FUN19(VAR3, VAR10, FUN17(VAR10));
    FUN20(VAR10);