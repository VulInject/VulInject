static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    if (FUN2(VAR6))
    {
        FUN3(VAR2->VAR7, VAR8, "");
        return VAR9;
    }
    VAR4->VAR10[1] = VAR4->VAR10[0];
    VAR4->VAR10[0] = FUN4(VAR6, 2);
    VAR4->VAR11[1] = VAR4->VAR11[0];
    VAR4->VAR11[0] = FUN2(VAR6);
    VAR4->VAR12 = 1;
    VAR4->VAR13[0] = 1;
    if (VAR4->VAR10[0] == VAR14)
    {
        int VAR15;
        VAR4->VAR16 = FUN4(VAR6, 4);
        for (VAR15 = 0; VAR15 < 7; VAR15++)
        {
            if (FUN2(VAR6))
            {
                VAR4->VAR13[VAR4->VAR12 - 1]++;
            }
            else
            {
                VAR4->VAR12++;
                VAR4->VAR13[VAR4->VAR12 - 1] = 1;
            }
        }
        VAR4->VAR17 = 8;
        VAR4->VAR18 = VAR19[VAR2->VAR20.VAR21];
        VAR4->VAR22 = VAR23[VAR2->VAR20.VAR21];
        VAR4->VAR24 = VAR25[VAR2->VAR20.VAR21];
        VAR4->VAR26 = 0;
    }
    else
    {
        VAR4->VAR16 = FUN4(VAR6, 6);
        VAR4->VAR17 = 1;
        VAR4->VAR18 = VAR27[VAR2->VAR20.VAR21];
        VAR4->VAR22 = VAR28[VAR2->VAR20.VAR21];
        VAR4->VAR24 = VAR29[VAR2->VAR20.VAR21];
        VAR4->VAR26 = FUN2(VAR6);
        VAR4->VAR30 = 0;
        if (VAR4->VAR26)
        {
            if (VAR2->VAR20.VAR31 == VAR32)
            {
                if (FUN5(VAR2, VAR4, VAR6))
                {
                    goto VAR33;
                }
            }
            else if (VAR2->VAR20.VAR31 == VAR34)
            {
                FUN3(VAR2->VAR7, VAR8, "");
                goto VAR33;
            }
            else
            {
                if ((VAR4->VAR35.VAR36 = FUN4(VAR6, 1)))
                    FUN6(VAR2, &VAR4->VAR35, VAR6, VAR4->VAR16);
            }
        }
    }
    if (VAR4->VAR16 > VAR4->VAR22)
    {
        FUN3(VAR2->VAR7, VAR8, "", VAR4->VAR16, VAR4->VAR22);
        goto VAR33;
    }
    return 0;
VAR33:
    VAR4->VAR16 = 0;
    return VAR9;
}