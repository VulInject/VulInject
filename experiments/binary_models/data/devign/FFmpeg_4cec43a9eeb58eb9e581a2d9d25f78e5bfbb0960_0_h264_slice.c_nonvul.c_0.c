static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6;
    const VAR7 *VAR8;
    unsigned int VAR9;
    unsigned int VAR10;
    int VAR11;
    unsigned int VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17 = 0;
    int VAR18, VAR19;
    int VAR20, VAR21, VAR22;
    int VAR23 = 0;
    VAR9 = FUN2(&VAR4->VAR24);
    if (VAR9 == 0)
    {
        if (VAR2->VAR25 && VAR2->VAR26 && FUN3(VAR2))
        {
            FUN4(VAR2, VAR4, 1);
        }
        VAR2->VAR25 = 0;
        if (!VAR2->VAR27)
        {
            if (VAR2->VAR26 && !VAR2->VAR21)
            {
                FUN5(&VAR2->VAR26->VAR28, VAR29, VAR2->VAR22 == VAR30);
            }
            VAR2->VAR26 = NULL;
        }
    }
    VAR12 = FUN6(&VAR4->VAR24);
    if (VAR12 > 9)
    {
        FUN7(VAR2->VAR31, VAR32, "", VAR12, VAR9);
        return VAR33;
    }
    if (VAR12 > 4)
    {
        VAR12 -= 5;
        VAR4->VAR34 = 1;
    }
    else
        VAR4->VAR34 = 0;
    VAR12 = VAR35[VAR12];
    VAR4->VAR12 = VAR12;
    VAR4->VAR36 = VAR12 & 3;
    if (VAR2->VAR37 == VAR38 && VAR4->VAR36 != VAR39)
    {
        FUN7(VAR2->VAR31, VAR32, "");
        return VAR33;
    }
    VAR10 = FUN2(&VAR4->VAR24);
    if (VAR10 >= VAR40)
    {
        FUN7(VAR2->VAR31, VAR32, "", VAR10);
        return VAR33;
    }
    if (!VAR2->VAR41.VAR42[VAR10])
    {
        FUN7(VAR2->VAR31, VAR32, "", VAR10);
        return VAR33;
    }
    if (!VAR2->VAR43)
    {
        VAR2->VAR41.VAR8 = (const VAR7 *)VAR2->VAR41.VAR42[VAR10]->VAR44;
    }
    else if (VAR2->VAR41.VAR8 != (const VAR7 *)VAR2->VAR41.VAR42[VAR10]->VAR44)
    {
        FUN7(VAR2->VAR31, VAR32, "");
        return VAR33;
    }
    if (!VAR2->VAR41.VAR45[VAR2->VAR41.VAR8->VAR46])
    {
        FUN7(VAR2->VAR31, VAR32, "", VAR2->VAR41.VAR8->VAR46);
        return VAR33;
    }
    if (VAR2->VAR41.VAR6 != (const VAR5 *)VAR2->VAR41.VAR45[VAR2->VAR41.VAR8->VAR46]->VAR44)
    {
        VAR2->VAR41.VAR6 = (VAR5 *)VAR2->VAR41.VAR45[VAR2->VAR41.VAR8->VAR46]->VAR44;
        if (VAR2->VAR47 != VAR2->VAR41.VAR6->VAR47 || VAR2->VAR48 != VAR2->VAR41.VAR6->VAR48)
            VAR17 = 1;
    }
    VAR8 = VAR2->VAR41.VAR8;
    VAR6 = VAR2->VAR41.VAR6;
    if (!VAR2->VAR43)
    {
        VAR2->VAR31->VAR49 = FUN8(VAR6);
        VAR2->VAR31->VAR50 = VAR6->VAR51;
        VAR2->VAR31->VAR52 = VAR6->VAR53;
        if (VAR2->VAR54 != VAR6->VAR54 || VAR2->VAR55 != VAR6->VAR55 * (2 - VAR6->VAR56))
            VAR17 = 1;
        VAR2->VAR54 = VAR6->VAR54;
        VAR2->VAR55 = VAR6->VAR55 * (2 - VAR6->VAR56);
        VAR2->VAR57 = VAR2->VAR54 * VAR2->VAR55;
        VAR2->VAR58 = VAR2->VAR54 + 1;
        VAR2->VAR59 = VAR2->VAR54 * 4;
        VAR2->VAR60 = VAR6->VAR48 <= 1;
        VAR2->VAR61 = 16 * VAR2->VAR54;
        VAR2->VAR62 = 16 * VAR2->VAR55;
        VAR11 = FUN9(VAR2);
        if (VAR11 < 0)
            return VAR11;
        if (VAR6->VAR63)
        {
            VAR2->VAR31->VAR64 = VAR6->VAR65 ? VAR66 : VAR67;
            if (VAR6->VAR68)
            {
                if (VAR2->VAR31->VAR69 != VAR6->VAR69)
                    VAR17 = 1;
                VAR2->VAR31->VAR70 = VAR6->VAR70;
                VAR2->VAR31->VAR71 = VAR6->VAR71;
                VAR2->VAR31->VAR69 = VAR6->VAR69;
            }
        }
    }
    if (VAR2->VAR72 && VAR17)
    {
        VAR2->VAR72 = 0;
        if (VAR4 != VAR2->VAR73)
        {
            FUN7(VAR2->VAR31, VAR32, ""
                                           "",
                   VAR2->VAR61, VAR2->VAR31->VAR74, VAR2->VAR62, VAR2->VAR31->VAR75, VAR2->VAR25 + 1);
            return VAR33;
        }
        FUN10(VAR2);
        if ((VAR11 = FUN11(VAR2)) < 0)
            return VAR11;
        VAR2->VAR31->VAR76 = VAR11;
        FUN7(VAR2->VAR31, VAR77, ""
                                      "",
               VAR2->VAR61, VAR2->VAR62, VAR2->VAR31->VAR76);
        if ((VAR11 = FUN12(VAR2)) < 0)
        {
            FUN7(VAR2->VAR31, VAR32, "");
            return VAR11;
        }
    }
    if (!VAR2->VAR72)
    {
        if (VAR4 != VAR2->VAR73)
        {
            FUN7(VAR2->VAR31, VAR32, "");
            return VAR78;
        }
        if ((VAR11 = FUN11(VAR2)) < 0)
            return VAR11;
        VAR2->VAR31->VAR76 = VAR11;
        if ((VAR11 = FUN12(VAR2)) < 0)
        {
            FUN7(VAR2->VAR31, VAR32, "");
            return VAR11;
        }
    }
    VAR20 = FUN13(&VAR4->VAR24, VAR6->VAR79);
    if (!VAR2->VAR43)
        VAR2->VAR80.VAR20 = VAR20;
    VAR4->VAR81 = 0;
    VAR15 = VAR2->VAR22;
    VAR16 = VAR2->VAR21;
    VAR21 = VAR2->VAR82 == 0;
    if (VAR6->VAR56)
    {
        VAR22 = VAR83;
    }
    else
    {
        VAR18 = FUN14(&VAR4->VAR24);
        if (VAR18)
        {
            VAR19 = FUN14(&VAR4->VAR24);
            VAR22 = VAR84 + VAR19;
        }
        else
        {
            VAR22 = VAR83;
            VAR23 = VAR6->VAR85;
        }
    }
    if (!VAR2->VAR43)
    {
        VAR2->VAR21 = VAR21;
        VAR2->VAR22 = VAR22;
        VAR2->VAR23 = VAR23;
    }
    VAR4->VAR86 = VAR2->VAR22 != VAR83;
    if (VAR2->VAR25 != 0)
    {
        if (VAR15 != VAR22 || VAR16 != VAR21)
        {
            FUN7(VAR2->VAR31, VAR32, "", VAR15, VAR2->VAR22);
            return VAR33;
        }
        else if (!VAR2->VAR26)
        {
            FUN7(VAR2->VAR31, VAR32, "", VAR2->VAR25 + 1);
            return VAR33;
        }
    }
    else
    {
        if (VAR2->VAR80.VAR20 != VAR2->VAR80.VAR87)
        {
            int VAR88 = VAR2->VAR80.VAR87;
            int VAR89 = 1 << VAR6->VAR79;
            if (VAR88 > VAR2->VAR80.VAR20)
                VAR88 -= VAR89;
            if ((VAR2->VAR80.VAR20 - VAR88) > VAR6->VAR53)
            {
                VAR88 = (VAR2->VAR80.VAR20 - VAR6->VAR53) - 1;
                if (VAR88 < 0)
                    VAR88 += VAR89;
                VAR2->VAR80.VAR87 = VAR88;
            }
        }
        if (VAR2->VAR27)
        {
            assert(VAR2->VAR26);
            assert(VAR2->VAR26->VAR90->VAR91[0]);
            assert(VAR2->VAR26->VAR92 != VAR93);
            if (!FUN3(VAR2) || VAR2->VAR22 == VAR15)
            {
                if (!VAR16 && VAR15 != VAR83)
                {
                    FUN5(&VAR2->VAR26->VAR28, VAR29, VAR15 == VAR84);
                }
            }
            else
            {
                if (VAR2->VAR26->VAR20 != VAR2->VAR80.VAR20)
                {
                    if (!VAR16 && VAR15 != VAR83)
                    {
                        FUN5(&VAR2->VAR26->VAR28, VAR29, VAR15 == VAR84);
                    }
                }
                else
                {
                    if (!((VAR15 == VAR84 && VAR2->VAR22 == VAR30) || (VAR15 == VAR30 && VAR2->VAR22 == VAR84)))
                    {
                        FUN7(VAR2->VAR31, VAR32, "", VAR15, VAR2->VAR22);
                        VAR2->VAR22 = VAR15;
                        VAR2->VAR21 = VAR16;
                        return VAR33;
                    }
                    else if (VAR16 != VAR2->VAR21)
                    {
                        FUN15(VAR2->VAR31, "");
                        VAR2->VAR22 = VAR15;
                        VAR2->VAR21 = VAR16;
                        return VAR78;
                    }
                }
            }
        }
        while (VAR2->VAR80.VAR20 != VAR2->VAR80.VAR87 && VAR2->VAR80.VAR20 != (VAR2->VAR80.VAR87 + 1) % (1 << VAR6->VAR79))
        {
            VAR94 *VAR95 = VAR2->VAR96 ? VAR2->VAR97[0] : NULL;
            FUN7(VAR2->VAR31, VAR98, "", VAR2->VAR80.VAR20, VAR2->VAR80.VAR87);
            VAR11 = FUN16(VAR2);
            if (VAR11 < 0)
            {
                VAR2->VAR27 = 0;
                return VAR11;
            }
            VAR2->VAR80.VAR87++;
            VAR2->VAR80.VAR87 %= 1 << VAR6->VAR79;
            VAR2->VAR26->VAR20 = VAR2->VAR80.VAR87;
            FUN5(&VAR2->VAR26->VAR28, VAR29, 0);
            FUN5(&VAR2->VAR26->VAR28, VAR29, 1);
            VAR11 = FUN17(VAR2, 1);
            if (VAR11 < 0 && (VAR2->VAR31->VAR99 & VAR100))
                return VAR11;
            VAR11 = FUN18(VAR2, VAR2->VAR101, VAR2->VAR102);
            if (VAR11 < 0 && (VAR2->VAR31->VAR99 & VAR100))
                return VAR11;
            if (VAR2->VAR96)
            {
                if (VAR95 && VAR2->VAR97[0]->VAR90->VAR61 == VAR95->VAR90->VAR61 && VAR2->VAR97[0]->VAR90->VAR62 == VAR95->VAR90->VAR62 && VAR2->VAR97[0]->VAR90->VAR103 == VAR95->VAR90->VAR103)
                {
                    FUN19(VAR2->VAR97[0]->VAR90->VAR44, VAR2->VAR97[0]->VAR90->VAR104, (const VAR105 **)VAR95->VAR90->VAR44, VAR95->VAR90->VAR104, VAR95->VAR90->VAR103, VAR2->VAR54 * 16, VAR2->VAR55 * 16);
                    VAR2->VAR97[0]->VAR80 = VAR95->VAR80 + 2;
                }
                VAR2->VAR97[0]->VAR20 = VAR2->VAR80.VAR87;
            }
        }
        if (VAR2->VAR27)
        {
            assert(VAR2->VAR26);
            assert(VAR2->VAR26->VAR90->VAR91[0]);
            assert(VAR2->VAR26->VAR92 != VAR93);
            if (!FUN3(VAR2) || VAR2->VAR22 == VAR15)
            {
                VAR2->VAR26 = NULL;
                VAR2->VAR27 = FUN3(VAR2);
            }
            else
            {
                if (VAR2->VAR26->VAR20 != VAR2->VAR80.VAR20)
                {
                    VAR2->VAR27 = 1;
                    VAR2->VAR26 = NULL;
                }
                else
                {
                    VAR2->VAR27 = 0;
                }
            }
        }
        else
        {
            VAR2->VAR27 = FUN3(VAR2);
        }
        if (!FUN3(VAR2) || VAR2->VAR27)
        {
            if (FUN20(VAR2) < 0)
            {
                VAR2->VAR27 = 0;
                return VAR33;
            }
        }
        else
        {
            FUN21(VAR2, 0);
        }
    }
    assert(VAR2->VAR57 == VAR2->VAR54 * VAR2->VAR55);
    if (VAR9 << FUN22(VAR2) >= VAR2->VAR57 || VAR9 >= VAR2->VAR57)
    {
        FUN7(VAR2->VAR31, VAR32, "");
        return VAR33;
    }
    VAR4->VAR106 = VAR4->VAR107 = VAR9 % VAR2->VAR54;
    VAR4->VAR108 = VAR4->VAR109 = (VAR9 / VAR2->VAR54) << FUN22(VAR2);
    if (VAR2->VAR22 == VAR30)
        VAR4->VAR108 = VAR4->VAR109 = VAR4->VAR109 + 1;
    assert(VAR4->VAR109 < VAR2->VAR55);
    if (VAR2->VAR22 == VAR83)
    {
        VAR2->VAR110 = VAR2->VAR80.VAR20;
        VAR2->VAR111 = 1 << VAR6->VAR79;
    }
    else
    {
        VAR2->VAR110 = 2 * VAR2->VAR80.VAR20 + 1;
        VAR2->VAR111 = 1 << (VAR6->VAR79 + 1);
    }
    if (VAR2->VAR37 == VAR38)
        FUN2(&VAR4->VAR24);
    if (VAR6->VAR112 == 0)
    {
        int VAR113 = FUN13(&VAR4->VAR24, VAR6->VAR114);
        if (!VAR2->VAR43)
            VAR2->VAR80.VAR113 = VAR113;
        if (VAR8->VAR115 == 1 && VAR2->VAR22 == VAR83)
        {
            int VAR116 = FUN23(&VAR4->VAR24);
            if (!VAR2->VAR43)
                VAR2->VAR80.VAR116 = VAR116;
        }
    }
    if (VAR6->VAR112 == 1 && !VAR6->VAR117)
    {
        int VAR118 = FUN23(&VAR4->VAR24);
        if (!VAR2->VAR43)
            VAR2->VAR80.VAR118[0] = VAR118;
        if (VAR8->VAR115 == 1 && VAR2->VAR22 == VAR83)
        {
            VAR118 = FUN23(&VAR4->VAR24);
            if (!VAR2->VAR43)
                VAR2->VAR80.VAR118[1] = VAR118;
        }
    }
    if (VAR8->VAR119)
        VAR4->VAR120 = FUN2(&VAR4->VAR24);
    if (VAR4->VAR36 == VAR121)
        VAR4->VAR122 = FUN14(&VAR4->VAR24);
    VAR11 = FUN24(&VAR4->VAR123, VAR4->VAR124, &VAR4->VAR24, VAR8, VAR4->VAR36, VAR2->VAR22);
    if (VAR11 < 0)
        return VAR11;
    if (VAR4->VAR36 != VAR39)
    {
        VAR11 = FUN25(VAR2, VAR4);
        if (VAR11 < 0)
        {
            VAR4->VAR124[1] = VAR4->VAR124[0] = 0;
            return VAR11;
        }
    }
    VAR4->VAR125.VAR126 = 0;
    for (VAR14 = 0; VAR14 < 2; VAR14++)
    {
        VAR4->VAR125.VAR127[VAR14] = 0;
        VAR4->VAR125.VAR128[VAR14] = 0;
    }
    if ((VAR8->VAR129 && VAR4->VAR36 == VAR130) || (VAR8->VAR131 == 1 && VAR4->VAR36 == VAR121))
        FUN26(&VAR4->VAR24, VAR6, VAR4->VAR124, VAR4->VAR36, &VAR4->VAR125);
    if (VAR2->VAR82)
    {
        VAR11 = FUN27(VAR2, &VAR4->VAR24, !(VAR2->VAR31->VAR132 & VAR133) || VAR2->VAR25 == 0);
        if (VAR11 < 0 && (VAR2->VAR31->VAR99 & VAR100))
            return VAR33;
    }
    if (VAR4->VAR36 != VAR39 && VAR8->VAR134)
    {
        VAR13 = FUN6(&VAR4->VAR24);
        if (VAR13 > 2)
        {
            FUN7(VAR2->VAR31, VAR32, "", VAR13);
            return VAR33;
        }
        VAR4->VAR135 = VAR13;
    }
    VAR4->VAR136 = 0;
    VAR13 = VAR8->VAR137 + FUN23(&VAR4->VAR24);
    if (VAR13 > 51 + 6 * (VAR6->VAR47 - 8))
    {
        FUN7(VAR2->VAR31, VAR32, "", VAR13);
        return VAR33;
    }
    VAR4->VAR138 = VAR13;
    VAR4->VAR139[0] = FUN28(VAR2, 0, VAR4->VAR138);
    VAR4->VAR139[1] = FUN28(VAR2, 1, VAR4->VAR138);
    if (VAR4->VAR12 == VAR140)
        FUN14(&VAR4->VAR24);
    if (VAR4->VAR12 == VAR140 || VAR4->VAR12 == VAR141)
        FUN23(&VAR4->VAR24);
    VAR4->VAR142 = 1;
    VAR4->VAR143 = 0;
    VAR4->VAR144 = 0;
    if (VAR8->VAR145)
    {
        VAR13 = FUN6(&VAR4->VAR24);
        if (VAR13 > 2)
        {
            FUN7(VAR2->VAR31, VAR32, "", VAR13);
            return VAR33;
        }
        VAR4->VAR142 = VAR13;
        if (VAR4->VAR142 < 2)
            VAR4->VAR142 ^= 1;
        if (VAR4->VAR142)
        {
            VAR4->VAR143 = FUN23(&VAR4->VAR24) * 2;
            VAR4->VAR144 = FUN23(&VAR4->VAR24) * 2;
            if (VAR4->VAR143 > 12 || VAR4->VAR143 < -12 || VAR4->VAR144 > 12 || VAR4->VAR144 < -12)
            {
                FUN7(VAR2->VAR31, VAR32, "", VAR4->VAR143, VAR4->VAR144);
                return VAR33;
            }
        }
    }
    return 0;
}