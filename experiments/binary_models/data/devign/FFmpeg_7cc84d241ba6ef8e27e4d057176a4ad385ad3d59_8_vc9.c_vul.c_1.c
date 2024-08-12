static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6;
    if (VAR2->VAR7 == VAR8)
    {
        FUN2(VAR2->VAR5.VAR9, VAR10, "");
        return VAR11;
    }
    VAR2->VAR12 = VAR13[FUN3(VAR4, VAR14.VAR15, VAR16, 2)];
    if (VAR2->VAR12 < -1)
    {
        FUN2(VAR2->VAR5.VAR9, VAR10, "");
        return VAR11;
    }
    else if (!VAR2->VAR12)
    {
        VAR2->VAR5.VAR17 = VAR18;
        VAR2->VAR19 = FUN4(VAR4, 7);
    }
    VAR6 = FUN4(VAR4, 5);
    if (VAR2->VAR20 == VAR21)
        VAR2->VAR22 = VAR23[0][VAR6];
    else
    {
        VAR2->VAR22 = VAR23[VAR2->VAR20 - 1][VAR6];
    }
    if (VAR6 < 9)
        VAR2->VAR24 = FUN4(VAR4, 1);
    if (VAR2->VAR20 == VAR25)
        VAR2->VAR26 = FUN4(VAR4, 1);
    if (VAR2->VAR7 > VAR27)
    {
        if (VAR2->VAR28)
            VAR2->VAR29 = FUN4(VAR4, 2);
        if (VAR2->VAR30 == 1 && VAR2->VAR5.VAR17 != VAR18)
            VAR2->VAR31 = FUN5(VAR4, 0, 3);
    }
    else
    {
        if (VAR2->VAR30 == 1)
            VAR2->VAR31 = FUN5(VAR4, 0, 3);
    }
    if (VAR2->VAR5.VAR17 != VAR18)
    {
        VAR2->VAR32 = FUN4(VAR4, 1);
        if (VAR2->VAR22 < 13)
        {
            if (!VAR2->VAR32)
            {
                VAR2->VAR32 = FUN4(VAR4, 2);
                if (VAR2->VAR32)
                    FUN2(VAR2->VAR5.VAR9, VAR10, "", VAR2->VAR32);
            }
        }
        else
        {
            if (!VAR2->VAR32)
            {
                if (FUN4(VAR4, 1))
                    FUN2(VAR2->VAR5.VAR9, VAR10, "", VAR2->VAR32);
            }
            VAR2->VAR32 = 1 - VAR2->VAR32;
        }
    }
    return 0;
}