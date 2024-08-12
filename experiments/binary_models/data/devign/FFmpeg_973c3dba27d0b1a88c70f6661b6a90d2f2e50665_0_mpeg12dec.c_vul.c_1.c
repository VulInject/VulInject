static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 **VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    const int VAR9 = VAR2->VAR8->VAR9;
    const int VAR10 = VAR2->VAR11 != VAR12;
    int VAR13;
    VAR2->VAR14 = VAR2->VAR15 = -1;
    FUN2(VAR3 < VAR2->VAR16);
    FUN3(&VAR2->VAR17, *VAR5, VAR6 * 8);
    if (VAR2->VAR18 != VAR19 && VAR2->VAR16 > 2800 / 16)
        FUN4(&VAR2->VAR17, 3);
    FUN5(VAR2);
    VAR2->VAR20 = 0;
    VAR2->VAR21 = FUN6(VAR2);
    if (VAR2->VAR21 == 0)
    {
        FUN7(VAR2->VAR8, VAR22, "");
        return VAR23;
    }
    if (FUN8(&VAR2->VAR17) < 0)
        return VAR23;
    VAR2->VAR24 = 0;
    if (VAR3 == 0 && VAR2->VAR25 == FUN9(""))
    {
        FUN10(&VAR2->VAR17);
    }
    else
    {
        while (FUN11(&VAR2->VAR17) > 0)
        {
            int VAR26 = FUN12(&VAR2->VAR17, VAR27.VAR28, VAR29, 2);
            if (VAR26 < 0)
            {
                FUN7(VAR2->VAR8, VAR22, "");
                return VAR23;
            }
            if (VAR26 >= 33)
            {
                if (VAR26 == 33)
                    VAR2->VAR24 += 33;
            }
            else
            {
                VAR2->VAR24 += VAR26;
                break;
            }
        }
    }
    if (VAR2->VAR24 >= (unsigned)VAR2->VAR30)
    {
        FUN7(VAR2->VAR8, VAR22, "");
        return VAR23;
    }
    if (VAR8->VAR31 && VAR8->VAR31->VAR32)
    {
        const VAR4 *VAR33, *VAR34 = *VAR5 - 4;
        int VAR35 = -1;
        VAR33 = FUN13(VAR34 + 2, *VAR5 + VAR6, &VAR35);
        if (VAR33 < *VAR5 + VAR6)
            VAR33 -= 4;
        VAR2->VAR3 = VAR3;
        if (VAR8->VAR31->FUN14(VAR8, VAR34, VAR33 - VAR34) < 0)
            return VAR36;
        *VAR5 = VAR33;
        return VAR37;
    }
    VAR2->VAR14 = VAR2->VAR24;
    VAR2->VAR15 = VAR2->VAR3 = VAR3;
    VAR2->VAR38 = 0;
    FUN15(VAR2);
    if (VAR2->VAR3 == 0 && VAR2->VAR24 == 0 && (VAR2->VAR39 || VAR2->VAR11 == VAR12))
    {
        if (VAR2->VAR8->VAR40 & VAR41)
        {
            FUN7(VAR2->VAR8, VAR42, "", VAR2->VAR21, VAR2->VAR43[0][0], VAR2->VAR43[0][1], VAR2->VAR43[1][0], VAR2->VAR43[1][1], VAR2->VAR44 == VAR45 ? "" : (VAR2->VAR44 == VAR46 ? "" : (VAR2->VAR44 == VAR47 ? "" : "")), VAR2->VAR48 ? "" : "", VAR2->VAR49 ? "" : "", VAR2->VAR50 ? "" : "", VAR2->VAR51 ? "" : "", VAR2->VAR52, VAR2->VAR11, VAR2->VAR53, VAR2->VAR54, VAR2->VAR55, VAR2->VAR56, VAR2->VAR57, VAR2->VAR58 ? "" : "");
        }
    }
    for (;;)
    {
        if ((VAR59 || VAR60) && VAR2->VAR61)
            FUN16(VAR2);
        if ((VAR13 = FUN17(VAR2, VAR2->VAR62)) < 0)
            return VAR13;
        if (VAR2->VAR63.VAR64[0] && !VAR2->VAR65)
        {
            const int VAR66 = VAR2->VAR67;
            int VAR68 = VAR2->VAR24 * 2 + VAR2->VAR3 * 2 * VAR66;
            int VAR69 = 4 * (VAR2->VAR24 + VAR2->VAR3 * VAR2->VAR70);
            int VAR71, VAR72, VAR73, VAR74;
            for (VAR74 = 0; VAR74 < 2; VAR74++)
            {
                for (VAR73 = 0; VAR73 < 2; VAR73++)
                {
                    if (VAR2->VAR75 || (VAR73 == 1 && VAR2->VAR44 != VAR47))
                    {
                        VAR71 = VAR72 = 0;
                    }
                    else if (VAR2->VAR76 == VAR77 || (VAR2->VAR76 == VAR78 && VAR10))
                    {
                        VAR71 = VAR2->VAR79[VAR73][0][0];
                        VAR72 = VAR2->VAR79[VAR73][0][1];
                    }
                    else
                    {
                        VAR71 = VAR2->VAR79[VAR73][VAR74][0];
                        VAR72 = VAR2->VAR79[VAR73][VAR74][1];
                    }
                    VAR2->VAR63.VAR64[VAR73][VAR68][0] = VAR71;
                    VAR2->VAR63.VAR64[VAR73][VAR68][1] = VAR72;
                    VAR2->VAR63.VAR64[VAR73][VAR68 + 1][0] = VAR71;
                    VAR2->VAR63.VAR64[VAR73][VAR68 + 1][1] = VAR72;
                    VAR2->VAR63.VAR80[VAR73][VAR69] = VAR2->VAR63.VAR80[VAR73][VAR69 + 1] = VAR2->VAR81[VAR73][VAR74];
                    FUN18(VAR2->VAR81[VAR73][VAR74] == 0 || VAR2->VAR81[VAR73][VAR74] == 1);
                }
                VAR68 += VAR66;
                VAR69 += 2;
            }
        }
        VAR2->VAR82[0] += 16 >> VAR9;
        VAR2->VAR82[1] += (16 >> VAR9) >> VAR2->VAR83;
        VAR2->VAR82[2] += (16 >> VAR9) >> VAR2->VAR83;
        FUN19(VAR2, VAR2->VAR62);
        if (++VAR2->VAR24 >= VAR2->VAR30)
        {
            const int VAR84 = 16 >> VAR2->VAR8->VAR9;
            FUN20(VAR2, VAR84 * (VAR2->VAR3 >> VAR10), VAR84);
            FUN21(VAR2);
            VAR2->VAR24 = 0;
            VAR2->VAR3 += 1 << VAR10;
            if (VAR2->VAR3 >= VAR2->VAR16)
            {
                int VAR85 = FUN11(&VAR2->VAR17);
                int VAR86 = VAR2->VAR87 == 2 && VAR2->VAR44 == VAR45 && VAR8->VAR88 == 0 && VAR8->VAR89 == 5 && VAR2->VAR52 == 2 && VAR2->VAR55 == 1 && VAR2->VAR50 == 0 && VAR2->VAR49 == 0;
                if (VAR85 >= 32 && !VAR86)
                {
                    GetBitContext VAR17 = VAR2->VAR17;
                    FUN22(&VAR17);
                    if (FUN23(&VAR17, 24) == 0x060E2B)
                    {
                        FUN7(VAR8, VAR42, "");
                        VAR86 = 1;
                    }
                }
                if (VAR85 < 0 || (VAR85 && FUN23(&VAR2->VAR17, FUN24(VAR85, 23)) && !VAR86) || ((VAR8->VAR90 & (VAR91 | VAR92)) && VAR85 > 8))
                {
                    FUN7(VAR8, VAR22, "", VAR85, FUN23(&VAR2->VAR17, FUN24(VAR85, 23)));
                    return VAR23;
                }
                else
                    goto VAR93;
            }
            if (VAR2->VAR3 >= ((VAR2->VAR94 + 15) >> 4) && !VAR2->VAR48 && FUN11(&VAR2->VAR17) <= 8 && FUN11(&VAR2->VAR17) >= 0 && VAR2->VAR38 == -1 && FUN23(&VAR2->VAR17, 8) == 0)
                goto VAR93;
            FUN15(VAR2);
        }
        if (VAR2->VAR38 == -1)
        {
            VAR2->VAR38 = 0;
            for (;;)
            {
                int VAR26 = FUN12(&VAR2->VAR17, VAR27.VAR28, VAR29, 2);
                if (VAR26 < 0)
                {
                    FUN7(VAR2->VAR8, VAR22, "");
                    return VAR23;
                }
                if (VAR26 >= 33)
                {
                    if (VAR26 == 33)
                    {
                        VAR2->VAR38 += 33;
                    }
                    else if (VAR26 == 35)
                    {
                        if (VAR2->VAR38 != 0 || FUN23(&VAR2->VAR17, 15) != 0)
                        {
                            FUN7(VAR2->VAR8, VAR22, "");
                            return VAR23;
                        }
                        goto VAR93;
                    }
                }
                else
                {
                    VAR2->VAR38 += VAR26;
                    break;
                }
            }
            if (VAR2->VAR38)
            {
                int VAR74;
                if (VAR2->VAR44 == VAR45)
                {
                    FUN7(VAR2->VAR8, VAR22, "", VAR2->VAR24, VAR2->VAR3);
                    return VAR23;
                }
                VAR2->VAR75 = 0;
                for (VAR74 = 0; VAR74 < 12; VAR74++)
                    VAR2->VAR95[VAR74] = -1;
                if (VAR2->VAR11 == VAR12)
                    VAR2->VAR76 = VAR77;
                else
                    VAR2->VAR76 = VAR78;
                if (VAR2->VAR44 == VAR46)
                {
                    VAR2->VAR96 = VAR97;
                    VAR2->VAR79[0][0][0] = VAR2->VAR79[0][0][1] = 0;
                    VAR2->VAR98[0][0][0] = VAR2->VAR98[0][0][1] = 0;
                    VAR2->VAR98[0][1][0] = VAR2->VAR98[0][1][1] = 0;
                    VAR2->VAR81[0][0] = (VAR2->VAR11 - 1) & 1;
                }
                else
                {
                    VAR2->VAR79[0][0][0] = VAR2->VAR98[0][0][0];
                    VAR2->VAR79[0][0][1] = VAR2->VAR98[0][0][1];
                    VAR2->VAR79[1][0][0] = VAR2->VAR98[1][0][0];
                    VAR2->VAR79[1][0][1] = VAR2->VAR98[1][0][1];
                }
            }
        }
    }
VAR93:
    if (FUN11(&VAR2->VAR17) < 0)
    {
        FUN7(VAR2, VAR22, "", -FUN11(&VAR2->VAR17));
        return VAR23;
    }
    *VAR5 += (FUN25(&VAR2->VAR17) - 1) / 8;
    FUN26(VAR2, "", VAR2->VAR14, VAR2->VAR15, VAR2->VAR24, VAR2->VAR3);
    return 0;
}