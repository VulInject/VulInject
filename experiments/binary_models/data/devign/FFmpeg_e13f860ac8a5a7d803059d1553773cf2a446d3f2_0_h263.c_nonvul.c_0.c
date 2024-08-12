static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(VAR4, 1);
    VAR2->VAR8 = FUN3(VAR4, 8);
    if (FUN4(VAR4) != 0)
    {
        VAR7 = FUN3(VAR4, 4);
        FUN2(VAR4, 3);
    }
    else
    {
        VAR7 = 1;
    }
    VAR2->VAR9 = FUN3(VAR4, 4);
    if (VAR2->VAR9 == VAR10)
    {
        VAR2->VAR11 = FUN3(VAR4, 8);
        VAR2->VAR12 = FUN3(VAR4, 8);
    }
    else
    {
        VAR2->VAR11 = VAR13[VAR2->VAR9][0];
        VAR2->VAR12 = VAR13[VAR2->VAR9][1];
    }
    if ((VAR2->VAR14 = FUN4(VAR4)))
    {
        int VAR15 = FUN3(VAR4, 2);
        if (VAR15 != 1)
        {
            FUN5("");
        }
        VAR2->VAR16 = FUN4(VAR4);
        if (FUN4(VAR4))
        {
            FUN3(VAR4, 15);
            FUN6(VAR4);
            FUN3(VAR4, 15);
            FUN6(VAR4);
            FUN3(VAR4, 15);
            FUN6(VAR4);
            FUN3(VAR4, 3);
            FUN3(VAR4, 11);
            FUN6(VAR4);
            FUN3(VAR4, 15);
            FUN6(VAR4);
        }
    }
    else
    {
        if (VAR2->VAR17 == 0)
            VAR2->VAR16 = 0;
    }
    VAR2->VAR18 = FUN3(VAR4, 2);
    if (VAR2->VAR18 != VAR19)
        FUN5("");
    if (VAR2->VAR18 == VAR20 && VAR7 != 1)
    {
        FUN5("");
        FUN2(VAR4, 4);
    }
    FUN6(VAR4);
    VAR2->VAR21 = FUN3(VAR4, 16);
    VAR2->VAR22 = FUN7(VAR2->VAR21 - 1) + 1;
    if (VAR2->VAR22 < 1)
        VAR2->VAR22 = 1;
    FUN6(VAR4);
    if (FUN4(VAR4) != 0)
    {
        FUN2(VAR4, VAR2->VAR22);
    }
    if (VAR2->VAR18 != VAR23)
    {
        if (VAR2->VAR18 == VAR19)
        {
            FUN6(VAR4);
            VAR5 = FUN3(VAR4, 13);
            FUN6(VAR4);
            VAR6 = FUN3(VAR4, 13);
            FUN6(VAR4);
            if (VAR5 && VAR6)
            {
                VAR2->VAR5 = VAR5;
                VAR2->VAR6 = VAR6;
            }
        }
        VAR2->VAR24 = FUN4(VAR4) ^ 1;
        if (!FUN4(VAR4))
            FUN5("");
        if (VAR7 == 1)
        {
            VAR2->VAR25 = FUN4(VAR4);
        }
        else
        {
            VAR2->VAR25 = FUN3(VAR4, 2);
        }
        if (VAR2->VAR25 == VAR26)
            FUN5("");
        if (VAR2->VAR25 == VAR26 || VAR2->VAR25 == VAR27)
        {
            if (VAR2->VAR25 == VAR26)
            {
                VAR2->VAR28 = FUN3(VAR4, 13);
                FUN6(VAR4);
                VAR2->VAR29 = FUN3(VAR4, 13);
                FUN6(VAR4);
                VAR2->VAR30 = FUN3(VAR4, 13);
                FUN6(VAR4);
                VAR2->VAR31 = FUN3(VAR4, 13);
                FUN6(VAR4);
            }
            VAR2->VAR32 = FUN3(VAR4, 6);
            VAR2->VAR33 = FUN3(VAR4, 2);
            VAR2->VAR34 = FUN4(VAR4);
            if (VAR2->VAR25 == VAR26)
                VAR2->VAR35 = FUN4(VAR4);
        }
        if (FUN4(VAR4) == 1)
        {
            VAR2->VAR36 = FUN3(VAR4, 4);
            if (FUN3(VAR4, 4) != 8)
                FUN5("");
            if (VAR2->VAR36 != 5)
                FUN5("", VAR2->VAR36);
        }
        else
        {
            VAR2->VAR36 = 5;
        }
        if ((VAR2->VAR37 = FUN4(VAR4)))
        {
            int VAR38, VAR39;
            for (VAR38 = 0; VAR38 < 64; VAR38++)
            {
                int VAR40 = VAR2->VAR41.VAR42[VAR38];
                VAR39 = VAR43[VAR38];
                VAR2->VAR44[VAR40] = VAR39;
                VAR2->VAR45[VAR40] = VAR39;
                VAR39 = VAR46[VAR38];
                VAR2->VAR47[VAR40] = VAR39;
                VAR2->VAR48[VAR40] = VAR39;
            }
            if (FUN4(VAR4))
            {
                int VAR49 = 0;
                for (VAR38 = 0; VAR38 < 64; VAR38++)
                {
                    int VAR40;
                    VAR39 = FUN3(VAR4, 8);
                    if (VAR39 == 0)
                        break;
                    VAR49 = VAR39;
                    VAR40 = VAR2->VAR41.VAR42[VAR50[VAR38]];
                    VAR2->VAR44[VAR40] = VAR39;
                    VAR2->VAR45[VAR40] = VAR39;
                }
                for (; VAR38 < 64; VAR38++)
                {
                    int VAR40 = VAR2->VAR41.VAR42[VAR50[VAR38]];
                    VAR2->VAR44[VAR40] = VAR39;
                    VAR2->VAR45[VAR40] = VAR39;
                }
            }
            if (FUN4(VAR4))
            {
                int VAR49 = 0;
                for (VAR38 = 0; VAR38 < 64; VAR38++)
                {
                    int VAR40;
                    VAR39 = FUN3(VAR4, 8);
                    if (VAR39 == 0)
                        break;
                    VAR49 = VAR39;
                    VAR40 = VAR2->VAR41.VAR42[VAR50[VAR38]];
                    VAR2->VAR47[VAR40] = VAR39;
                    VAR2->VAR48[VAR40] = VAR39;
                }
                for (; VAR38 < 64; VAR38++)
                {
                    int VAR40 = VAR2->VAR41.VAR42[VAR50[VAR38]];
                    VAR2->VAR47[VAR40] = VAR49;
                    VAR2->VAR48[VAR40] = VAR49;
                }
            }
        }
        if (VAR7 != 1)
            VAR2->VAR51 = FUN4(VAR4);
        else
            VAR2->VAR51 = 0;
        if (!FUN4(VAR4))
            FUN5("");
        VAR2->VAR52 = !FUN4(VAR4);
        VAR2->VAR53 = FUN4(VAR4);
        if (VAR2->VAR53)
        {
            VAR2->VAR54 = FUN4(VAR4);
        }
        if (VAR7 != 1)
        {
            VAR2->VAR55 = FUN4(VAR4);
            if (VAR2->VAR55)
            {
                FUN5("");
                FUN2(VAR4, 2);
                FUN6(VAR4);
            }
            VAR2->VAR56 = FUN4(VAR4);
            if (VAR2->VAR56)
                FUN5("");
        }
        else
        {
            VAR2->VAR55 = 0;
            VAR2->VAR56 = 0;
        }
        VAR2->VAR57 = FUN4(VAR4);
        if (VAR2->VAR57)
        {
            GetBitContext VAR58 = *VAR4;
            int VAR59;
            int VAR60;
            int VAR61;
            int VAR62;
            int VAR63;
            int VAR64;
            VAR2->VAR65 = FUN4(VAR4);
            VAR59 = FUN3(VAR4, 4);
            VAR60 = FUN4(VAR4);
            VAR61 = FUN3(VAR4, 5);
            VAR62 = FUN3(VAR4, 5);
            VAR63 = FUN3(VAR4, 5);
            VAR64 = FUN3(VAR4, 5);
            VAR2->VAR66 = FUN4(VAR4);
            if (VAR61 == 0 || VAR62 == 0 || VAR63 == 0 || VAR64 == 0)
            {
                VAR2->VAR57 = 0;
                *VAR4 = VAR58;
            }
            else
                FUN5("");
        }
    }
    return 0;
}