static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR2->VAR4;
    int VAR5 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    VAR14 *VAR15 = &VAR2->VAR15;
    uint8_t VAR16[VAR17] = {0};
    VAR11 = 0;
    if (VAR2->VAR18)
    {
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR19[VAR9] = FUN2(VAR15);
            if (VAR9 > 1 && VAR2->VAR19[VAR9] != VAR2->VAR19[1])
                VAR11 = 1;
        }
    }
    if (VAR2->VAR20)
    {
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR21[VAR9] = FUN2(VAR15);
        }
    }
    VAR6 = !VAR2->VAR5;
    do
    {
        if (FUN2(VAR15))
        {
            int VAR22 = FUN3(VAR15, 8);
            INTFLOAT VAR23 = FUN4(VAR22);
            if (VAR22 <= 127 || VAR2->VAR24 <= 1.0)
                VAR2->VAR25[VAR6] = FUN5(VAR23);
            else
                VAR2->VAR25[VAR6] = VAR23;
        }
        else if (VAR3 == 0)
        {
            VAR2->VAR25[VAR6] = VAR26;
        }
    } while (VAR6--);
    if (VAR2->VAR27 && (!VAR3 || FUN2(VAR15)))
    {
        VAR2->VAR28 = FUN2(VAR15);
        if (VAR2->VAR28)
        {
            if ((VAR10 = FUN6(VAR2, VAR3)) < 0)
                return VAR10;
        }
    }
    if (!VAR2->VAR27 || !VAR2->VAR28)
    {
        VAR2->VAR28 = 0;
        for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR29[VAR9] = 0;
            VAR2->VAR30[VAR9] = 1;
        }
    }
    if (VAR2->VAR28)
        FUN7(VAR2);
    if (VAR2->VAR27 ? VAR2->VAR31[VAR3] : FUN2(VAR15))
    {
        if ((VAR10 = FUN8(VAR2, VAR3, VAR16)) < 0)
            return VAR10;
    }
    else if (!VAR2->VAR27)
    {
        if (!VAR3)
        {
            FUN9(VAR2->VAR32, VAR33, ""
                                           "");
            return VAR34;
        }
        else
        {
            VAR2->VAR13[VAR3] = VAR2->VAR13[VAR3 - 1];
        }
    }
    VAR13 = VAR2->VAR13[VAR3];
    if (VAR13)
    {
        if ((VAR10 = FUN10(VAR2, VAR3)) < 0)
            return VAR10;
    }
    if (VAR5 == VAR35)
    {
        if ((VAR2->VAR27 && !VAR3) || FUN2(VAR15))
        {
            VAR2->VAR36 = 4;
            if (VAR13 && VAR2->VAR37[VAR38] <= 61)
            {
                VAR2->VAR36 -= 1 + (VAR2->VAR37[VAR38] == 37);
            }
            else if (VAR2->VAR28 && VAR2->VAR39 <= 61)
            {
                VAR2->VAR36--;
            }
            for (VAR7 = 0; VAR7 < VAR2->VAR36; VAR7++)
                VAR2->VAR40[VAR7] = FUN2(VAR15);
        }
        else if (!VAR3)
        {
            FUN9(VAR2->VAR32, VAR41, ""
                                             "");
            VAR2->VAR36 = 0;
        }
    }
    for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
    {
        if (!VAR2->VAR27)
            VAR2->VAR43[VAR3][VAR9] = FUN3(VAR15, 2 - (VAR9 == VAR2->VAR44));
        if (VAR2->VAR43[VAR3][VAR9] != VAR45)
            VAR16[VAR9] = 3;
    }
    for (VAR9 = 1; VAR9 <= VAR4; VAR9++)
    {
        VAR2->VAR37[VAR9] = 0;
        if (VAR2->VAR43[VAR3][VAR9] != VAR45)
        {
            int VAR46;
            int VAR47 = VAR2->VAR48[VAR9];
            if (VAR2->VAR49[VAR9])
                VAR2->VAR48[VAR9] = VAR2->VAR37[VAR38];
            else if (VAR2->VAR29[VAR9])
                VAR2->VAR48[VAR9] = VAR2->VAR39;
            else
            {
                int VAR50 = FUN3(VAR15, 6);
                if (VAR50 > 60)
                {
                    FUN9(VAR2->VAR32, VAR33, "", VAR50);
                    return VAR34;
                }
                VAR2->VAR48[VAR9] = VAR50 * 3 + 73;
            }
            VAR46 = 3 << (VAR2->VAR43[VAR3][VAR9] - 1);
            VAR2->VAR51[VAR9] = (VAR2->VAR48[VAR9] + VAR46 - 4) / VAR46;
            if (VAR3 > 0 && VAR2->VAR48[VAR9] != VAR47)
                memset(VAR16, 3, VAR17);
        }
    }
    if (VAR13 && VAR2->VAR43[VAR3][VAR38] != VAR45)
    {
        VAR2->VAR51[VAR38] = (VAR2->VAR48[VAR38] - VAR2->VAR37[VAR38]) / (3 << (VAR2->VAR43[VAR3][VAR38] - 1));
    }
    for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
    {
        if (VAR2->VAR43[VAR3][VAR9] != VAR45)
        {
            VAR2->VAR52[VAR9][0] = FUN3(VAR15, 4) << !VAR9;
            if (FUN11(VAR2, VAR15, VAR2->VAR43[VAR3][VAR9], VAR2->VAR51[VAR9], VAR2->VAR52[VAR9][0], &VAR2->VAR52[VAR9][VAR2->VAR37[VAR9] + !!VAR9]))
            {
                return VAR34;
            }
            if (VAR9 != VAR38 && VAR9 != VAR2->VAR44)
                FUN12(VAR15, 2);
        }
    }
    if (VAR2->VAR53)
    {
        if (FUN2(VAR15))
        {
            VAR2->VAR54.VAR55 = VAR56[FUN3(VAR15, 2)] >> VAR2->VAR54.VAR57;
            VAR2->VAR54.VAR58 = VAR59[FUN3(VAR15, 2)] >> VAR2->VAR54.VAR57;
            VAR2->VAR54.VAR60 = VAR61[FUN3(VAR15, 2)];
            VAR2->VAR54.VAR62 = VAR63[FUN3(VAR15, 2)];
            VAR2->VAR54.VAR64 = VAR65[FUN3(VAR15, 3)];
            for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
                VAR16[VAR9] = FUN13(VAR16[VAR9], 2);
        }
        else if (!VAR3)
        {
            FUN9(VAR2->VAR32, VAR33, ""
                                           "");
            return VAR34;
        }
    }
    if (!VAR2->VAR27 || !VAR3)
    {
        if (VAR2->VAR66 && FUN2(VAR15))
        {
            int VAR67 = 0;
            int VAR68;
            VAR68 = (FUN3(VAR15, 6) - 15) << 4;
            for (VAR6 = VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
            {
                if (VAR9 == VAR6 || VAR2->VAR66 == 2)
                    VAR67 = (VAR68 + FUN3(VAR15, 4)) << 2;
                if (VAR3 && VAR2->VAR69[VAR9] != VAR67)
                {
                    VAR16[VAR9] = FUN13(VAR16[VAR9], 1);
                }
                VAR2->VAR69[VAR9] = VAR67;
                if (!VAR2->VAR27)
                {
                    int VAR47 = VAR2->VAR70[VAR9];
                    VAR2->VAR70[VAR9] = VAR71[FUN3(VAR15, 3)];
                    if (VAR3 && VAR47 != VAR2->VAR70[VAR9])
                        VAR16[VAR9] = FUN13(VAR16[VAR9], 2);
                }
            }
        }
        else if (!VAR2->VAR27 && !VAR3)
        {
            FUN9(VAR2->VAR32, VAR33, "");
            return VAR34;
        }
    }
    if (VAR2->VAR72 && FUN2(VAR15))
    {
        for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
        {
            int VAR47 = VAR2->VAR70[VAR9];
            VAR2->VAR70[VAR9] = VAR71[FUN3(VAR15, 3)];
            if (VAR3 && VAR47 != VAR2->VAR70[VAR9])
                VAR16[VAR9] = FUN13(VAR16[VAR9], 2);
        }
    }
    else if (VAR2->VAR27 && !VAR3)
    {
        for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
            VAR2->VAR70[VAR9] = VAR71[4];
    }
    if (VAR2->VAR73 == VAR74 && FUN2(VAR15))
    {
        FUN12(VAR15, 10);
    }
    if (VAR13)
    {
        if (VAR2->VAR75 || FUN2(VAR15))
        {
            int VAR76 = FUN3(VAR15, 3);
            int VAR77 = FUN3(VAR15, 3);
            if (VAR3 && (VAR76 != VAR2->VAR54.VAR78 || VAR77 != VAR2->VAR54.VAR79))
            {
                VAR16[VAR38] = FUN13(VAR16[VAR38], 2);
            }
            VAR2->VAR54.VAR78 = VAR76;
            VAR2->VAR54.VAR79 = VAR77;
        }
        else if (!VAR2->VAR27 && !VAR3)
        {
            FUN9(VAR2->VAR32, VAR33, ""
                                           "");
            return VAR34;
        }
        VAR2->VAR75 = 0;
    }
    if (VAR2->VAR80 && FUN2(VAR15))
    {
        for (VAR9 = !VAR13; VAR9 <= VAR4; VAR9++)
        {
            VAR2->VAR81[VAR9] = FUN3(VAR15, 2);
            if (VAR2->VAR81[VAR9] == VAR82)
            {
                FUN9(VAR2->VAR32, VAR33, "");
                return VAR34;
            }
            VAR16[VAR9] = FUN13(VAR16[VAR9], 2);
        }
        for (VAR9 = !VAR13; VAR9 <= VAR4; VAR9++)
        {
            if (VAR2->VAR81[VAR9] == VAR83)
            {
                VAR2->VAR84[VAR9] = FUN3(VAR15, 3) + 1;
                for (VAR8 = 0; VAR8 < VAR2->VAR84[VAR9]; VAR8++)
                {
                    VAR2->VAR85[VAR9][VAR8] = FUN3(VAR15, 5);
                    VAR2->VAR86[VAR9][VAR8] = FUN3(VAR15, 4);
                    VAR2->VAR87[VAR9][VAR8] = FUN3(VAR15, 3);
                }
                VAR16[VAR9] = FUN13(VAR16[VAR9], 2);
            }
        }
    }
    else if (VAR3 == 0)
    {
        for (VAR9 = 0; VAR9 <= VAR2->VAR42; VAR9++)
        {
            VAR2->VAR81[VAR9] = VAR88;
        }
    }
    for (VAR9 = !VAR13; VAR9 <= VAR2->VAR42; VAR9++)
    {
        if (VAR16[VAR9] > 2)
        {
            FUN14(VAR2->VAR52[VAR9], VAR2->VAR37[VAR9], VAR2->VAR48[VAR9], VAR2->VAR89[VAR9], VAR2->VAR90[VAR9]);
        }
        if (VAR16[VAR9] > 1)
        {
            if (FUN15(&VAR2->VAR54, VAR2->VAR90[VAR9], VAR2->VAR37[VAR9], VAR2->VAR48[VAR9], VAR2->VAR70[VAR9], (VAR9 == VAR2->VAR44), VAR2->VAR81[VAR9], VAR2->VAR84[VAR9], VAR2->VAR85[VAR9], VAR2->VAR86[VAR9], VAR2->VAR87[VAR9], VAR2->VAR91[VAR9]))
            {
                FUN9(VAR2->VAR32, VAR33, "");
                return VAR34;
            }
        }
        if (VAR16[VAR9] > 0)
        {
            const VAR92 *VAR93 = VAR2->VAR94[VAR9] ? VAR95 : VAR96;
            VAR2->VAR97.FUN16(VAR2->VAR91[VAR9], VAR2->VAR89[VAR9], VAR2->VAR37[VAR9], VAR2->VAR48[VAR9], VAR2->VAR69[VAR9], VAR2->VAR54.VAR64, VAR93, VAR2->VAR98[VAR9]);
        }
    }
    if (VAR2->VAR99 && FUN2(VAR15))
    {
        int VAR100 = FUN3(VAR15, 9);
        FUN17(VAR15, 8 * VAR100);
    }
    FUN18(VAR2, VAR3);
    if (VAR2->VAR5 == VAR35)
        FUN19(VAR2);
    for (VAR9 = 1; VAR9 <= VAR2->VAR42; VAR9++)
    {
        int VAR101 = 0;
        INTFLOAT VAR102;
        if (VAR2->VAR5 == VAR103)
            VAR101 = 2 - VAR9;
        if (VAR2->VAR104 && VAR2->VAR105[VAR101])
            VAR102 = VAR2->VAR106[VAR101];
        else
            VAR102 = VAR2->VAR25[VAR101];
        FUN20(VAR2->VAR107[VAR9], VAR2->VAR108[VAR9], VAR102, 256);
        if (VAR2->VAR109 != 0)
            VAR102 = VAR102 * VAR2->VAR110[VAR101];
        VAR102 *= 1.0 / 4194304.0f;
        VAR2->VAR111.FUN21(VAR2->VAR107[VAR9], VAR2->VAR108[VAR9], VAR102, 256);
    }
    if (VAR112 && VAR2->VAR28)
    {
        FUN22(VAR2);
    }
    VAR12 = VAR2->VAR42 != VAR2->VAR113 && !((VAR2->VAR114 & VAR115) && VAR2->VAR4 == VAR2->VAR113);
    if (VAR11)
    {
        if (VAR2->VAR116)
        {
            VAR2->VAR116 = 0;
            FUN23(VAR2);
        }
        FUN24(VAR2, VAR2->VAR42);
        if (VAR12)
        {
            FUN25(VAR2->VAR117, VAR2->VAR118, VAR2->VAR113, VAR2->VAR4, 256);
            FUN26(&VAR2->VAR97, VAR2->VAR117, VAR2->VAR118, VAR2->VAR113, VAR2->VAR4, 256);
        }
    }
    else
    {
        if (VAR12)
        {
            FUN27(VAR119)
            (&VAR2->VAR97, VAR2->VAR120 + 1, VAR2->VAR118, VAR2->VAR113, VAR2->VAR4, 256);
        }
        if (VAR12 && !VAR2->VAR116)
        {
            VAR2->VAR116 = 1;
            FUN27(VAR119)
            (&VAR2->VAR97, VAR2->VAR121, VAR2->VAR118, VAR2->VAR113, VAR2->VAR4, 128);
        }
        FUN24(VAR2, VAR2->VAR113);
    }
    return 0;
}