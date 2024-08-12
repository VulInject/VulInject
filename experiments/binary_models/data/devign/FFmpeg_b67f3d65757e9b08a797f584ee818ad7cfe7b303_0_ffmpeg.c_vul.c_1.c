static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4, VAR5;
    VAR1 *VAR6;
    int VAR7 = 0;
    VAR5 = FUN2(&VAR6, VAR3, NULL, VAR8, NULL);
    if (VAR5 < 0)
        return VAR5;
    VAR2->VAR9 = VAR6->VAR9;
    for (VAR4 = 0; VAR4 < VAR6->VAR9; VAR4++)
    {
        VAR10 *VAR11;
        VAR12 *VAR13;
        VAR11 = FUN3(sizeof(VAR10));
        memcpy(VAR11, VAR6->VAR14[VAR4], sizeof(VAR10));
        VAR11->VAR13 = FUN4();
        if (!VAR11->VAR13)
        {
            FUN5(VAR3, FUN6(VAR15));
            FUN7(1);
        }
        FUN8(VAR11->VAR13, VAR6->VAR14[VAR4]->VAR13);
        VAR2->VAR14[VAR4] = VAR11;
        VAR13 = FUN9(VAR11->VAR13->VAR16);
        if (VAR11->VAR13->VAR17 == VAR18)
        {
            if (VAR19)
            {
                VAR11->VAR20 = 1;
            }
            else
                FUN10(VAR11, VAR13);
        }
        else if (VAR11->VAR13->VAR17 == VAR21)
        {
            if (VAR22)
            {
                VAR11->VAR20 = 1;
            }
            else
                FUN11(VAR11, VAR13);
        }
        if (!VAR11->VAR13->VAR23)
            VAR11->VAR13->VAR23 = 1;
        if (VAR11->VAR13->VAR23 > 1)
            FUN12(VAR11->VAR13, VAR11->VAR13->VAR23);
        if (VAR11->VAR13->VAR24 & VAR25)
            VAR7 = 1;
    }
    if (!VAR7)
        VAR2->VAR26 = FUN13();
    FUN14(VAR6);
    return 0;
}