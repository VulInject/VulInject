static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    VAR4 *const VAR6 = &VAR3->VAR5;
    unsigned int VAR7;
    unsigned int VAR8;
    int VAR9;
    unsigned int VAR10, VAR11, VAR12, VAR13;
    int VAR14 = 0;
    int VAR15;
    VAR5->VAR16 = VAR2->VAR17 == 0;
    if ((VAR5->VAR18->VAR19 & VAR20) && !VAR2->VAR17)
    {
        VAR5->VAR21.VAR22 = VAR5->VAR23.VAR24;
        VAR5->VAR21.VAR25 = VAR5->VAR23.VAR26;
    }
    else
    {
        VAR5->VAR21.VAR22 = VAR5->VAR23.VAR27;
        VAR5->VAR21.VAR25 = VAR5->VAR23.VAR28;
    }
    VAR7 = FUN2(&VAR5->VAR29);
    if ((VAR5->VAR19 & VAR30) && VAR7 == 0)
    {
        VAR3->VAR31 = 0;
        if (!VAR6->VAR32)
            VAR5->VAR33 = NULL;
    }
    VAR10 = FUN3(&VAR5->VAR29);
    if (VAR10 > 9)
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "", VAR2->VAR10, VAR5->VAR35, VAR5->VAR36);
        return -1;
    }
    if (VAR10 > 4)
    {
        VAR10 -= 5;
        VAR2->VAR37 = 1;
    }
    else
        VAR2->VAR37 = 0;
    VAR10 = VAR38[VAR10];
    if (VAR10 == VAR39 || (VAR3->VAR31 != 0 && VAR10 == VAR3->VAR40))
    {
        VAR14 = 1;
    }
    VAR2->VAR10 = VAR10;
    VAR2->VAR41 = VAR10 & 3;
    VAR5->VAR42 = VAR2->VAR10;
    if (VAR5->VAR42 == VAR43 && VAR6->VAR44 == NULL)
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "");
        return -1;
    }
    VAR8 = FUN2(&VAR5->VAR29);
    if (VAR8 >= VAR45)
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "");
        return -1;
    }
    if (!VAR3->VAR46[VAR8])
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "");
        return -1;
    }
    VAR2->VAR47 = *VAR3->VAR46[VAR8];
    if (!VAR3->VAR48[VAR2->VAR47.VAR49])
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "");
        return -1;
    }
    VAR2->VAR50 = *VAR3->VAR48[VAR2->VAR47.VAR49];
    if (VAR2 == VAR3 && VAR2->VAR51 != VAR8)
    {
        VAR2->VAR51 = VAR8;
        FUN5(VAR2);
    }
    VAR5->VAR52 = VAR2->VAR50.VAR52;
    VAR5->VAR53 = VAR2->VAR50.VAR53 * (2 - VAR2->VAR50.VAR54);
    VAR2->VAR55 = VAR5->VAR52 * 4;
    VAR2->VAR56 = VAR5->VAR52 * 2;
    VAR5->VAR57 = 16 * VAR5->VAR52 - 2 * FUN6(VAR2->VAR50.VAR58, 7);
    if (VAR2->VAR50.VAR54)
        VAR5->VAR59 = 16 * VAR5->VAR53 - 2 * FUN6(VAR2->VAR50.VAR60, 7);
    else
        VAR5->VAR59 = 16 * VAR5->VAR53 - 4 * FUN6(VAR2->VAR50.VAR60, 3);
    if (VAR5->VAR61 && (VAR5->VAR57 != VAR5->VAR18->VAR57 || VAR5->VAR59 != VAR5->VAR18->VAR59))
    {
        if (VAR2 != VAR3)
            return -1;
        FUN7(VAR2);
        FUN8(VAR5->VAR18);
        FUN9(VAR5);
    }
    if (!VAR5->VAR61)
    {
        if (VAR2 != VAR3)
            return -1;
        if (FUN10(VAR5) < 0)
            return -1;
        VAR5->VAR32 = 0;
        FUN11(VAR2);
        FUN12(VAR2);
        for (VAR12 = 1; VAR12 < VAR5->VAR18->VAR62; VAR12++)
        {
            VAR1 *VAR63;
            VAR63 = VAR2->VAR64[VAR12] = FUN13(sizeof(VAR1));
            memcpy(VAR63, VAR2->VAR5.VAR64[VAR12], sizeof(VAR4));
            memset(&VAR63->VAR5 + 1, 0, sizeof(VAR1) - sizeof(VAR4));
            VAR63->VAR50 = VAR2->VAR50;
            VAR63->VAR47 = VAR2->VAR47;
            FUN11(VAR63);
            FUN14(VAR63, VAR2);
        }
        for (VAR12 = 0; VAR12 < VAR5->VAR18->VAR62; VAR12++)
            if (FUN15(VAR2->VAR64[VAR12]) < 0)
                return -1;
        VAR5->VAR18->VAR57 = VAR5->VAR57;
        VAR5->VAR18->VAR59 = VAR5->VAR59;
        VAR5->VAR18->VAR65 = VAR2->VAR50.VAR66;
        if (!VAR5->VAR18->VAR65.VAR67)
            VAR5->VAR18->VAR65.VAR67 = 1;
        if (VAR2->VAR50.VAR68)
        {
            VAR5->VAR18->VAR69 = (VAR70){VAR2->VAR50.VAR71 * 2, VAR2->VAR50.VAR72};
            if (VAR2->VAR73 > 0 && VAR2->VAR73 < 44)
                VAR5->VAR18->VAR69.VAR67 *= 2;
            FUN16(&VAR5->VAR18->VAR69.VAR74, &VAR5->VAR18->VAR69.VAR67, VAR5->VAR18->VAR69.VAR74, VAR5->VAR18->VAR69.VAR67, 1 << 30);
        }
    }
    VAR2->VAR75 = FUN17(&VAR5->VAR29, VAR2->VAR50.VAR76);
    VAR2->VAR77 = 0;
    VAR2->VAR78 = 0;
    VAR15 = VAR6->VAR79;
    if (VAR2->VAR50.VAR54)
    {
        VAR5->VAR79 = VAR80;
    }
    else
    {
        if (FUN18(&VAR5->VAR29))
        {
            VAR5->VAR79 = VAR81 + FUN18(&VAR5->VAR29);
        }
        else
        {
            VAR5->VAR79 = VAR80;
            VAR2->VAR78 = VAR2->VAR50.VAR82;
        }
    }
    VAR2->VAR83 = VAR5->VAR79 != VAR80;
    if (VAR3->VAR31 == 0)
    {
        while (VAR2->VAR75 != VAR2->VAR84 && VAR2->VAR75 != (VAR2->VAR84 + 1) % (1 << VAR2->VAR50.VAR76))
        {
            FUN4(NULL, VAR85, "", VAR2->VAR75, VAR2->VAR84);
            FUN19(VAR2);
            VAR2->VAR84++;
            VAR2->VAR84 %= 1 << VAR2->VAR50.VAR76;
            VAR5->VAR33->VAR75 = VAR2->VAR84;
            FUN20(VAR2, NULL, 0);
        }
        if (VAR6->VAR32)
        {
            assert(VAR6->VAR33);
            assert(VAR6->VAR33->VAR86[0]);
            assert(VAR6->VAR33->VAR87 != VAR88);
            if (!VAR89 || VAR5->VAR79 == VAR15)
            {
                VAR6->VAR33 = NULL;
                VAR6->VAR32 = VAR89;
            }
            else
            {
                if (VAR2->VAR17 && VAR6->VAR33->VAR87 && VAR6->VAR33->VAR75 != VAR2->VAR75)
                {
                    VAR6->VAR32 = 1;
                    VAR6->VAR33 = NULL;
                }
                else
                {
                    VAR6->VAR32 = 0;
                }
            }
        }
        else
        {
            assert(!VAR6->VAR33);
            VAR6->VAR32 = VAR89;
        }
        if ((!VAR89 || VAR6->VAR32) && FUN19(VAR2) < 0)
        {
            VAR6->VAR32 = 0;
            return -1;
        }
    }
    if (VAR2 != VAR3)
        FUN21(VAR2, VAR3);
    VAR5->VAR33->VAR75 = VAR2->VAR75;
    assert(VAR5->VAR90 == VAR5->VAR52 * VAR5->VAR53);
    if (VAR7 << VAR91 >= VAR5->VAR90 || VAR7 >= VAR5->VAR90)
    {
        FUN4(VAR2->VAR5.VAR18, VAR34, "");
        return -1;
    }
    VAR5->VAR92 = VAR5->VAR35 = VAR7 % VAR5->VAR52;
    VAR5->VAR93 = VAR5->VAR36 = (VAR7 / VAR5->VAR52) << VAR91;
    if (VAR5->VAR79 == VAR94)
        VAR5->VAR93 = VAR5->VAR36 = VAR5->VAR36 + 1;
    assert(VAR5->VAR36 < VAR5->VAR53);
    if (VAR5->VAR79 == VAR80)
    {
        VAR2->VAR95 = VAR2->VAR75;
        VAR2->VAR96 = 1 << VAR2->VAR50.VAR76;
    }
    else
    {
        VAR2->VAR95 = 2 * VAR2->VAR75 + 1;
        VAR2->VAR96 = 1 << (VAR2->VAR50.VAR76 + 1);
    }
    if (VAR2->VAR97 == VAR98)
    {
        FUN2(&VAR5->VAR29);
    }
    if (VAR2->VAR50.VAR99 == 0)
    {
        VAR2->VAR100 = FUN17(&VAR5->VAR29, VAR2->VAR50.VAR101);
        if (VAR2->VAR47.VAR102 == 1 && VAR5->VAR79 == VAR80)
        {
            VAR2->VAR103 = FUN22(&VAR5->VAR29);
        }
    }
    if (VAR2->VAR50.VAR99 == 1 && !VAR2->VAR50.VAR104)
    {
        VAR2->VAR105[0] = FUN22(&VAR5->VAR29);
        if (VAR2->VAR47.VAR102 == 1 && VAR5->VAR79 == VAR80)
            VAR2->VAR105[1] = FUN22(&VAR5->VAR29);
    }
    FUN23(VAR2);
    if (VAR2->VAR47.VAR106)
    {
        VAR2->VAR107 = FUN2(&VAR5->VAR29);
    }
    VAR2->VAR108[0] = VAR2->VAR47.VAR108[0];
    VAR2->VAR108[1] = VAR2->VAR47.VAR108[1];
    if (VAR2->VAR41 != VAR39)
    {
        if (VAR2->VAR41 == VAR43)
        {
            VAR2->VAR109 = FUN18(&VAR5->VAR29);
        }
        VAR9 = FUN18(&VAR5->VAR29);
        if (VAR9)
        {
            VAR2->VAR108[0] = FUN2(&VAR5->VAR29) + 1;
            if (VAR2->VAR41 == VAR43)
                VAR2->VAR108[1] = FUN2(&VAR5->VAR29) + 1;
            if (VAR2->VAR108[0] - 1 > 32 - 1 || VAR2->VAR108[1] - 1 > 32 - 1)
            {
                FUN4(VAR2->VAR5.VAR18, VAR34, "");
                VAR2->VAR108[0] = VAR2->VAR108[1] = 1;
                return -1;
            }
        }
        if (VAR2->VAR41 == VAR43)
            VAR2->VAR110 = 2;
        else
            VAR2->VAR110 = 1;
    }
    else
        VAR2->VAR110 = 0;
    if (!VAR14)
    {
        FUN24(VAR2);
    }
    if (VAR2->VAR41 != VAR39 && FUN25(VAR2) < 0)
        return -1;
    if (VAR2->VAR41 != VAR39)
    {
        VAR5->VAR44 = &VAR2->VAR111[0][0];
        FUN26(&VAR5->VAR112, VAR5->VAR44);
    }
    if (VAR2->VAR41 == VAR43)
    {
        VAR5->VAR113 = &VAR2->VAR111[1][0];
        FUN26(&VAR5->VAR114, VAR5->VAR113);
    }
    if ((VAR2->VAR47.VAR115 && VAR2->VAR41 == VAR116) || (VAR2->VAR47.VAR117 == 1 && VAR2->VAR41 == VAR43))
        FUN27(VAR2);
    else if (VAR2->VAR47.VAR117 == 2 && VAR2->VAR41 == VAR43)
        FUN28(VAR2);
    else
    {
        VAR2->VAR118 = 0;
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR2->VAR119[VAR12] = 0;
            VAR2->VAR120[VAR12] = 0;
        }
    }
    if (VAR2->VAR17)
        FUN29(VAR3, &VAR5->VAR29);
    if (VAR121)
        FUN30(VAR2);
    if (VAR2->VAR41 == VAR43 && !VAR2->VAR109)
        FUN31(VAR2);
    FUN32(VAR2);
    if (VAR2->VAR41 != VAR39 && VAR2->VAR47.VAR122)
    {
        VAR11 = FUN3(&VAR5->VAR29);
        if (VAR11 > 2)
        {
            FUN4(VAR5->VAR18, VAR34, "");
            return -1;
        }
        VAR2->VAR123 = VAR11;
    }
    VAR2->VAR124 = 0;
    VAR11 = VAR2->VAR47.VAR125 + FUN22(&VAR5->VAR29);
    if (VAR11 > 51)
    {
        FUN4(VAR5->VAR18, VAR34, "", VAR11);
        return -1;
    }
    VAR5->VAR126 = VAR11;
    VAR2->VAR127[0] = FUN33(VAR2, 0, VAR5->VAR126);
    VAR2->VAR127[1] = FUN33(VAR2, 1, VAR5->VAR126);
    if (VAR2->VAR10 == VAR128)
    {
        FUN18(&VAR5->VAR29);
    }
    if (VAR2->VAR10 == VAR128 || VAR2->VAR10 == VAR129)
    {
        FUN22(&VAR5->VAR29);
    }
    VAR2->VAR130 = 1;
    VAR2->VAR131 = 0;
    VAR2->VAR132 = 0;
    if (VAR2->VAR47.VAR133)
    {
        VAR11 = FUN3(&VAR5->VAR29);
        if (VAR11 > 2)
        {
            FUN4(VAR5->VAR18, VAR34, "", VAR11);
            return -1;
        }
        VAR2->VAR130 = VAR11;
        if (VAR2->VAR130 < 2)
            VAR2->VAR130 ^= 1;
        if (VAR2->VAR130)
        {
            VAR2->VAR131 = FUN22(&VAR5->VAR29) << 1;
            VAR2->VAR132 = FUN22(&VAR5->VAR29) << 1;
        }
    }
    if (VAR5->VAR18->VAR134 >= VAR135 || (VAR5->VAR18->VAR134 >= VAR136 && VAR2->VAR41 != VAR39) || (VAR5->VAR18->VAR134 >= VAR137 && VAR2->VAR41 == VAR43) || (VAR5->VAR18->VAR134 >= VAR138 && VAR2->VAR17 == 0))
        VAR2->VAR130 = 0;
    if (VAR2->VAR130 == 1 && VAR3->VAR139 > 1)
    {
        if (VAR5->VAR18->VAR19 & VAR20)
        {
            VAR2->VAR130 = 2;
        }
        else
        {
            VAR3->VAR139 = 1;
            if (!VAR3->VAR140)
            {
                FUN4(VAR5->VAR18, VAR141, "");
                VAR3->VAR140 = 1;
            }
            if (VAR2 != VAR3)
                return 1;
        }
    }
    if (VAR2->VAR47.VAR142 > 1 && VAR2->VAR47.VAR143 >= 3 && VAR2->VAR47.VAR143 <= 5) VAR144 = FUN17 ( & VAR5 -> VAR29 , ? ) ;
    VAR3->VAR40 = VAR10;
    VAR2->VAR145 = ++VAR3->VAR31;
    if (VAR2->VAR145 >= VAR146)
    {
        FUN4(VAR5->VAR18, VAR34, "");
    }
    for (VAR13 = 0; VAR13 < 2; VAR13++)
    {
        int *VAR147 = VAR2->VAR147[VAR2->VAR145 & (VAR146 - 1)][VAR13];
        VAR147[0] = VAR147[1] = -1;
        for (VAR12 = 0; VAR12 < 16; VAR12++)
            VAR147[VAR12 + 2] = 4 * VAR2->VAR111[VAR13][VAR12].VAR75 + (VAR2->VAR111[VAR13][VAR12].VAR87 & 3);
        VAR147[18 + 0] = VAR147[18 + 1] = -1;
        for (VAR12 = 16; VAR12 < 48; VAR12++)
            VAR147[VAR12 + 4] = 4 * VAR2->VAR111[VAR13][VAR12].VAR75 + (VAR2->VAR111[VAR13][VAR12].VAR87 & 3);
    }
    VAR2->VAR148 = (VAR5->VAR149 & VAR150) ? 0 : 16;
    VAR2->VAR151 = (VAR121 || VAR89) ? 0 : VAR2->VAR148;
    VAR5->VAR18->VAR152 = VAR2->VAR50.VAR153;
    if (VAR5->VAR18->VAR154 & VAR155)
    {
        FUN4(VAR2->VAR5.VAR18, VAR85, "", VAR2->VAR145, (VAR5->VAR79 == VAR80 ? "" : VAR5->VAR79 == VAR81 ? ""
                                                                                                                                                                                                                                               : ""),
               VAR7, FUN34(VAR2->VAR10), VAR2->VAR37 ? "" : "", VAR2->VAR97 == VAR98 ? "" : "", VAR8, VAR2->VAR75, VAR5->VAR33->VAR156[0], VAR5->VAR33->VAR156[1], VAR2->VAR108[0], VAR2->VAR108[1], VAR5->VAR126, VAR2->VAR130, VAR2->VAR131 / 2, VAR2->VAR132 / 2, VAR2->VAR118, VAR2->VAR118 == 1 && VAR2->VAR157 ? "" : "", VAR2->VAR10 == VAR43 ? (VAR2->VAR109 ? "" : "") : "");
    }
    return 0;
}