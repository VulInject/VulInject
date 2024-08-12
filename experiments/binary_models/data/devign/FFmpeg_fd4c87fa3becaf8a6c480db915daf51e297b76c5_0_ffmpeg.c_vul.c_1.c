static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, double VAR7)
{
    int VAR8, VAR9;
    AVPacket VAR10;
    VAR11 *VAR12 = VAR4->VAR13;
    VAR11 *VAR14 = VAR4->VAR15->VAR16;
    int VAR17, VAR18, VAR19;
    double VAR20, VAR21;
    double VAR22 = 0;
    int VAR23 = 0;
    VAR24 *VAR25 = NULL;
    VAR26 *VAR27 = VAR4->VAR27->VAR27;
    if (VAR4->VAR28 >= 0)
        VAR25 = VAR29[VAR4->VAR28];
    if (VAR27->VAR30[0]->VAR31.VAR32 > 0 && VAR27->VAR30[0]->VAR31.VAR33 > 0)
        VAR22 = 1 / (FUN2(VAR27->VAR30[0]->VAR31) * FUN2(VAR12->VAR34));
    if (VAR25 && VAR25->VAR15->VAR35 != VAR36 && VAR25->VAR15->VAR37 != VAR36 && VAR4->VAR31.VAR32)
        VAR22 = FUN3(VAR22, 1 / (FUN2(VAR4->VAR31) * FUN2(VAR12->VAR34)));
    if (!VAR4->VAR38 && !VAR4->VAR39 && VAR6 && VAR25 && FUN4(FUN5(VAR6) * FUN2(VAR25->VAR15->VAR34) / FUN2(VAR12->VAR34)) > 0)
    {
        VAR22 = FUN4(FUN5(VAR6) * FUN2(VAR25->VAR15->VAR34) / FUN2(VAR12->VAR34));
    }
    if (!VAR6)
    {
        VAR18 = VAR17 = FUN6(VAR4->VAR40[0], VAR4->VAR40[1], VAR4->VAR40[2]);
    }
    else
    {
        VAR21 = VAR7 - VAR4->VAR41;
        VAR20 = VAR21 + VAR22;
        VAR18 = 0;
        VAR17 = 1;
        VAR9 = VAR42;
        if (VAR9 == VAR43)
        {
            if (!strcmp(VAR2->VAR44->VAR45, ""))
            {
                VAR9 = VAR46;
            }
            else
                VAR9 = (VAR2->VAR44->VAR47 & VAR48) ? ((VAR2->VAR44->VAR47 & VAR49) ? VAR50 : VAR46) : VAR51;
            if (VAR25 && VAR9 == VAR51 && VAR52[VAR25->VAR53]->VAR54->VAR55 == 1 && VAR52[VAR25->VAR53]->VAR56 == 0)
            {
                VAR9 = VAR57;
            }
            if (VAR9 == VAR51 && VAR58)
            {
                VAR9 = VAR57;
            }
        }
        if (VAR21 < 0 && VAR20 > 0 && VAR9 != VAR50 && VAR9 != VAR59)
        {
            double VAR60 = FUN3(-VAR21, VAR22);
            if (VAR21 < -0.6)
            {
                FUN7(NULL, VAR61, "", -VAR21);
            }
            else
                FUN7(NULL, VAR62, "", -VAR21);
            VAR7 += VAR60;
            VAR22 -= VAR60;
            VAR21 += VAR60;
        }
        switch (VAR9)
        {
        case VAR57:
            if (VAR4->VAR63 == 0 && VAR20 - VAR22 >= 0.5)
            {
                FUN7(NULL, VAR62, "", (int)FUN4(VAR20 - VAR22));
                VAR20 = VAR22;
                VAR21 = 0;
                VAR4->VAR41 = FUN8(VAR7);
            }
        case VAR51:
            if (VAR64 && VAR20 < VAR64 && VAR4->VAR63)
            {
                VAR17 = 0;
            }
            else if (VAR20 < -1.1)
                VAR17 = 0;
            else if (VAR20 > 1.1)
            {
                VAR17 = FUN4(VAR20);
                if (VAR21 > 1.1)
                    VAR18 = FUN4(VAR21 - 0.6);
            }
            break;
        case VAR46:
            if (VAR20 <= -0.6)
                VAR17 = 0;
            else if (VAR20 > 0.6)
                VAR4->VAR41 = FUN8(VAR7);
            break;
        case VAR59:
        case VAR50:
            VAR4->VAR41 = FUN8(VAR7);
            break;
        default:
            FUN9(0);
        }
    }
    VAR17 = FUN3(VAR17, VAR4->VAR65 - VAR4->VAR63);
    VAR18 = FUN3(VAR18, VAR17);
    memmove(VAR4->VAR40 + 1, VAR4->VAR40, sizeof(VAR4->VAR40[0]) * (FUN10(VAR4->VAR40) - 1));
    VAR4->VAR40[0] = VAR18;
    if (VAR18 == 0 && VAR4->VAR66)
    {
        VAR67++;
        FUN7(NULL, VAR68, "" VAR69 "", VAR4->VAR63, VAR4->VAR15->VAR70, VAR4->VAR71->VAR72);
    }
    if (VAR17 > (VAR18 && VAR4->VAR66) + (VAR17 > VAR18))
    {
        if (VAR17 > VAR73 * 30)
        {
            FUN7(NULL, VAR74, "", VAR17 - 1);
            VAR67++;
            return;
        }
        VAR75 += VAR17 - (VAR18 && VAR4->VAR66) - (VAR17 > VAR18);
        FUN7(NULL, VAR68, "", VAR17 - 1);
    }
    VAR4->VAR66 = VAR17 == VAR18 && VAR6;
    for (VAR19 = 0; VAR19 < VAR17; VAR19++)
    {
        VAR5 *VAR76;
        FUN11(&VAR10);
        VAR10.VAR77 = NULL;
        VAR10.VAR78 = 0;
        if (VAR19 < VAR18 && VAR4->VAR71)
        {
            VAR76 = VAR4->VAR71;
        }
        else
            VAR76 = VAR6;
        if (!VAR76)
            return;
        VAR76->VAR72 = VAR4->VAR41;
        if (!FUN12(VAR4))
            if (VAR4->VAR63 >= VAR4->VAR65)
                return;
        if (VAR2->VAR44->VAR47 & VAR79 && VAR12->VAR16->VAR80 == VAR81)
        {
            if (VAR76->VAR82)
                VAR14->VAR83 = VAR76->VAR84 ? VAR85 : VAR86;
            else
                VAR14->VAR83 = VAR87;
            VAR10.VAR77 = (VAR88 *)VAR76;
            VAR10.VAR78 = sizeof(VAR89);
            VAR10.VAR72 = FUN13(VAR76->VAR72, VAR12->VAR34, VAR4->VAR15->VAR34);
            VAR10.VAR47 |= VAR90;
            FUN14(VAR2, &VAR10, VAR4);
        }
        else
        {
            int VAR91, VAR92 = 0;
            double VAR93;
            if (VAR12->VAR47 & (VAR94 | VAR95) && VAR4->VAR84 >= 0)
                VAR76->VAR84 = !!VAR4->VAR84;
            if (VAR76->VAR82)
            {
                if (VAR12->VAR16->VAR80 == VAR96)
                    VAR14->VAR83 = VAR76->VAR84 ? VAR97 : VAR98;
                else
                    VAR14->VAR83 = VAR76->VAR84 ? VAR85 : VAR86;
            }
            else
                VAR14->VAR83 = VAR87;
            VAR76->VAR99 = VAR12->VAR100;
            VAR76->VAR101 = 0;
            VAR93 = VAR76->VAR72 != VAR36 ? VAR76->VAR72 * FUN2(VAR12->VAR34) : VAR102;
            if (VAR4->VAR103 < VAR4->VAR104 && VAR76->VAR72 >= VAR4->VAR105[VAR4->VAR103])
            {
                VAR4->VAR103++;
                VAR92 = 1;
            }
            else if (VAR4->VAR106)
            {
                double VAR107;
                VAR4->VAR108[VAR109] = VAR93;
                VAR107 = FUN15(VAR4->VAR106, VAR4->VAR108, NULL);
                FUN16(NULL, "", VAR4->VAR108[VAR110], VAR4->VAR108[VAR111], VAR4->VAR108[VAR112], VAR4->VAR108[VAR109], VAR4->VAR108[VAR113], VAR107);
                if (VAR107)
                {
                    VAR92 = 1;
                    VAR4->VAR108[VAR112] = VAR4->VAR108[VAR110];
                    VAR4->VAR108[VAR113] = VAR4->VAR108[VAR109];
                    VAR4->VAR108[VAR111] += 1;
                }
                VAR4->VAR108[VAR110] += 1;
            }
            else if (VAR4->VAR114 && !FUN17(VAR4->VAR114, "", 6) && VAR76->VAR115 == 1)
            {
                VAR92 = 1;
            }
            if (VAR92)
            {
                VAR76->VAR101 = VAR116;
                FUN7(NULL, VAR62, "", VAR93);
            }
            FUN18(NULL);
            if (VAR117)
            {
                FUN7(NULL, VAR118, ""
                                          "",
                       FUN19(VAR76->VAR72), FUN20(VAR76->VAR72, &VAR12->VAR34), VAR12->VAR34.VAR32, VAR12->VAR34.VAR33);
            }
            VAR4->VAR119++;
            VAR8 = FUN21(VAR12, &VAR10, VAR76, &VAR91);
            FUN18("", VAR4->VAR53, VAR4->VAR70);
            if (VAR8 < 0)
            {
                FUN7(NULL, VAR120, "");
                FUN22(1);
            }
            if (VAR91)
            {
                if (VAR117)
                {
                    FUN7(NULL, VAR118, ""
                                              "",
                           FUN19(VAR10.VAR72), FUN20(VAR10.VAR72, &VAR12->VAR34), FUN19(VAR10.VAR121), FUN20(VAR10.VAR121, &VAR12->VAR34));
                }
                if (VAR10.VAR72 == VAR36 && !(VAR12->VAR16->VAR122 & VAR123))
                    VAR10.VAR72 = VAR4->VAR41;
                FUN23(&VAR10, VAR12->VAR34, VAR4->VAR15->VAR34);
                if (VAR117)
                {
                    FUN7(NULL, VAR118, ""
                                              "",
                           FUN19(VAR10.VAR72), FUN20(VAR10.VAR72, &VAR4->VAR15->VAR34), FUN19(VAR10.VAR121), FUN20(VAR10.VAR121, &VAR4->VAR15->VAR34));
                }
                VAR23 = VAR10.VAR78;
                FUN14(VAR2, &VAR10, VAR4);
                if (VAR4->VAR124 && VAR12->VAR125)
                {
                    fprintf(VAR4->VAR124, "", VAR12->VAR125);
                }
            }
        }
        VAR4->VAR41++;
        VAR4->VAR63++;
        if (VAR126 && VAR23)
            FUN24(VAR4, VAR23);
    }
    if (!VAR4->VAR71)
        VAR4->VAR71 = FUN25();
    FUN26(VAR4->VAR71);
    if (VAR6)
        FUN27(VAR4->VAR71, VAR6);
    else
        FUN28(&VAR4->VAR71);
}