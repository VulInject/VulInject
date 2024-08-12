static int FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5[], int VAR6[], int VAR7, int VAR8, VAR4 *VAR9[], int VAR10[])
{
    const int VAR11 = VAR3->VAR11;
    const int VAR12 = VAR3->VAR12;
    const int VAR13 = VAR3->VAR13;
    const int VAR14 = VAR3->VAR14;
    const int VAR15 = VAR3->VAR15;
    const int VAR16 = VAR3->VAR16;
    const int VAR17 = VAR3->VAR17;
    const enum PixelFormat VAR18 = VAR3->VAR18;
    const int VAR19 = VAR3->VAR19;
    VAR20 *VAR21 = VAR3->VAR21;
    VAR20 *VAR22 = VAR3->VAR22;
    VAR20 *VAR23 = VAR3->VAR23;
    VAR20 *VAR24 = VAR3->VAR24;
    VAR20 *VAR25 = VAR3->VAR25;
    VAR20 *VAR26 = VAR3->VAR26;
    VAR20 *VAR27 = VAR3->VAR27;
    VAR20 *VAR28 = VAR3->VAR28;
    VAR29 *VAR30 = VAR3->VAR30;
    VAR29 *VAR31 = VAR3->VAR31;
    int32_t VAR32 *VAR33 = VAR3->VAR33;
    const int VAR34 = VAR3->VAR34;
    const int VAR35 = VAR3->VAR35;
    const int VAR36 = VAR3->VAR36;
    const int VAR37 = VAR3->VAR37;
    VAR20 **VAR38 = VAR3->VAR38;
    VAR20 **VAR39 = VAR3->VAR39;
    VAR20 **VAR40 = VAR3->VAR40;
    const int VAR41 = VAR3->VAR41;
    const int VAR42 = VAR3->VAR42;
    VAR4 *VAR43 = VAR3->VAR43;
    const int VAR44 = VAR7 >> VAR3->VAR45;
    const int VAR46 = -((-VAR8) >> VAR3->VAR45);
    int VAR47;
    VAR48 *VAR49 = VAR3->VAR50;
    int VAR51 = VAR3->VAR51;
    int VAR52 = VAR3->VAR52;
    int VAR53 = VAR3->VAR53;
    int VAR54 = VAR3->VAR54;
    int VAR55 = VAR3->VAR55;
    if (FUN2(VAR3->VAR56))
    {
        VAR5[0] = VAR5[1] = VAR5[2] = VAR5[3] = VAR5[0];
        VAR6[0] = VAR6[1] = VAR6[2] = VAR6[3] = VAR6[0];
    }
    VAR6[1] <<= VAR3->VAR57;
    VAR6[2] <<= VAR3->VAR57;
    FUN3("", VAR5[0], VAR6[0], VAR5[1], VAR6[1], VAR5[2], VAR6[2], VAR5[3], VAR6[3], VAR9[0], VAR10[0], VAR9[1], VAR10[1], VAR9[2], VAR10[2], VAR9[3], VAR10[3]);
    FUN3("", VAR7, VAR8, VAR51, VAR13);
    FUN3("", VAR34, VAR41, VAR35, VAR42);
    if (VAR10[0] % 8 != 0 || VAR10[1] % 8 != 0 || VAR10[2] % 8 != 0 || VAR10[3] % 8 != 0)
    {
        static int VAR58 = 0;
        if (VAR19 & VAR59 && !VAR58)
        {
            FUN4(VAR3, VAR60, ""
                                      "");
            VAR58 = 1;
        }
    }
    if (VAR7 == 0)
    {
        VAR52 = -1;
        VAR53 = -1;
        VAR51 = 0;
        VAR54 = -1;
        VAR55 = -1;
    }
    VAR47 = VAR51;
    for (; VAR51 < VAR13; VAR51++)
    {
        unsigned char *VAR61 = VAR9[0] + VAR10[0] * VAR51;
        const int VAR62 = VAR51 >> VAR3->VAR63;
        unsigned char *VAR64 = VAR9[1] + VAR10[1] * VAR62;
        unsigned char *VAR65 = VAR9[2] + VAR10[2] * VAR62;
        unsigned char *VAR66 = (VAR67 && VAR40) ? VAR9[3] + VAR10[3] * VAR51 : NULL;
        const int VAR68 = VAR21[VAR51];
        const int VAR69 = VAR21[FUN5(VAR51 | ((1 << VAR3->VAR63) - 1), VAR13 - 1)];
        const int VAR70 = VAR22[VAR62];
        int VAR71 = VAR68 + VAR34 - 1;
        int VAR72 = VAR69 + VAR34 - 1;
        int VAR73 = VAR70 + VAR35 - 1;
        int VAR74;
        if (VAR68 > VAR54)
            VAR54 = VAR68 - 1;
        if (VAR70 > VAR55)
            VAR55 = VAR70 - 1;
        assert(VAR68 >= VAR54 - VAR41 + 1);
        assert(VAR70 >= VAR55 - VAR42 + 1);
        FUN3("", VAR51);
        FUN3("", VAR68, VAR71, VAR54);
        FUN3("", VAR70, VAR73, VAR55);
        VAR74 = VAR72 < VAR7 + VAR8 && VAR73 < -((-VAR7 - VAR8) >> VAR3->VAR45);
        if (!VAR74)
        {
            VAR71 = VAR7 + VAR8 - 1;
            VAR73 = VAR44 + VAR46 - 1;
            FUN3("", VAR71, VAR73);
        }
        while (VAR54 < VAR71)
        {
            const VAR4 *VAR75 = VAR5[0] + (VAR54 + 1 - VAR7) * VAR6[0];
            const VAR4 *VAR76 = VAR5[3] + (VAR54 + 1 - VAR7) * VAR6[3];
            VAR52++;
            assert(VAR52 < 2 * VAR41);
            assert(VAR54 + 1 - VAR7 < VAR8);
            assert(VAR54 + 1 - VAR7 >= 0);
            FUN1(VAR77)
            (VAR3, VAR38[VAR52], VAR12, VAR75, VAR11, VAR16, VAR27, VAR23, VAR36, VAR43, VAR49, 0);
            if (VAR67 && VAR40)
                FUN1(VAR77)
                (VAR3, VAR40[VAR52], VAR12, VAR76, VAR11, VAR16, VAR27, VAR23, VAR36, VAR43, VAR49, 1);
            VAR54++;
            FUN3("", VAR52, VAR54);
        }
        while (VAR55 < VAR73)
        {
            const VAR4 *VAR75 = VAR5[1] + (VAR55 + 1 - VAR44) * VAR6[1];
            const VAR4 *VAR76 = VAR5[2] + (VAR55 + 1 - VAR44) * VAR6[2];
            VAR53++;
            assert(VAR53 < 2 * VAR42);
            assert(VAR55 + 1 - VAR44 < (VAR46));
            assert(VAR55 + 1 - VAR44 >= 0);
            if (VAR3->VAR78)
                FUN1(VAR79)
                (VAR3, VAR39[VAR53], VAR14, VAR75, VAR76, VAR15, VAR17, VAR28, VAR24, VAR37, VAR43, VAR49);
            VAR55++;
            FUN3("", VAR53, VAR55);
        }
        if (VAR52 >= VAR41)
            VAR52 -= VAR41;
        if (VAR53 >= VAR42)
            VAR53 -= VAR42;
        if (!VAR74)
            break;
        VAR3->VAR80 = VAR81[VAR51 & 1];
        if (VAR3->VAR18 == VAR82 || VAR3->VAR18 == VAR83)
            VAR3->VAR84 = VAR81[VAR51 & 1];
        else
            VAR3->VAR84 = VAR85[VAR51 & 1];
        VAR3->VAR86 = VAR81[(VAR51 + 1) & 1];
        if (VAR51 < VAR13 - 2)
        {
            const VAR20 **VAR87 = (const VAR20 **)VAR38 + VAR52 + VAR68 - VAR54 + VAR41;
            const VAR20 **VAR88 = (const VAR20 **)VAR39 + VAR53 + VAR70 - VAR55 + VAR42;
            const VAR20 **VAR89 = (VAR67 && VAR40) ? (const VAR20 **)VAR40 + VAR52 + VAR68 - VAR54 + VAR41 : NULL;
            int VAR90;
            if (VAR19 & VAR91)
            {
                int VAR92 = VAR93 / 8;
                for (VAR90 = 0; VAR90 < VAR34; VAR90 += 2)
                {
                    *(const void **)&VAR30[VAR92 * VAR90] = VAR87[VAR90];
                    *(const void **)&VAR30[VAR92 * VAR90 + VAR94 / 4] = VAR87[VAR90 + (VAR34 > 1)];
                    VAR30[VAR92 * VAR90 + VAR95 / 4] = VAR30[VAR92 * VAR90 + VAR95 / 4 + 1] = VAR25[VAR51 * VAR34 + VAR90] + (VAR34 > 1 ? VAR25[VAR51 * VAR34 + VAR90 + 1] << 16 : 0);
                    if (VAR67 && VAR40)
                    {
                        *(const void **)&VAR33[VAR92 * VAR90] = VAR89[VAR90];
                        *(const void **)&VAR33[VAR92 * VAR90 + VAR94 / 4] = VAR89[VAR90 + (VAR34 > 1)];
                        VAR33[VAR92 * VAR90 + VAR95 / 4] = VAR33[VAR92 * VAR90 + VAR95 / 4 + 1] = VAR30[VAR92 * VAR90 + VAR95 / 4];
                    }
                }
                for (VAR90 = 0; VAR90 < VAR35; VAR90 += 2)
                {
                    *(const void **)&VAR31[VAR92 * VAR90] = VAR88[VAR90];
                    *(const void **)&VAR31[VAR92 * VAR90 + VAR94 / 4] = VAR88[VAR90 + (VAR35 > 1)];
                    VAR31[VAR92 * VAR90 + VAR95 / 4] = VAR31[VAR92 * VAR90 + VAR95 / 4 + 1] = VAR26[VAR62 * VAR35 + VAR90] + (VAR35 > 1 ? VAR26[VAR62 * VAR35 + VAR90 + 1] << 16 : 0);
                }
            }
            else
            {
                for (VAR90 = 0; VAR90 < VAR34; VAR90++)
                {
                    VAR30[4 * VAR90 + 0] = (VAR29)VAR87[VAR90];
                    VAR30[4 * VAR90 + 1] = (VAR96)VAR87[VAR90] >> 32;
                    VAR30[4 * VAR90 + 2] = VAR30[4 * VAR90 + 3] = ((VAR97)VAR25[VAR51 * VAR34 + VAR90]) * 0x10001;
                    if (VAR67 && VAR40)
                    {
                        VAR33[4 * VAR90 + 0] = (VAR29)VAR89[VAR90];
                        VAR33[4 * VAR90 + 1] = (VAR96)VAR89[VAR90] >> 32;
                        VAR33[4 * VAR90 + 2] = VAR33[4 * VAR90 + 3] = VAR30[4 * VAR90 + 2];
                    }
                }
                for (VAR90 = 0; VAR90 < VAR35; VAR90++)
                {
                    VAR31[4 * VAR90 + 0] = (VAR29)VAR88[VAR90];
                    VAR31[4 * VAR90 + 1] = (VAR96)VAR88[VAR90] >> 32;
                    VAR31[4 * VAR90 + 2] = VAR31[4 * VAR90 + 3] = ((VAR97)VAR26[VAR62 * VAR35 + VAR90]) * 0x10001;
                }
            }
            if (VAR18 == VAR98 || VAR18 == VAR99)
            {
                const int VAR100 = (1 << VAR3->VAR63) - 1;
                if (VAR51 & VAR100)
                    VAR64 = NULL;
                VAR3->FUN6(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR61, VAR64, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || VAR18 == VAR101)
            {
                const int VAR100 = (1 << VAR3->VAR63) - 1;
                if ((VAR51 & VAR100) || FUN8(VAR18))
                    VAR64 = VAR65 = NULL;
                if (FUN9(VAR18) || FUN10(VAR18))
                {
                    FUN11(VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR89, (VAR97 *)VAR61, (VAR97 *)VAR64, (VAR97 *)VAR65, (VAR97 *)VAR66, VAR12, VAR14, VAR18);
                }
                else if (VAR34 == 1 && VAR35 == 1)
                {
                    const VAR20 *VAR102 = VAR87[0];
                    const VAR20 *VAR103 = VAR88[0];
                    const VAR20 *VAR104 = (VAR67 && VAR40) ? VAR89[0] : NULL;
                    VAR3->FUN12(VAR3, VAR102, VAR103, VAR104, VAR61, VAR64, VAR65, VAR66, VAR12, VAR14);
                }
                else
                {
                    VAR3->FUN13(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR64, VAR65, VAR66, VAR12, VAR14);
                }
            }
            else
            {
                assert(VAR87 + VAR34 - 1 < VAR38 + VAR41 * 2);
                assert(VAR88 + VAR35 - 1 < VAR39 + VAR42 * 2);
                if (VAR34 == 1 && VAR35 == 2)
                {
                    int VAR105 = VAR26[2 * VAR51 + 1];
                    if (VAR19 & VAR106)
                    {
                        FUN14(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN15(VAR3, *VAR87, *VAR88, *(VAR88 + 1), VAR40 ? *VAR89 : NULL, VAR61, VAR12, VAR105, VAR18, VAR19, VAR51);
                    }
                }
                else if (VAR34 == 2 && VAR35 == 2)
                {
                    int VAR107 = VAR25[2 * VAR51 + 1];
                    int VAR105 = VAR26[2 * VAR51 + 1];
                    VAR30[2] = VAR30[3] = VAR25[2 * VAR51] * 0x10001;
                    VAR31[2] = VAR31[3] = VAR26[2 * VAR62] * 0x10001;
                    if (VAR19 & VAR106)
                    {
                        FUN14(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN16(VAR3, *VAR87, *(VAR87 + 1), *VAR88, *(VAR88 + 1), VAR40 ? *VAR89 : NULL, VAR40 ? *(VAR89 + 1) : NULL, VAR61, VAR12, VAR107, VAR105, VAR51);
                    }
                }
                else
                {
                    if (VAR19 & VAR106)
                    {
                        FUN14(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN17(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                    }
                }
            }
        }
        else
        {
            const VAR20 **VAR87 = (const VAR20 **)VAR38 + VAR52 + VAR68 - VAR54 + VAR41;
            const VAR20 **VAR88 = (const VAR20 **)VAR39 + VAR53 + VAR70 - VAR55 + VAR42;
            const VAR20 **VAR89 = (VAR67 && VAR40) ? (const VAR20 **)VAR40 + VAR52 + VAR68 - VAR54 + VAR41 : NULL;
            if (VAR18 == VAR98 || VAR18 == VAR99)
            {
                const int VAR100 = (1 << VAR3->VAR63) - 1;
                if (VAR51 & VAR100)
                    VAR64 = NULL;
                FUN18(VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR61, VAR64, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || VAR18 == VAR101)
            {
                const int VAR100 = (1 << VAR3->VAR63) - 1;
                if ((VAR51 & VAR100) || FUN8(VAR18))
                    VAR64 = VAR65 = NULL;
                if (FUN9(VAR18) || FUN10(VAR18))
                {
                    FUN11(VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR89, (VAR97 *)VAR61, (VAR97 *)VAR64, (VAR97 *)VAR65, (VAR97 *)VAR66, VAR12, VAR14, VAR18);
                }
                else
                {
                    FUN19(VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR62 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR64, VAR65, VAR66, VAR12, VAR14);
                }
            }
            else
            {
                assert(VAR87 + VAR34 - 1 < VAR38 + VAR41 * 2);
                assert(VAR88 + VAR35 - 1 < VAR39 + VAR42 * 2);
                if (VAR19 & VAR106)
                {
                    FUN14(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                }
                else
                {
                    FUN20(VAR3, VAR25 + VAR51 * VAR34, VAR87, VAR34, VAR26 + VAR51 * VAR35, VAR88, VAR35, VAR89, VAR61, VAR12, VAR51);
                }
            }
        }
    }
    if ((VAR18 == VAR108) && !VAR40)
        FUN21(VAR9[3], VAR10[3], VAR12, VAR51 - VAR47, VAR47, 255);
    if (VAR19 & VAR109)
        VAR110 volatile(""
                         :
                         :
                         : "");
    if (VAR19 & VAR111)
        VAR110 volatile(""
                         :
                         :
                         : "");
    else
        VAR110 volatile(""
                         :
                         :
                         : "");
    VAR3->VAR51 = VAR51;
    VAR3->VAR52 = VAR52;
    VAR3->VAR53 = VAR53;
    VAR3->VAR54 = VAR54;
    VAR3->VAR55 = VAR55;
    return VAR51 - VAR47;
}