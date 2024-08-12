int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = 0;
    for (;;)
    {
        if (FUN2(VAR4))
            return VAR12;
        if (VAR8->VAR13 < VAR14 || VAR8->VAR15 < 1)
        {
            int VAR16 = VAR8->VAR13 + VAR8->VAR17;
            assert(VAR16 >= 0);
            FUN3(VAR4, VAR16);
            VAR8->VAR18 = FUN4(VAR4);
            if (VAR8->VAR19 != (VAR20)-1 && (VAR8->VAR18 - VAR8->VAR21 >= VAR8->VAR19))
                return VAR12;
            return 1;
        }
        if (VAR8->VAR22 == 0)
        {
            if (FUN5(VAR2, VAR4) < 0)
            {
                VAR8->VAR15 = 0;
                continue;
            }
            if (VAR8->VAR23 < 0 || VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR26 || (!VAR8->VAR27 && VAR2->VAR24[VAR8->VAR23]->VAR25 >= VAR28))
            {
                VAR8->VAR22 = 0;
                FUN3(VAR4, VAR8->VAR29);
                VAR8->VAR13 -= VAR8->VAR29;
                if (VAR8->VAR23 < 0)
                    FUN6(VAR2, VAR30, "", VAR8->VAR29);
                continue;
            }
            VAR8->VAR11 = VAR2->VAR24[VAR8->VAR23]->VAR9;
        }
        VAR11 = VAR8->VAR11;
        if (VAR8->VAR31 == 1)
        {
            VAR8->VAR32 = VAR8->VAR22;
            VAR8->VAR22 += VAR8->VAR33;
            VAR8->VAR34 = VAR8->VAR29 = FUN7(VAR4);
            VAR8->VAR13--;
            VAR8->VAR35--;
            if (VAR8->VAR35 < VAR8->VAR34)
            {
                VAR8->VAR22 = 0;
                FUN3(VAR4, VAR8->VAR35);
                VAR8->VAR13 -= VAR8->VAR35;
                continue;
            }
            VAR8->VAR35 -= VAR8->VAR34;
        }
        if (VAR11->VAR36 + VAR8->VAR29 <= VAR11->VAR6.VAR37 && VAR11->VAR36 + VAR8->VAR29 > VAR8->VAR34)
        {
            FUN6(VAR2, VAR38, "", VAR11->VAR36, VAR8->VAR29, VAR8->VAR34, VAR11->VAR6.VAR37);
            VAR8->VAR34 = VAR11->VAR6.VAR37;
        }
        if (VAR11->VAR6.VAR37 != VAR8->VAR34 || VAR11->VAR36 + VAR8->VAR29 > VAR11->VAR6.VAR37)
        {
            if (VAR11->VAR6.VAR39)
            {
                FUN6(VAR2, VAR38, "", VAR11->VAR6.VAR37, VAR8->VAR34);
                VAR11->VAR36 = 0;
                FUN8(&VAR11->VAR6);
            }
            FUN9(&VAR11->VAR6, VAR8->VAR34);
            VAR11->VAR40 = VAR8->VAR41;
            VAR11->VAR6.VAR42 = VAR8->VAR32;
            VAR11->VAR6.VAR23 = VAR8->VAR23;
            VAR11->VAR6.VAR43 = VAR11->VAR18 = VAR8->VAR18;
            if (VAR2->VAR24[VAR8->VAR23]->VAR44->VAR45 == VAR46)
                VAR8->VAR27 = 1;
            if (VAR8->VAR27)
                VAR11->VAR6.VAR47 |= VAR48;
        }
        VAR8->VAR13 -= VAR8->VAR29;
        if (VAR8->VAR13 < 0)
            continue;
        if (VAR8->VAR49 >= VAR11->VAR6.VAR37 || VAR8->VAR29 > VAR11->VAR6.VAR37 - VAR8->VAR49)
        {
            FUN6(VAR2, VAR30, "", VAR8->VAR49, VAR8->VAR29, VAR11->VAR6.VAR37);
            continue;
        }
        FUN10(VAR4, VAR11->VAR6.VAR39 + VAR8->VAR49, VAR8->VAR29);
        if (VAR2->VAR50 && VAR2->VAR51 == 20)
            FUN11(VAR2->VAR50, VAR11->VAR6.VAR39 + VAR8->VAR49, VAR8->VAR29);
        VAR11->VAR36 += VAR8->VAR29;
        if (VAR11->VAR36 == VAR11->VAR6.VAR37)
        {
            if (VAR2->VAR24[VAR8->VAR23]->VAR44->VAR52 == VAR53 && VAR11->VAR6.VAR37 > 100)
            {
                int VAR54;
                for (VAR54 = 0; VAR54 < VAR11->VAR6.VAR37 && !VAR11->VAR6.VAR39[VAR54]; VAR54++)
                    ;
                if (VAR54 == VAR11->VAR6.VAR37)
                {
                    FUN6(VAR2, VAR55, "");
                    VAR11->VAR36 = 0;
                    FUN8(&VAR11->VAR6);
                    continue;
                }
            }
            if (VAR11->VAR56 > 1)
            {
                if (VAR11->VAR6.VAR37 != VAR11->VAR57 * VAR11->VAR56)
                {
                    FUN6(VAR2, VAR30, "", VAR11->VAR6.VAR37, VAR11->VAR57, VAR11->VAR56);
                }
                else
                {
                    VAR58 *VAR59 = FUN12(VAR11->VAR6.VAR37);
                    if (VAR59)
                    {
                        int VAR60 = 0;
                        while (VAR60 < VAR11->VAR6.VAR37)
                        {
                            int VAR61 = VAR60 / VAR11->VAR62;
                            int VAR63 = VAR61 / VAR11->VAR56;
                            int VAR64 = VAR61 % VAR11->VAR56;
                            int VAR65 = VAR63 + VAR64 * VAR11->VAR57 / VAR11->VAR62;
                            assert(VAR60 + VAR11->VAR62 <= VAR11->VAR6.VAR37);
                            assert(VAR65 + 1 <= VAR11->VAR6.VAR37 / VAR11->VAR62);
                            memcpy(VAR59 + VAR60, VAR11->VAR6.VAR39 + VAR65 * VAR11->VAR62, VAR11->VAR62);
                            VAR60 += VAR11->VAR62;
                        }
                        FUN13(VAR11->VAR6.VAR39);
                        VAR11->VAR6.VAR39 = VAR59;
                    }
                }
            }
            VAR11->VAR36 = 0;
            *VAR6 = VAR11->VAR6;
            VAR11->VAR6.VAR37 = 0;
            VAR11->VAR6.VAR39 = 0;
            break;
        }
    }
    return 0;
}
static int FUN14(VAR1 *VAR2, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    for (;;)
    {
        int VAR16;
        if ((VAR16 = FUN1(VAR2, VAR2->VAR4, VAR6)) <= 0)
            return VAR16;
        if ((VAR16 = FUN15(VAR2, VAR2->VAR4)) < 0)
            assert(VAR8->VAR13 < VAR14 || VAR8->VAR15 < 1);
        VAR8->VAR22 = 0;
    }
    return 0;
}
static void FUN16(VAR1 *VAR2)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR54;
    VAR8->VAR66 = 0;
    VAR8->VAR13 = 0;
    VAR8->VAR15 = 0;
    VAR8->VAR67 = 0;
    VAR8->VAR68 = 0;
    VAR8->VAR69 = 0;
    VAR8->VAR70 = 0;
    VAR8->VAR15 = 0;
    VAR8->VAR41 = 0;
    VAR8->VAR31 = 0;
    VAR8->VAR27 = 0;
    VAR8->VAR17 = 0;
    VAR8->VAR49 = 0;
    VAR8->VAR29 = 0;
    VAR8->VAR32 = 0;
    VAR8->VAR35 = 0;
    VAR8->VAR34 = 0;
    VAR8->VAR33 = 0;
    VAR8->VAR22 = 0;
    for (VAR54 = 0; VAR54 < VAR2->VAR71; VAR54++)
    {
        VAR11 = VAR2->VAR24[VAR54]->VAR9;
        FUN8(&VAR11->VAR6);
        VAR11->VAR36 = 0;
        VAR11->VAR40 = 0;
    }
    VAR8->VAR11 = NULL;
}
static int FUN17(VAR1 *VAR2)
{
    int VAR54;
    FUN16(VAR2);
    for (VAR54 = 0; VAR54 < VAR2->VAR71; VAR54++)
    {
        VAR72 *VAR73 = VAR2->VAR24[VAR54];
        FUN13(VAR73->VAR44->VAR74);
    }
    return 0;
}
static VAR75 FUN18(VAR1 *VAR2, int VAR23, VAR75 *VAR76, int64_t VAR77)
{
    VAR7 *VAR8 = VAR2->VAR9;
    AVPacket VAR78, *VAR6 = &VAR78;
    VAR10 *VAR11;
    int64_t VAR79;
    int64_t VAR43 = *VAR76;
    int VAR54;
    int64_t VAR80[VAR2->VAR71];
    for (VAR54 = 0; VAR54 < VAR2->VAR71; VAR54++)
    {
        VAR80[VAR54] = VAR43;
    }
    VAR43 = (VAR43 + VAR8->VAR81 - 1 - VAR2->VAR82) / VAR8->VAR81 * VAR8->VAR81 + VAR2->VAR82;
    *VAR76 = VAR43;
    FUN19(VAR2->VAR4, VAR43, VAR83);
    FUN16(VAR2);
    for (;;)
    {
        if (FUN20(VAR2, VAR6) < 0)
        {
            FUN6(VAR2, VAR38, "");
            return VAR84;
        }
        VAR79 = VAR6->VAR79;
        FUN8(VAR6);
        if (VAR6->VAR47 & VAR48)
        {
            VAR54 = VAR6->VAR23;
            VAR11 = VAR2->VAR24[VAR54]->VAR9;
            VAR43 = VAR11->VAR18;
            FUN21(VAR2->VAR24[VAR54], VAR43, VAR79, VAR6->VAR37, VAR43 - VAR80[VAR54] + 1, VAR85);
            VAR80[VAR54] = VAR11->VAR18 + 1;
            if (VAR6->VAR23 == VAR23)
                break;
        }
    }
    *VAR76 = VAR43;
    return VAR79;
}
static void FUN22(VAR1 *VAR2, int VAR23)
{
    ff_asf_guid VAR86;
    VAR7 *VAR8 = VAR2->VAR9;
    int64_t VAR87 = FUN4(VAR2->VAR4);
    int VAR54;
    FUN19(VAR2->VAR4, VAR8->VAR21 + VAR8->VAR19, VAR83);
    FUN23(VAR2->VAR4, &VAR86);
    if (!FUN24(&VAR86, &VAR88))
    {
        int64_t VAR89;
        int VAR90, VAR91;
        int64_t VAR92 = FUN25(VAR2->VAR4);
        FUN23(VAR2->VAR4, &VAR86);
        VAR89 = FUN25(VAR2->VAR4);
        VAR90 = FUN26(VAR2->VAR4);
        VAR91 = FUN26(VAR2->VAR4);
        FUN6(VAR2, VAR55, "" VAR93 "", VAR89, VAR90, VAR91);
        for (VAR54 = 0; VAR54 < VAR91; VAR54++)
        {
            int VAR94 = FUN26(VAR2->VAR4);
            int VAR95 = FUN27(VAR2->VAR4);
            int64_t VAR43 = VAR2->VAR82 + VAR8->VAR81 * (VAR75)VAR94;
            int64_t VAR96 = FUN28(VAR89, VAR54, 10000);
            FUN6(VAR2, VAR55, "", VAR94, VAR95);
            FUN21(VAR2->VAR24[VAR23], VAR43, VAR96, VAR8->VAR81, 0, VAR85);
        }
        VAR8->VAR97 = 1;
    }
    FUN19(VAR2->VAR4, VAR87, VAR83);
}
static int FUN29(VAR1 *VAR2, int VAR23, int64_t VAR79, int VAR47)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR72 *VAR73 = VAR2->VAR24[VAR23];
    int64_t VAR43;
    int VAR98;
    if (VAR8->VAR81 <= 0)
        return -1;
    if (VAR2->VAR4)
    {
        int VAR16 = FUN30(VAR2->VAR4, VAR23, VAR79, VAR47);
        if (VAR16 >= 0)
            FUN16(VAR2);
        if (VAR16 != FUN31(VAR99))
            return VAR16;
    }
    if (!VAR8->VAR97)
        FUN22(VAR2, VAR23);
    if (!(VAR8->VAR97 && VAR73->VAR100))
    {
        if (FUN32(VAR2, VAR23, VAR79, VAR47) < 0)
            return -1;
    }
    else
    {
        VAR98 = FUN33(VAR73, VAR79, VAR47);
        if (VAR98 < 0)
            return -1;
        VAR43 = VAR73->VAR100[VAR98].VAR43;
        VAR79 = VAR73->VAR100[VAR98].VAR101;
        FUN6(VAR2, VAR55, "" VAR102 "", VAR43);
        FUN19(VAR2->VAR4, VAR43, VAR83);
    }
    FUN16(VAR2);
    return 0;
}
AVInputFormat VAR103 = {
    "",
    FUN34(""),
    sizeof(VAR7),
    VAR104,
    VAR105,
    VAR106,
    VAR107,
    VAR108,
    VAR109,
    .VAR110 = VAR111,
};