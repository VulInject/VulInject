static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const int VAR10 = VAR2->VAR10;
    const int VAR11 = VAR2->VAR11;
    const int VAR12 = VAR2->VAR12;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR2->VAR14;
    const int VAR15 = VAR2->VAR15;
    const int VAR16 = VAR2->VAR16;
    const enum PixelFormat VAR17 = VAR2->VAR17;
    const int VAR18 = VAR2->VAR18;
    VAR19 *VAR20 = VAR2->VAR20;
    VAR19 *VAR21 = VAR2->VAR21;
    VAR19 *VAR22 = VAR2->VAR22;
    VAR19 *VAR23 = VAR2->VAR23;
    VAR19 *VAR24 = VAR2->VAR24;
    VAR19 *VAR25 = VAR2->VAR25;
    VAR19 *VAR26 = VAR2->VAR26;
    VAR19 *VAR27 = VAR2->VAR27;
    VAR28 *VAR29 = VAR2->VAR29;
    VAR28 *VAR30 = VAR2->VAR30;
    const int VAR31 = VAR2->VAR31;
    const int VAR32 = VAR2->VAR32;
    const int VAR33 = VAR2->VAR33;
    const int VAR34 = VAR2->VAR34;
    VAR19 **VAR35 = VAR2->VAR35;
    VAR19 **VAR36 = VAR2->VAR36;
    VAR19 **VAR37 = VAR2->VAR37;
    VAR19 **VAR38 = VAR2->VAR38;
    const int VAR39 = VAR2->VAR39;
    const int VAR40 = VAR2->VAR40;
    VAR3 *VAR41 = VAR2->VAR41;
    const int VAR42 = VAR6 >> VAR2->VAR43;
    const int VAR44 = -((-VAR7) >> VAR2->VAR43);
    int VAR45;
    VAR46 *VAR47 = VAR2->VAR48;
    yuv2planar1_fn VAR49 = VAR2->VAR49;
    yuv2planarX_fn VAR50 = VAR2->VAR50;
    yuv2interleavedX_fn VAR51 = VAR2->VAR51;
    yuv2packed1_fn VAR52 = VAR2->VAR52;
    yuv2packed2_fn VAR53 = VAR2->VAR53;
    yuv2packedX_fn VAR54 = VAR2->VAR54;
    int VAR55 = FUN2(VAR2->VAR56) || FUN3(VAR2->VAR56);
    int VAR57 = VAR2->VAR57;
    int VAR58 = VAR2->VAR58;
    int VAR59 = VAR2->VAR59;
    int VAR60 = VAR2->VAR60;
    int VAR61 = VAR2->VAR61;
    if (FUN4(VAR2->VAR56))
    {
        VAR4[0] = VAR4[1] = VAR4[2] = VAR4[3] = VAR4[0];
        VAR5[0] = VAR5[1] = VAR5[2] = VAR5[3] = VAR5[0];
    }
    VAR5[1] <<= VAR2->VAR62;
    VAR5[2] <<= VAR2->VAR62;
    FUN5("", VAR4[0], VAR5[0], VAR4[1], VAR5[1], VAR4[2], VAR5[2], VAR4[3], VAR5[3], VAR8[0], VAR9[0], VAR8[1], VAR9[1], VAR8[2], VAR9[2], VAR8[3], VAR9[3]);
    FUN5("", VAR6, VAR7, VAR57, VAR12);
    FUN5("", VAR31, VAR39, VAR32, VAR40);
    if (VAR9[0] % 8 != 0 || VAR9[1] % 8 != 0 || VAR9[2] % 8 != 0 || VAR9[3] % 8 != 0)
    {
        static int VAR63 = 0;
        if (VAR18 & VAR64 && !VAR63)
        {
            FUN6(VAR2, VAR65, ""
                                      "");
            VAR63 = 1;
        }
    }
    if (VAR6 == 0)
    {
        VAR58 = -1;
        VAR59 = -1;
        VAR57 = 0;
        VAR60 = -1;
        VAR61 = -1;
    }
    if (!VAR55)
    {
        VAR2->VAR66 = VAR2->VAR67 = VAR68;
    }
    VAR45 = VAR57;
    for (; VAR57 < VAR12; VAR57++)
    {
        const int VAR69 = VAR57 >> VAR2->VAR70;
        VAR3 *VAR71[4] = {
            VAR8[0] + VAR9[0] * VAR57,
            VAR8[1] + VAR9[1] * VAR69,
            VAR8[2] + VAR9[2] * VAR69,
            (VAR72 && VAR38) ? VAR8[3] + VAR9[3] * VAR57 : NULL,
        };
        const int VAR73 = FUN7(1 - VAR31, VAR20[VAR57]);
        const int VAR74 = FUN7(1 - VAR31, VAR20[FUN8(VAR57 | ((1 << VAR2->VAR70) - 1), VAR12 - 1)]);
        const int VAR75 = FUN7(1 - VAR32, VAR21[VAR69]);
        int VAR76 = FUN8(VAR2->VAR77, VAR73 + VAR31) - 1;
        int VAR78 = FUN8(VAR2->VAR77, VAR74 + VAR31) - 1;
        int VAR79 = FUN8(VAR2->VAR80, VAR75 + VAR32) - 1;
        int VAR81;
        if (VAR73 > VAR60)
            VAR60 = VAR73 - 1;
        if (VAR75 > VAR61)
            VAR61 = VAR75 - 1;
        assert(VAR73 >= VAR60 - VAR39 + 1);
        assert(VAR75 >= VAR61 - VAR40 + 1);
        FUN5("", VAR57);
        FUN5("", VAR73, VAR76, VAR60);
        FUN5("", VAR75, VAR79, VAR61);
        VAR81 = VAR78 < VAR6 + VAR7 && VAR79 < -((-VAR6 - VAR7) >> VAR2->VAR43);
        if (!VAR81)
        {
            VAR76 = VAR6 + VAR7 - 1;
            VAR79 = VAR42 + VAR44 - 1;
            FUN5("", VAR76, VAR79);
        }
        while (VAR60 < VAR76)
        {
            const VAR3 *VAR82[4] = {
                VAR4[0] + (VAR60 + 1 - VAR6) * VAR5[0],
                VAR4[1] + (VAR60 + 1 - VAR6) * VAR5[1],
                VAR4[2] + (VAR60 + 1 - VAR6) * VAR5[2],
                VAR4[3] + (VAR60 + 1 - VAR6) * VAR5[3],
            };
            VAR58++;
            assert(VAR58 < 2 * VAR39);
            assert(VAR60 + 1 - VAR6 < VAR7);
            assert(VAR60 + 1 - VAR6 >= 0);
            FUN9(VAR2, VAR35[VAR58], VAR11, VAR82, VAR10, VAR15, VAR26, VAR22, VAR33, VAR41, VAR47, 0);
            if (VAR72 && VAR38)
                FUN9(VAR2, VAR38[VAR58], VAR11, VAR82, VAR10, VAR15, VAR26, VAR22, VAR33, VAR41, VAR47, 1);
            VAR60++;
            FUN5("", VAR58, VAR60);
        }
        while (VAR61 < VAR79)
        {
            const VAR3 *VAR82[4] = {
                VAR4[0] + (VAR61 + 1 - VAR42) * VAR5[0],
                VAR4[1] + (VAR61 + 1 - VAR42) * VAR5[1],
                VAR4[2] + (VAR61 + 1 - VAR42) * VAR5[2],
                VAR4[3] + (VAR61 + 1 - VAR42) * VAR5[3],
            };
            VAR59++;
            assert(VAR59 < 2 * VAR40);
            assert(VAR61 + 1 - VAR42 < (VAR44));
            assert(VAR61 + 1 - VAR42 >= 0);
            if (VAR2->VAR83)
                FUN10(VAR2, VAR36[VAR59], VAR37[VAR59], VAR13, VAR82, VAR14, VAR16, VAR27, VAR23, VAR34, VAR41, VAR47);
            VAR61++;
            FUN5("", VAR59, VAR61);
        }
        if (VAR58 >= VAR39)
            VAR58 -= VAR39;
        if (VAR59 >= VAR40)
            VAR59 -= VAR40;
        if (!VAR81)
            break;
        FUN11(VAR2, VAR57, VAR58, VAR59, VAR60, VAR61);
        if (VAR55)
        {
            VAR2->VAR66 = VAR84[VAR69 & 7];
            VAR2->VAR67 = VAR84[VAR57 & 7];
        }
        if (VAR57 >= VAR12 - 2)
        {
            FUN12(VAR2, &VAR49, &VAR50, &VAR51, &VAR52, &VAR53, &VAR54);
        }
        {
            const VAR19 **VAR85 = (const VAR19 **)VAR35 + VAR58 + VAR73 - VAR60 + VAR39;
            const VAR19 **VAR86 = (const VAR19 **)VAR36 + VAR59 + VAR75 - VAR61 + VAR40;
            const VAR19 **VAR87 = (const VAR19 **)VAR37 + VAR59 + VAR75 - VAR61 + VAR40;
            const VAR19 **VAR88 = (VAR72 && VAR38) ? (const VAR19 **)VAR38 + VAR58 + VAR73 - VAR60 + VAR39 : NULL;
            if (VAR73 < 0 || VAR73 + VAR31 > VAR2->VAR77)
            {
                const VAR19 **VAR89 = (const VAR19 **)VAR35 + 2 * VAR39;
                int VAR90 = -VAR73, VAR91, VAR92 = FUN8(VAR2->VAR77 - VAR73, VAR31);
                for (VAR91 = 0; VAR91 < VAR90; VAR91++)
                    VAR89[VAR91] = VAR85[VAR90];
                for (; VAR91 < VAR92; VAR91++)
                    VAR89[VAR91] = VAR85[VAR91];
                for (; VAR91 < VAR31; VAR91++)
                    VAR89[VAR91] = VAR89[VAR91 - 1];
                VAR85 = VAR89;
                if (VAR88)
                {
                    const VAR19 **VAR93 = (const VAR19 **)VAR38 + 2 * VAR39;
                    for (VAR91 = 0; VAR91 < VAR90; VAR91++)
                        VAR93[VAR91] = VAR88[VAR90];
                    for (; VAR91 < VAR92; VAR91++)
                        VAR93[VAR91] = VAR88[VAR91];
                    for (; VAR91 < VAR31; VAR91++)
                        VAR93[VAR91] = VAR93[VAR91 - 1];
                    VAR88 = VAR93;
                }
            }
            if (VAR75 < 0 || VAR75 + VAR32 > VAR2->VAR80)
            {
                const VAR19 **VAR94 = (const VAR19 **)VAR36 + 2 * VAR40, **VAR95 = (const VAR19 **)VAR37 + 2 * VAR40;
                int VAR90 = -VAR75, VAR91, VAR92 = FUN8(VAR2->VAR80 - VAR75, VAR32);
                for (VAR91 = 0; VAR91 < VAR90; VAR91++)
                {
                    VAR94[VAR91] = VAR86[VAR90];
                    VAR95[VAR91] = VAR87[VAR90];
                }
                for (; VAR91 < VAR92; VAR91++)
                {
                    VAR94[VAR91] = VAR86[VAR91];
                    VAR95[VAR91] = VAR87[VAR91];
                }
                for (; VAR91 < VAR32; VAR91++)
                {
                    VAR94[VAR91] = VAR94[VAR91 - 1];
                    VAR95[VAR91] = VAR95[VAR91 - 1];
                }
                VAR86 = VAR94;
                VAR87 = VAR95;
            }
            if (FUN13(VAR17) || (FUN14(VAR17) && !FUN15(VAR17)))
            {
                const int VAR96 = (1 << VAR2->VAR70) - 1;
                if (VAR31 == 1)
                {
                    FUN16(VAR85[0], VAR71[0], VAR11, VAR2->VAR67, 0);
                }
                else
                {
                    FUN17(VAR24 + VAR57 * VAR31, VAR31, VAR85, VAR71[0], VAR11, VAR2->VAR67, 0);
                }
                if (!((VAR57 & VAR96) || FUN14(VAR17)))
                {
                    if (VAR51)
                    {
                        FUN18(VAR2, VAR25 + VAR69 * VAR32, VAR32, VAR86, VAR87, VAR71[1], VAR13);
                    }
                    else if (VAR32 == 1)
                    {
                        FUN16(VAR86[0], VAR71[1], VAR13, VAR2->VAR66, 0);
                        FUN16(VAR87[0], VAR71[2], VAR13, VAR2->VAR66, 3);
                    }
                    else
                    {
                        FUN17(VAR25 + VAR69 * VAR32, VAR32, VAR86, VAR71[1], VAR13, VAR2->VAR66, 0);
                        FUN17(VAR25 + VAR69 * VAR32, VAR32, VAR87, VAR71[2], VAR13, VAR2->VAR66, 3);
                    }
                }
                if (VAR72 && VAR38)
                {
                    if (VAR31 == 1)
                    {
                        FUN16(VAR88[0], VAR71[3], VAR11, VAR2->VAR67, 0);
                    }
                    else
                    {
                        FUN17(VAR24 + VAR57 * VAR31, VAR31, VAR88, VAR71[3], VAR11, VAR2->VAR67, 0);
                    }
                }
            }
            else
            {
                assert(VAR85 + VAR31 - 1 < VAR35 + VAR39 * 2);
                assert(VAR86 + VAR32 - 1 < VAR36 + VAR40 * 2);
                if (VAR2->VAR52 && VAR31 == 1 && VAR32 <= 2)
                {
                    int VAR97 = VAR32 == 1 ? 0 : VAR25[2 * VAR57 + 1];
                    FUN19(VAR2, *VAR85, VAR86, VAR87, VAR38 ? *VAR88 : NULL, VAR71[0], VAR11, VAR97, VAR57);
                }
                else if (VAR2->VAR53 && VAR31 == 2 && VAR32 == 2)
                {
                    int VAR98 = VAR24[2 * VAR57 + 1];
                    int VAR97 = VAR25[2 * VAR57 + 1];
                    VAR29[2] = VAR29[3] = VAR24[2 * VAR57] * 0x10001;
                    VAR30[2] = VAR30[3] = VAR25[2 * VAR69] * 0x10001;
                    FUN20(VAR2, VAR85, VAR86, VAR87, VAR38 ? VAR88 : NULL, VAR71[0], VAR11, VAR98, VAR97, VAR57);
                }
                else
                {
                    FUN21(VAR2, VAR24 + VAR57 * VAR31, VAR85, VAR31, VAR25 + VAR57 * VAR32, VAR86, VAR87, VAR32, VAR88, VAR71[0], VAR11, VAR57);
                }
            }
        }
    }
    if (FUN22(VAR17) && FUN15(VAR17) && !VAR38)
        FUN23(VAR8[3], VAR9[3], VAR11, VAR57 - VAR45, VAR45, 255);
    if (FUN24() & VAR99)
        VAR100 volatile(""
                         :
                         :
                         : "");
    FUN25();
    VAR2->VAR57 = VAR57;
    VAR2->VAR58 = VAR58;
    VAR2->VAR59 = VAR59;
    VAR2->VAR60 = VAR60;
    VAR2->VAR61 = VAR61;
    return VAR57 - VAR45;
}