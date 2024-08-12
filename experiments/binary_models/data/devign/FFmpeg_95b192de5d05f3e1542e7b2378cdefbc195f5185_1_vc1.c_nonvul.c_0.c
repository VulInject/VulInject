static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR2->VAR5 = 1;
    VAR2->VAR6 = FUN2(VAR4, 3);
    if (VAR2->VAR6 >= 5)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "", VAR2->VAR6);
    }
    VAR2->VAR10 = FUN2(VAR4, 2);
    if (VAR2->VAR10 != 1)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "");
        return -1;
    }
    VAR2->VAR11 = FUN2(VAR4, 3);
    VAR2->VAR12 = FUN2(VAR4, 5);
    VAR2->VAR13 = FUN4(VAR4);
    VAR2->VAR7.VAR8->VAR14 = (FUN2(VAR4, 12) + 1) << 1;
    VAR2->VAR7.VAR8->VAR15 = (FUN2(VAR4, 12) + 1) << 1;
    VAR2->VAR7.VAR8->VAR16 = VAR2->VAR7.VAR8->VAR14;
    VAR2->VAR7.VAR8->VAR17 = VAR2->VAR7.VAR8->VAR15;
    VAR2->VAR18 = FUN4(VAR4);
    VAR2->VAR19 = FUN4(VAR4);
    VAR2->VAR20 = FUN4(VAR4);
    VAR2->VAR21 = FUN4(VAR4);
    FUN5(VAR4);
    FUN3(VAR2->VAR7.VAR8, VAR22, ""
                                     ""
                                     "",
           VAR2->VAR6, VAR2->VAR11, VAR2->VAR12, VAR2->VAR7.VAR23, VAR2->VAR10, VAR2->VAR18, VAR2->VAR19, VAR2->VAR20, VAR2->VAR21);
    VAR2->VAR24 = FUN4(VAR4);
    if (VAR2->VAR24)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "");
        return -1;
    }
    VAR2->VAR7.VAR25 = VAR2->VAR7.VAR8->VAR25 = 7;
    if (FUN4(VAR4))
    {
        int VAR26, VAR27, VAR28 = 0;
        FUN3(VAR2->VAR7.VAR8, VAR22, "");
        VAR26 = FUN2(VAR4, 14) + 1;
        VAR27 = FUN2(VAR4, 14) + 1;
        FUN3(VAR2->VAR7.VAR8, VAR22, "", VAR26, VAR27);
        if (FUN4(VAR4))
            VAR28 = FUN2(VAR4, 4);
        if (VAR28 && VAR28 < 14)
        {
            VAR2->VAR7.VAR8->VAR29 = VAR30[VAR28];
        }
        else if (VAR28 == 15)
        {
            VAR26 = FUN2(VAR4, 8) + 1;
            VAR27 = FUN2(VAR4, 8) + 1;
            VAR2->VAR7.VAR8->VAR29 = (VAR31){VAR26, VAR27};
        }
        else
        {
            FUN6(&VAR2->VAR7.VAR8->VAR29.VAR32, &VAR2->VAR7.VAR8->VAR29.VAR33, VAR2->VAR7.VAR8->VAR17 * VAR26, VAR2->VAR7.VAR8->VAR16 * VAR27, 1 << 30);
        }
        FUN3(VAR2->VAR7.VAR8, VAR22, "", VAR2->VAR7.VAR8->VAR29.VAR32, VAR2->VAR7.VAR8->VAR29.VAR33);
        if (FUN4(VAR4))
        {
            if (FUN4(VAR4))
            {
                VAR2->VAR7.VAR8->VAR34.VAR32 = 32;
                VAR2->VAR7.VAR8->VAR34.VAR33 = FUN2(VAR4, 16) + 1;
            }
            else
            {
                int VAR35, VAR36;
                VAR35 = FUN2(VAR4, 8);
                VAR36 = FUN2(VAR4, 4);
                if (VAR35 > 0 && VAR35 < 8 && VAR36 > 0 && VAR36 < 3)
                {
                    VAR2->VAR7.VAR8->VAR34.VAR32 = VAR37[VAR36 - 1];
                    VAR2->VAR7.VAR8->VAR34.VAR33 = VAR38[VAR35 - 1] * 1000;
                }
            }
            if (VAR2->VAR18)
            {
                VAR2->VAR7.VAR8->VAR34.VAR33 *= 2;
                VAR2->VAR7.VAR8->VAR39 = 2;
            }
        }
        if (FUN4(VAR4))
        {
            VAR2->VAR40 = FUN2(VAR4, 8);
            VAR2->VAR41 = FUN2(VAR4, 8);
            VAR2->VAR42 = FUN2(VAR4, 8);
        }
    }
    VAR2->VAR43 = FUN4(VAR4);
    if (VAR2->VAR43)
    {
        int VAR44;
        VAR2->VAR45 = FUN2(VAR4, 5);
        FUN7(VAR4, 4);
        FUN7(VAR4, 4);
        for (VAR44 = 0; VAR44 < VAR2->VAR45; VAR44++)
        {
            FUN7(VAR4, 16);
            FUN7(VAR4, 16);
        }
    }
    return 0;
}