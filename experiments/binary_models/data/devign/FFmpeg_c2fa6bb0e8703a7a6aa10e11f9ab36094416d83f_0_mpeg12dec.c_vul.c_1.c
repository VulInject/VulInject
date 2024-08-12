static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    VAR4->VAR6[0] = VAR4->VAR6[1] = 0;
    VAR4->VAR7[0][0] = FUN2(&VAR4->VAR8, 4);
    VAR4->VAR7[0][1] = FUN2(&VAR4->VAR8, 4);
    VAR4->VAR7[1][0] = FUN2(&VAR4->VAR8, 4);
    VAR4->VAR7[1][1] = FUN2(&VAR4->VAR8, 4);
    if (!VAR4->VAR9 && VAR2->VAR10)
    {
        FUN3(VAR4->VAR11, VAR12, "");
        if (VAR4->VAR7[1][0] == 15 && VAR4->VAR7[1][1] == 15)
        {
            if (VAR4->VAR7[0][0] == 15 && VAR4->VAR7[0][1] == 15)
                VAR4->VAR9 = VAR13;
            else
                VAR4->VAR9 = VAR14;
        }
        else
            VAR4->VAR9 = VAR15;
        VAR4->VAR16.VAR17->VAR9 = VAR4->VAR9;
        VAR4->VAR16.VAR17->VAR18 = VAR4->VAR9 == VAR13;
    }
    VAR4->VAR19 = FUN2(&VAR4->VAR8, 2);
    VAR4->VAR20 = FUN2(&VAR4->VAR8, 2);
    VAR4->VAR21 = FUN4(&VAR4->VAR8);
    VAR4->VAR22 = FUN4(&VAR4->VAR8);
    VAR4->VAR23 = FUN4(&VAR4->VAR8);
    VAR4->VAR24 = FUN4(&VAR4->VAR8);
    VAR4->VAR25 = FUN4(&VAR4->VAR8);
    VAR4->VAR26 = FUN4(&VAR4->VAR8);
    VAR4->VAR27 = FUN4(&VAR4->VAR8);
    VAR4->VAR28 = FUN4(&VAR4->VAR8);
    VAR4->VAR29 = FUN4(&VAR4->VAR8);
    if (VAR4->VAR30 && !VAR4->VAR29)
    {
        VAR4->VAR29 = 1;
        FUN3(VAR4->VAR11, VAR12, "");
    }
    if (VAR4->VAR20 == 0 || (VAR4->VAR29 && VAR4->VAR20 != VAR31))
    {
        FUN3(VAR4->VAR11, VAR12, "", VAR4->VAR20);
        VAR4->VAR20 = VAR31;
    }
    if (VAR4->VAR30 && !VAR4->VAR22)
        FUN3(VAR4->VAR11, VAR32, "");
    if (VAR4->VAR20 == VAR31)
    {
        VAR4->VAR33 = 0;
        VAR4->VAR34 = 16 * VAR4->VAR35;
    }
    else
    {
        VAR4->VAR33 ^= 1;
        VAR4->VAR34 = 8 * VAR4->VAR35;
        memset(VAR4->VAR36, 0, VAR4->VAR37 * VAR4->VAR35);
    }
    if (VAR4->VAR26)
    {
        FUN5(VAR4->VAR38.VAR39, &VAR4->VAR40, VAR41);
        FUN5(VAR4->VAR38.VAR39, &VAR4->VAR42, VAR41);
    }
    else
    {
        FUN5(VAR4->VAR38.VAR39, &VAR4->VAR40, VAR43);
        FUN5(VAR4->VAR38.VAR39, &VAR4->VAR42, VAR43);
    }
    FUN6(VAR4->VAR11, "", VAR4->VAR19);
    FUN6(VAR4->VAR11, "", VAR4->VAR20);
    FUN6(VAR4->VAR11, "", VAR4->VAR21);
    FUN6(VAR4->VAR11, "", VAR4->VAR27);
    FUN6(VAR4->VAR11, "", VAR4->VAR23);
    FUN6(VAR4->VAR11, "", VAR4->VAR25);
    FUN6(VAR4->VAR11, "", VAR4->VAR26);
    FUN6(VAR4->VAR11, "", VAR4->VAR22);
    FUN6(VAR4->VAR11, "", VAR4->VAR29);
}