static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9;
    int VAR10 = 0;
    FUN2(VAR8, NULL);
    if (VAR3)
        VAR10 = FUN3(VAR8);
    if (VAR10 < 0)
        FUN4(VAR2, VAR11, "", VAR8->VAR12);
    if (VAR6->VAR13)
    {
        if (VAR6->VAR14 || VAR6->VAR15 == VAR16)
        {
            VAR17 *VAR18 = FUN5(sizeof(*VAR18));
            if (!VAR18)
            {
                VAR10 = FUN6(VAR19);
                goto VAR20;
            }
            memcpy(VAR18, &VAR6->VAR21, sizeof(*VAR18));
            if (!VAR6->VAR22)
                VAR6->VAR22 = VAR6->VAR23 = VAR18;
            else
                VAR6->VAR23->VAR24 = VAR18;
            VAR6->VAR23 = VAR18;
            if (VAR6->VAR14 && VAR6->VAR25 >= VAR6->VAR14)
            {
                VAR18 = VAR6->VAR22;
                VAR6->VAR22 = VAR6->VAR22->VAR24;
                FUN7(VAR18->VAR12);
                FUN8(&VAR18);
            }
            FUN9(VAR6->VAR26);
            if ((VAR10 = FUN10(VAR2)) < 0)
                goto VAR20;
            for (VAR18 = VAR6->VAR22; VAR18; VAR18 = VAR18->VAR24)
                FUN11(VAR6->VAR26, VAR6->VAR15, VAR18, VAR2);
            if (VAR6->VAR15 == VAR16 && VAR4)
                FUN12(VAR6->VAR26, "");
        }
        else
        {
            FUN11(VAR6->VAR26, VAR6->VAR15, &VAR6->VAR21, VAR2);
        }
        FUN13(VAR6->VAR26);
    }
    FUN4(VAR2, VAR27, "", VAR6->VAR9->VAR12, VAR6->VAR25);
    VAR6->VAR25++;
VAR20:
    FUN9(VAR8->VAR28);
    return VAR10;
}