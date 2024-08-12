static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    FUN2(VAR4, 1);
    VAR6->VAR11 = FUN3(VAR4, 8);
    if (FUN4(VAR4) != 0)
    {
        VAR10 = FUN3(VAR4, 4);
        FUN2(VAR4, 3);
    }
    else
    {
        VAR10 = 1;
    }
    VAR6->VAR12 = FUN3(VAR4, 4);
    if (VAR6->VAR12 == VAR13)
    {
        VAR6->VAR14->VAR15.VAR16 = FUN3(VAR4, 8);
        VAR6->VAR14->VAR15.VAR17 = FUN3(VAR4, 8);
    }
    else
    {
        VAR6->VAR14->VAR15 = VAR18[VAR6->VAR12];
    }
    if ((VAR2->VAR19 = FUN4(VAR4)))
    {
        int VAR20 = FUN3(VAR4, 2);
        if (VAR20 != VAR21)
            FUN5(VAR6->VAR14, VAR22, "");
        VAR6->VAR23 = FUN4(VAR4);
        if (FUN4(VAR4))
        {
            FUN3(VAR4, 15);
            FUN6(VAR4, "");
            FUN3(VAR4, 15);
            FUN6(VAR4, "");
            FUN3(VAR4, 15);
            FUN6(VAR4, "");
            FUN3(VAR4, 3);
            FUN3(VAR4, 11);
            FUN6(VAR4, "");
            FUN3(VAR4, 15);
            FUN6(VAR4, "");
        }
    }
    else
    {
        if (VAR6->VAR24 == 0)
            VAR6->VAR23 = 0;
    }
    VAR2->VAR25 = FUN3(VAR4, 2);
    if (VAR2->VAR25 != VAR26)
        FUN5(VAR6->VAR14, VAR22, "");
    if (VAR2->VAR25 == VAR27 && VAR10 != 1)
    {
        FUN5(VAR6->VAR14, VAR22, "");
        FUN2(VAR4, 4);
    }
    FUN6(VAR4, "");
    VAR6->VAR14->VAR28.VAR16 = FUN3(VAR4, 16);
    if (!VAR6->VAR14->VAR28.VAR16)
    {
        FUN5(VAR6->VAR14, VAR22, "");
        return VAR29;
    }
    VAR2->VAR30 = FUN7(VAR6->VAR14->VAR28.VAR16 - 1) + 1;
    if (VAR2->VAR30 < 1)
        VAR2->VAR30 = 1;
    FUN6(VAR4, "");
    if (FUN4(VAR4) != 0)
        VAR6->VAR14->VAR28.VAR17 = FUN3(VAR4, VAR2->VAR30);
    else
        VAR6->VAR14->VAR28.VAR17 = 1;
    VAR6->VAR14->VAR31 = FUN8(FUN9(VAR6->VAR14->VAR28, (VAR32){VAR6->VAR14->VAR33, 1}));
    VAR2->VAR34 = 0;
    if (VAR2->VAR25 != VAR35)
    {
        if (VAR2->VAR25 == VAR26)
        {
            FUN6(VAR4, "");
            VAR8 = FUN3(VAR4, 13);
            FUN6(VAR4, "");
            VAR9 = FUN3(VAR4, 13);
            FUN6(VAR4, "");
            if (VAR8 && VAR9 && !(VAR6->VAR8 && VAR6->VAR36 == FUN10("")))
            {
                if (VAR6->VAR8 && VAR6->VAR9 && (VAR6->VAR8 != VAR8 || VAR6->VAR9 != VAR9))
                    VAR6->VAR37 = 1;
                VAR6->VAR8 = VAR8;
                VAR6->VAR9 = VAR9;
            }
        }
        VAR6->VAR38 = VAR6->VAR39 = FUN4(VAR4) ^ 1;
        VAR6->VAR40 = 0;
        if (!FUN4(VAR4) && (VAR6->VAR14->VAR41 & VAR42))
            FUN5(VAR6->VAR14, VAR43, "");
        if (VAR10 == 1)
            VAR2->VAR44 = FUN4(VAR4);
        else
            VAR2->VAR44 = FUN3(VAR4, 2);
        if (VAR2->VAR44 == VAR45)
            FUN5(VAR6->VAR14, VAR22, "");
        if (VAR2->VAR44 == VAR45 || VAR2->VAR44 == VAR46)
        {
            if (VAR2->VAR44 == VAR45)
            {
                FUN2(VAR4, 13);
                FUN6(VAR4, "");
                FUN2(VAR4, 13);
                FUN6(VAR4, "");
                FUN2(VAR4, 13);
                FUN6(VAR4, "");
                FUN2(VAR4, 13);
                FUN6(VAR4, "");
            }
            VAR2->VAR47 = FUN3(VAR4, 6);
            if (VAR2->VAR47 > 3)
            {
                FUN5(VAR6->VAR14, VAR22, "", VAR2->VAR47);
                VAR2->VAR47 = 0;
                return VAR29;
            }
            VAR6->VAR48 = FUN3(VAR4, 2);
            VAR2->VAR49 = FUN4(VAR4);
            if (VAR2->VAR44 == VAR45)
                FUN11(VAR4);
        }
        if (FUN4(VAR4) == 1)
        {
            VAR6->VAR50 = FUN3(VAR4, 4);
            if (FUN3(VAR4, 4) != 8)
                FUN5(VAR6->VAR14, VAR22, "");
            if (VAR6->VAR50 != 5)
                FUN5(VAR6->VAR14, VAR22, "", VAR6->VAR50);
            if (VAR6->VAR50 < 3 || VAR6->VAR50 > 9)
            {
                VAR6->VAR50 = 5;
            }
        }
        else
        {
            VAR6->VAR50 = 5;
        }
        if ((VAR6->VAR51 = FUN4(VAR4)))
        {
            int VAR52, VAR53;
            for (VAR52 = 0; VAR52 < 64; VAR52++)
            {
                int VAR54 = VAR6->VAR55.VAR56[VAR52];
                VAR53 = VAR57[VAR52];
                VAR6->VAR58[VAR54] = VAR53;
                VAR6->VAR59[VAR54] = VAR53;
                VAR53 = VAR60[VAR52];
                VAR6->VAR61[VAR54] = VAR53;
                VAR6->VAR62[VAR54] = VAR53;
            }
            if (FUN4(VAR4))
            {
                int VAR63 = 0;
                for (VAR52 = 0; VAR52 < 64; VAR52++)
                {
                    int VAR54;
                    VAR53 = FUN3(VAR4, 8);
                    if (VAR53 == 0)
                        break;
                    VAR63 = VAR53;
                    VAR54 = VAR6->VAR55.VAR56[VAR64[VAR52]];
                    VAR6->VAR58[VAR54] = VAR63;
                    VAR6->VAR59[VAR54] = VAR63;
                }
                for (; VAR52 < 64; VAR52++)
                {
                    int VAR54 = VAR6->VAR55.VAR56[VAR64[VAR52]];
                    VAR6->VAR58[VAR54] = VAR63;
                    VAR6->VAR59[VAR54] = VAR63;
                }
            }
            if (FUN4(VAR4))
            {
                int VAR63 = 0;
                for (VAR52 = 0; VAR52 < 64; VAR52++)
                {
                    int VAR54;
                    VAR53 = FUN3(VAR4, 8);
                    if (VAR53 == 0)
                        break;
                    VAR63 = VAR53;
                    VAR54 = VAR6->VAR55.VAR56[VAR64[VAR52]];
                    VAR6->VAR61[VAR54] = VAR53;
                    VAR6->VAR62[VAR54] = VAR53;
                }
                for (; VAR52 < 64; VAR52++)
                {
                    int VAR54 = VAR6->VAR55.VAR56[VAR64[VAR52]];
                    VAR6->VAR61[VAR54] = VAR63;
                    VAR6->VAR62[VAR54] = VAR63;
                }
            }
        }
        if (VAR10 != 1)
            VAR6->VAR65 = FUN4(VAR4);
        else
            VAR6->VAR65 = 0;
        if (FUN12(VAR4) < 4)
        {
            FUN5(VAR6->VAR14, VAR22, "");
            return VAR29;
        }
        if (!FUN4(VAR4))
        {
            int VAR66 = FUN13(VAR4);
            int VAR67 = FUN3(VAR4, 2);
            if (VAR67 < 2)
            {
                if (!FUN4(VAR4))
                {
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                }
                if (!FUN4(VAR4))
                {
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                }
                if (!FUN6(VAR4, ""))
                {
                    FUN14(VAR4, VAR66 - FUN13(VAR4));
                    goto VAR70;
                }
                if (!FUN4(VAR4))
                {
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR68 += 4 * FUN4(VAR4);
                }
                if (!FUN4(VAR4))
                {
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR71 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                }
                if (!FUN6(VAR4, ""))
                {
                    FUN14(VAR4, VAR66 - FUN13(VAR4));
                    goto VAR70;
                }
                if (VAR67 == 1)
                {
                    VAR2->VAR68 += 8 * FUN4(VAR4);
                    VAR2->VAR69 += 8 * FUN4(VAR4);
                }
            }
            else
                FUN5(VAR6->VAR14, VAR22, "", VAR67);
        }
        else
        {
        VAR70:
            VAR2->VAR68 = VAR2->VAR69 = VAR2->VAR71 = 0;
        }
        VAR2->VAR72 = !FUN4(VAR4);
        VAR6->VAR73 = FUN4(VAR4);
        if (VAR6->VAR73)
            VAR2->VAR74 = FUN4(VAR4);
        if (VAR10 != 1)
        {
            VAR2->VAR75 = FUN4(VAR4);
            if (VAR2->VAR75)
            {
                FUN5(VAR6->VAR14, VAR22, "");
                FUN2(VAR4, 2);
                FUN11(VAR4);
            }
            if (FUN4(VAR4))
                FUN5(VAR6->VAR14, VAR22, "");
        }
        else
        {
            VAR2->VAR75 = 0;
        }
        VAR2->VAR76 = FUN4(VAR4);
        if (VAR2->VAR76)
        {
            GetBitContext VAR77 = *VAR4;
            int VAR78;
            int VAR79;
            int VAR80;
            int VAR81;
            FUN11(VAR4);
            FUN2(VAR4, 4);
            FUN11(VAR4);
            VAR78 = FUN3(VAR4, 5);
            VAR79 = FUN3(VAR4, 5);
            VAR80 = FUN3(VAR4, 5);
            VAR81 = FUN3(VAR4, 5);
            VAR2->VAR82 = FUN4(VAR4);
            if (VAR78 == 0 || VAR79 == 0 || VAR80 == 0 || VAR81 == 0)
            {
                VAR2->VAR76 = 0;
                *VAR4 = VAR77;
            }
            else
                FUN5(VAR6->VAR14, VAR22, "");
        }
    }
    if (VAR6->VAR14->VAR41 & VAR42)
    {
        FUN5(VAR6->VAR14, VAR83, "", VAR6->VAR14->VAR28.VAR17, VAR6->VAR14->VAR28.VAR16, VAR2->VAR30, VAR6->VAR50, VAR6->VAR38, VAR2->VAR76 ? "" : "", VAR6->VAR65 ? "" : "", VAR6->VAR73 ? "" : "", VAR2->VAR74 ? "" : "");
    }
    return 0;
}