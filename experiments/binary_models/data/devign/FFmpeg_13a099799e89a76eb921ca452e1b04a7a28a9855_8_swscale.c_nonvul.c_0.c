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
    int32_t VAR31 *VAR32 = VAR2->VAR32;
    const int VAR33 = VAR2->VAR33;
    const int VAR34 = VAR2->VAR34;
    const int VAR35 = VAR2->VAR35;
    const int VAR36 = VAR2->VAR36;
    VAR19 **VAR37 = VAR2->VAR37;
    VAR19 **VAR38 = VAR2->VAR38;
    VAR19 **VAR39 = VAR2->VAR39;
    VAR19 **VAR40 = VAR2->VAR40;
    const int VAR41 = VAR2->VAR41;
    const int VAR42 = VAR2->VAR42;
    VAR3 *VAR43 = VAR2->VAR43;
    const int VAR44 = VAR6 >> VAR2->VAR45;
    const int VAR46 = -((-VAR7) >> VAR2->VAR45);
    int VAR47;
    VAR48 *VAR49 = VAR2->VAR50;
    yuv2planar1_fn VAR51 = VAR2->VAR51;
    yuv2planarX_fn VAR52 = VAR2->VAR52;
    yuv2packed1_fn VAR53 = VAR2->VAR53;
    yuv2packed2_fn VAR54 = VAR2->VAR54;
    yuv2packedX_fn VAR55 = VAR2->VAR55;
    int VAR56 = VAR2->VAR56;
    int VAR57 = VAR2->VAR57;
    int VAR58 = VAR2->VAR58;
    int VAR59 = VAR2->VAR59;
    int VAR60 = VAR2->VAR60;
    if (FUN2(VAR2->VAR61))
    {
        VAR4[0] = VAR4[1] = VAR4[2] = VAR4[3] = VAR4[0];
        VAR5[0] = VAR5[1] = VAR5[2] = VAR5[3] = VAR5[0];
    }
    VAR5[1] <<= VAR2->VAR62;
    VAR5[2] <<= VAR2->VAR62;
    FUN3("", VAR4[0], VAR5[0], VAR4[1], VAR5[1], VAR4[2], VAR5[2], VAR4[3], VAR5[3], VAR8[0], VAR9[0], VAR8[1], VAR9[1], VAR8[2], VAR9[2], VAR8[3], VAR9[3]);
    FUN3("", VAR6, VAR7, VAR56, VAR12);
    FUN3("", VAR33, VAR41, VAR34, VAR42);
    if (VAR9[0] % 8 != 0 || VAR9[1] % 8 != 0 || VAR9[2] % 8 != 0 || VAR9[3] % 8 != 0)
    {
        static int VAR63 = 0;
        if (VAR18 & VAR64 && !VAR63)
        {
            FUN4(VAR2, VAR65, ""
                                      "");
            VAR63 = 1;
        }
    }
    if (VAR6 == 0)
    {
        VAR57 = -1;
        VAR58 = -1;
        VAR56 = 0;
        VAR59 = -1;
        VAR60 = -1;
    }
    VAR47 = VAR56;
    for (; VAR56 < VAR12; VAR56++)
    {
        const int VAR66 = VAR56 >> VAR2->VAR67;
        VAR3 *VAR68[4] = {
            VAR8[0] + VAR9[0] * VAR56,
            VAR8[1] + VAR9[1] * VAR66,
            VAR8[2] + VAR9[2] * VAR66,
            (VAR69 && VAR40) ? VAR8[3] + VAR9[3] * VAR56 : NULL,
        };
        const int VAR70 = VAR20[VAR56];
        const int VAR71 = VAR20[FUN5(VAR56 | ((1 << VAR2->VAR67) - 1), VAR12 - 1)];
        const int VAR72 = VAR21[VAR66];
        int VAR73 = VAR70 + VAR33 - 1;
        int VAR74 = VAR71 + VAR33 - 1;
        int VAR75 = VAR72 + VAR34 - 1;
        int VAR76;
        if (VAR70 > VAR59)
            VAR59 = VAR70 - 1;
        if (VAR72 > VAR60)
            VAR60 = VAR72 - 1;
        assert(VAR70 >= VAR59 - VAR41 + 1);
        assert(VAR72 >= VAR60 - VAR42 + 1);
        FUN3("", VAR56);
        FUN3("", VAR70, VAR73, VAR59);
        FUN3("", VAR72, VAR75, VAR60);
        VAR76 = VAR74 < VAR6 + VAR7 && VAR75 < -((-VAR6 - VAR7) >> VAR2->VAR45);
        if (!VAR76)
        {
            VAR73 = VAR6 + VAR7 - 1;
            VAR75 = VAR44 + VAR46 - 1;
            FUN3("", VAR73, VAR75);
        }
        while (VAR59 < VAR73)
        {
            const VAR3 *VAR77 = VAR4[0] + (VAR59 + 1 - VAR6) * VAR5[0];
            const VAR3 *VAR78 = VAR4[3] + (VAR59 + 1 - VAR6) * VAR5[3];
            VAR57++;
            assert(VAR57 < 2 * VAR41);
            assert(VAR59 + 1 - VAR6 < VAR7);
            assert(VAR59 + 1 - VAR6 >= 0);
            FUN6(VAR2, VAR37[VAR57], VAR11, VAR77, VAR10, VAR15, VAR26, VAR22, VAR35, VAR43, VAR49, 0);
            if (VAR69 && VAR40)
                FUN6(VAR2, VAR40[VAR57], VAR11, VAR78, VAR10, VAR15, VAR26, VAR22, VAR35, VAR43, VAR49, 1);
            VAR59++;
            FUN3("", VAR57, VAR59);
        }
        while (VAR60 < VAR75)
        {
            const VAR3 *VAR77 = VAR4[1] + (VAR60 + 1 - VAR44) * VAR5[1];
            const VAR3 *VAR78 = VAR4[2] + (VAR60 + 1 - VAR44) * VAR5[2];
            VAR58++;
            assert(VAR58 < 2 * VAR42);
            assert(VAR60 + 1 - VAR44 < (VAR46));
            assert(VAR60 + 1 - VAR44 >= 0);
            if (VAR2->VAR79)
                FUN7(VAR2, VAR38[VAR58], VAR39[VAR58], VAR13, VAR77, VAR78, VAR14, VAR16, VAR27, VAR23, VAR36, VAR43, VAR49);
            VAR60++;
            FUN3("", VAR58, VAR60);
        }
        if (VAR57 >= VAR41)
            VAR57 -= VAR41;
        if (VAR58 >= VAR42)
            VAR58 -= VAR42;
        if (!VAR76)
            break;
        FUN8(VAR2, VAR56, VAR57, VAR58, VAR59, VAR60);
        if (VAR56 >= VAR12 - 2)
        {
            FUN9(VAR2, &VAR51, &VAR52, &VAR53, &VAR54, &VAR55);
        }
        {
            const VAR19 **VAR80 = (const VAR19 **)VAR37 + VAR57 + VAR70 - VAR59 + VAR41;
            const VAR19 **VAR81 = (const VAR19 **)VAR38 + VAR58 + VAR72 - VAR60 + VAR42;
            const VAR19 **VAR82 = (const VAR19 **)VAR39 + VAR58 + VAR72 - VAR60 + VAR42;
            const VAR19 **VAR83 = (VAR69 && VAR40) ? (const VAR19 **)VAR40 + VAR57 + VAR70 - VAR59 + VAR41 : NULL;
            if (FUN10(VAR17) || VAR17 == VAR84)
            {
                const int VAR85 = (1 << VAR2->VAR67) - 1;
                if ((VAR56 & VAR85) || FUN11(VAR17))
                    VAR68[1] = VAR68[2] = NULL;
                if (VAR2->VAR51 && VAR33 == 1 && VAR34 == 1)
                {
                    const VAR19 *VAR86 = (VAR69 && VAR40) ? VAR83[0] : NULL;
                    FUN12(VAR2, VAR80[0], VAR81[0], VAR82[0], VAR86, VAR68, VAR11, VAR13);
                }
                else
                {
                    FUN13(VAR2, VAR24 + VAR56 * VAR33, VAR80, VAR33, VAR25 + VAR66 * VAR34, VAR81, VAR82, VAR34, VAR83, VAR68, VAR11, VAR13);
                }
            }
            else
            {
                assert(VAR80 + VAR33 - 1 < VAR37 + VAR41 * 2);
                assert(VAR81 + VAR34 - 1 < VAR38 + VAR42 * 2);
                if (VAR2->VAR53 && VAR33 == 1 && VAR34 == 2)
                {
                    int VAR87 = VAR25[2 * VAR56 + 1];
                    FUN14(VAR2, *VAR80, VAR81, VAR82, VAR40 ? *VAR83 : NULL, VAR68[0], VAR11, VAR87, VAR56);
                }
                else if (VAR2->VAR54 && VAR33 == 2 && VAR34 == 2)
                {
                    int VAR88 = VAR24[2 * VAR56 + 1];
                    int VAR87 = VAR25[2 * VAR56 + 1];
                    VAR29[2] = VAR29[3] = VAR24[2 * VAR56] * 0x10001;
                    VAR30[2] = VAR30[3] = VAR25[2 * VAR66] * 0x10001;
                    FUN15(VAR2, VAR80, VAR81, VAR82, VAR40 ? VAR83 : NULL, VAR68[0], VAR11, VAR88, VAR87, VAR56);
                }
                else
                {
                    FUN16(VAR2, VAR24 + VAR56 * VAR33, VAR80, VAR33, VAR25 + VAR56 * VAR34, VAR81, VAR82, VAR34, VAR83, VAR68[0], VAR11, VAR56);
                }
            }
        }
    }
    if ((VAR17 == VAR89) && !VAR40)
        FUN17(VAR8[3], VAR9[3], VAR11, VAR56 - VAR47, VAR47, 255);
    if (FUN18() & VAR90)
        VAR91 volatile(""
                         :
                         :
                         : "");
    FUN19();
    VAR2->VAR56 = VAR56;
    VAR2->VAR57 = VAR57;
    VAR2->VAR58 = VAR58;
    VAR2->VAR59 = VAR59;
    VAR2->VAR60 = VAR60;
    return VAR56 - VAR47;
}