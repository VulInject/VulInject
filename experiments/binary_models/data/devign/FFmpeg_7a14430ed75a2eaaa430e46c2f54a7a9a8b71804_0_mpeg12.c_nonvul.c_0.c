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
        VAR4->VAR16.VAR9 = VAR4->VAR9;
        VAR4->VAR16.VAR17 = VAR4->VAR9 == VAR13;
    }
    VAR4->VAR18 = FUN2(&VAR4->VAR8, 2);
    VAR4->VAR19 = FUN2(&VAR4->VAR8, 2);
    VAR4->VAR20 = FUN4(&VAR4->VAR8);
    VAR4->VAR21 = FUN4(&VAR4->VAR8);
    VAR4->VAR22 = FUN4(&VAR4->VAR8);
    VAR4->VAR23 = FUN4(&VAR4->VAR8);
    VAR4->VAR24 = FUN4(&VAR4->VAR8);
    VAR4->VAR25 = FUN4(&VAR4->VAR8);
    VAR4->VAR26 = FUN4(&VAR4->VAR8);
    VAR4->VAR27 = FUN4(&VAR4->VAR8);
    VAR4->VAR28 = FUN4(&VAR4->VAR8);
    if (VAR4->VAR29 && !VAR4->VAR28)
    {
        VAR4->VAR28 = 1;
        FUN3(VAR4->VAR11, VAR12, "");
    }
    if (VAR4->VAR19 == 0 || (VAR4->VAR28 && VAR4->VAR19 != VAR30))
    {
        FUN3(VAR4->VAR11, VAR12, "", VAR4->VAR19);
        VAR4->VAR19 = VAR30;
    }
    if (VAR4->VAR29 && !VAR4->VAR21)
    {
        FUN3(VAR4->VAR11, VAR12, "");
        VAR4->VAR21 = 1;
    }
    if (VAR4->VAR19 == VAR30)
    {
        VAR4->VAR31 = 0;
        VAR4->VAR32 = 16 * VAR4->VAR33;
    }
    else
    {
        VAR4->VAR31 ^= 1;
        VAR4->VAR32 = 8 * VAR4->VAR33;
        memset(VAR4->VAR34, 0, VAR4->VAR35 * VAR4->VAR33);
    }
    if (VAR4->VAR25)
    {
        FUN5(VAR4->VAR36.VAR37, &VAR4->VAR38, VAR39);
        FUN5(VAR4->VAR36.VAR37, &VAR4->VAR40, VAR39);
    }
    else
    {
        FUN5(VAR4->VAR36.VAR37, &VAR4->VAR38, VAR41);
        FUN5(VAR4->VAR36.VAR37, &VAR4->VAR40, VAR41);
    }
    FUN6(VAR4->VAR11, "", VAR4->VAR18);
    FUN6(VAR4->VAR11, "", VAR4->VAR19);
    FUN6(VAR4->VAR11, "", VAR4->VAR20);
    FUN6(VAR4->VAR11, "", VAR4->VAR26);
    FUN6(VAR4->VAR11, "", VAR4->VAR22);
    FUN6(VAR4->VAR11, "", VAR4->VAR24);
    FUN6(VAR4->VAR11, "", VAR4->VAR25);
    FUN6(VAR4->VAR11, "", VAR4->VAR21);
    FUN6(VAR4->VAR11, "", VAR4->VAR28);
}