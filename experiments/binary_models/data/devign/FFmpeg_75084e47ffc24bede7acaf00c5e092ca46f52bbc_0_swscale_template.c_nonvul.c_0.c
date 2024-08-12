static int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5[], int VAR6[], int VAR7, int VAR8, VAR4 *VAR9[], int VAR10[])
{
    const int VAR11 = VAR3->VAR11;
    const int VAR12 = VAR3->VAR12;
    const int VAR13 = VAR3->VAR13;
    const int VAR14 = VAR3->VAR14;
    const int VAR15 = VAR3->VAR15;
    const int VAR16 = VAR3->VAR16;
    const int VAR17 = VAR3->VAR17;
    const enum PixelFormat VAR18 = VAR3->VAR18;
    const enum PixelFormat VAR19 = VAR3->VAR19;
    const int VAR20 = VAR3->VAR20;
    VAR21 *VAR22 = VAR3->VAR22;
    VAR21 *VAR23 = VAR3->VAR23;
    VAR21 *VAR24 = VAR3->VAR24;
    VAR21 *VAR25 = VAR3->VAR25;
    VAR21 *VAR26 = VAR3->VAR26;
    VAR21 *VAR27 = VAR3->VAR27;
    VAR21 *VAR28 = VAR3->VAR28;
    VAR21 *VAR29 = VAR3->VAR29;
    VAR30 *VAR31 = VAR3->VAR31;
    VAR30 *VAR32 = VAR3->VAR32;
    VAR30 *VAR33 = VAR3->VAR33;
    const int VAR34 = VAR3->VAR34;
    const int VAR35 = VAR3->VAR35;
    const int VAR36 = VAR3->VAR36;
    const int VAR37 = VAR3->VAR37;
    VAR21 **VAR38 = VAR3->VAR38;
    VAR21 **VAR39 = VAR3->VAR39;
    VAR21 **VAR40 = VAR3->VAR40;
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
    if (FUN2(VAR3->VAR19))
    {
        VAR5[0] = VAR5[1] = VAR5[2] = VAR5[3] = VAR5[0];
        VAR6[0] = VAR6[1] = VAR6[2] = VAR6[3] = VAR6[0];
    }
    VAR6[1] <<= VAR3->VAR56;
    VAR6[2] <<= VAR3->VAR56;
    FUN3("", VAR5[0], VAR6[0], VAR5[1], VAR6[1], VAR5[2], VAR6[2], VAR5[3], VAR6[3], VAR9[0], VAR10[0], VAR9[1], VAR10[1], VAR9[2], VAR10[2], VAR9[3], VAR10[3]);
    FUN3("", VAR7, VAR8, VAR51, VAR13);
    FUN3("", VAR34, VAR41, VAR35, VAR42);
    if (VAR10[0] % 8 != 0 || VAR10[1] % 8 != 0 || VAR10[2] % 8 != 0 || VAR10[3] % 8 != 0)
    {
        static int VAR57 = 0;
        if (VAR20 & VAR58 && !VAR57)
        {
            FUN4(VAR3, VAR59, ""
                                      "");
            VAR57 = 1;
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
        unsigned char *VAR60 = VAR9[0] + VAR10[0] * VAR51;
        const int VAR61 = VAR51 >> VAR3->VAR62;
        unsigned char *VAR63 = VAR9[1] + VAR10[1] * VAR61;
        unsigned char *VAR64 = VAR9[2] + VAR10[2] * VAR61;
        unsigned char *VAR65 = (VAR66 && VAR40) ? VAR9[3] + VAR10[3] * VAR51 : NULL;
        const int VAR67 = VAR22[VAR51];
        const int VAR68 = VAR23[VAR61];
        int VAR69 = VAR67 + VAR34 - 1;
        int VAR70 = VAR68 + VAR35 - 1;
        int VAR71;
        if (VAR67 > VAR54)
            VAR54 = VAR67 - 1;
        if (VAR68 > VAR55)
            VAR55 = VAR68 - 1;
        assert(VAR67 >= VAR54 - VAR41 + 1);
        assert(VAR68 >= VAR55 - VAR42 + 1);
        VAR71 = VAR69 < VAR7 + VAR8 && VAR70 < -((-VAR7 - VAR8) >> VAR3->VAR45);
        if (!VAR71)
        {
            VAR69 = VAR7 + VAR8 - 1;
            VAR70 = VAR44 + VAR46 - 1;
        }
        FUN3("", VAR51);
        FUN3("", VAR67, VAR69, VAR54);
        FUN3("", VAR68, VAR70, VAR55);
        while (VAR54 < VAR69)
        {
            VAR4 *VAR72 = VAR5[0] + (VAR54 + 1 - VAR7) * VAR6[0];
            VAR4 *VAR73 = VAR5[3] + (VAR54 + 1 - VAR7) * VAR6[3];
            VAR52++;
            FUN3("", VAR52, VAR54);
            assert(VAR52 < 2 * VAR41);
            assert(VAR54 + 1 - VAR7 < VAR8);
            assert(VAR54 + 1 - VAR7 >= 0);
            FUN1(VAR74)
            (VAR3, VAR38[VAR52], VAR12, VAR72, VAR11, VAR16, VAR20, VAR28, VAR24, VAR36, VAR3->VAR19, VAR43, VAR49, 0);
            if (VAR66 && VAR40)
                FUN1(VAR74)
                (VAR3, VAR40[VAR52], VAR12, VAR73, VAR11, VAR16, VAR20, VAR28, VAR24, VAR36, VAR3->VAR19, VAR43, VAR49, 1);
            VAR54++;
        }
        while (VAR55 < VAR70)
        {
            VAR4 *VAR72 = VAR5[1] + (VAR55 + 1 - VAR44) * VAR6[1];
            VAR4 *VAR73 = VAR5[2] + (VAR55 + 1 - VAR44) * VAR6[2];
            VAR53++;
            FUN3("", VAR53, VAR55);
            assert(VAR53 < 2 * VAR42);
            assert(VAR55 + 1 - VAR44 < (VAR46));
            assert(VAR55 + 1 - VAR44 >= 0);
            if (!(FUN5(VAR19) || FUN5(VAR18)))
                FUN1(VAR75)
                (VAR3, VAR39[VAR53], VAR14, VAR72, VAR73, VAR15, VAR17, VAR20, VAR29, VAR25, VAR37, VAR3->VAR19, VAR43, VAR49);
            VAR55++;
        }
        if (VAR52 >= VAR41)
            VAR52 -= VAR41;
        if (VAR53 >= VAR42)
            VAR53 -= VAR42;
        if (!VAR71)
            break;
        VAR3->VAR76 = VAR77[VAR51 & 1];
        if (VAR3->VAR18 == VAR78 || VAR3->VAR18 == VAR79)
            VAR3->VAR80 = VAR77[VAR51 & 1];
        else
            VAR3->VAR80 = VAR81[VAR51 & 1];
        VAR3->VAR82 = VAR77[(VAR51 + 1) & 1];
        if (VAR51 < VAR13 - 2)
        {
            const VAR21 **VAR83 = (const VAR21 **)VAR38 + VAR52 + VAR67 - VAR54 + VAR41;
            const VAR21 **VAR84 = (const VAR21 **)VAR39 + VAR53 + VAR68 - VAR55 + VAR42;
            const VAR21 **VAR85 = (VAR66 && VAR40) ? (const VAR21 **)VAR40 + VAR52 + VAR67 - VAR54 + VAR41 : NULL;
            int VAR86;
            if (VAR20 & VAR87)
            {
                int VAR88 = VAR89 / 8;
                for (VAR86 = 0; VAR86 < VAR34; VAR86 += 2)
                {
                    *(void **)&VAR31[VAR88 * VAR86] = VAR83[VAR86];
                    *(void **)&VAR31[VAR88 * VAR86 + VAR90 / 4] = VAR83[VAR86 + (VAR34 > 1)];
                    VAR31[VAR88 * VAR86 + VAR91 / 4] = VAR31[VAR88 * VAR86 + VAR91 / 4 + 1] = VAR26[VAR51 * VAR34 + VAR86] + (VAR34 > 1 ? VAR26[VAR51 * VAR34 + VAR86 + 1] << 16 : 0);
                    if (VAR66 && VAR40)
                    {
                        *(void **)&VAR33[VAR88 * VAR86] = VAR85[VAR86];
                        *(void **)&VAR33[VAR88 * VAR86 + VAR90 / 4] = VAR85[VAR86 + (VAR34 > 1)];
                        VAR33[VAR88 * VAR86 + VAR91 / 4] = VAR33[VAR88 * VAR86 + VAR91 / 4 + 1] = VAR31[VAR88 * VAR86 + VAR91 / 4];
                    }
                }
                for (VAR86 = 0; VAR86 < VAR35; VAR86 += 2)
                {
                    *(void **)&VAR32[VAR88 * VAR86] = VAR84[VAR86];
                    *(void **)&VAR32[VAR88 * VAR86 + VAR90 / 4] = VAR84[VAR86 + (VAR35 > 1)];
                    VAR32[VAR88 * VAR86 + VAR91 / 4] = VAR32[VAR88 * VAR86 + VAR91 / 4 + 1] = VAR27[VAR61 * VAR35 + VAR86] + (VAR35 > 1 ? VAR27[VAR61 * VAR35 + VAR86 + 1] << 16 : 0);
                }
            }
            else
            {
                for (VAR86 = 0; VAR86 < VAR34; VAR86++)
                {
                    VAR31[4 * VAR86 + 0] = (VAR30)VAR83[VAR86];
                    VAR31[4 * VAR86 + 1] = (VAR92)VAR83[VAR86] >> 32;
                    VAR31[4 * VAR86 + 2] = VAR31[4 * VAR86 + 3] = ((VAR93)VAR26[VAR51 * VAR34 + VAR86]) * 0x10001;
                    if (VAR66 && VAR40)
                    {
                        VAR33[4 * VAR86 + 0] = (VAR30)VAR85[VAR86];
                        VAR33[4 * VAR86 + 1] = (VAR92)VAR85[VAR86] >> 32;
                        VAR33[4 * VAR86 + 2] = VAR33[4 * VAR86 + 3] = VAR31[4 * VAR86 + 2];
                    }
                }
                for (VAR86 = 0; VAR86 < VAR35; VAR86++)
                {
                    VAR32[4 * VAR86 + 0] = (VAR30)VAR84[VAR86];
                    VAR32[4 * VAR86 + 1] = (VAR92)VAR84[VAR86] >> 32;
                    VAR32[4 * VAR86 + 2] = VAR32[4 * VAR86 + 3] = ((VAR93)VAR27[VAR61 * VAR35 + VAR86]) * 0x10001;
                }
            }
            if (VAR18 == VAR94 || VAR18 == VAR95)
            {
                const int VAR96 = (1 << VAR3->VAR62) - 1;
                if (VAR51 & VAR96)
                    VAR63 = NULL;
                VAR3->FUN6(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR60, VAR63, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || VAR18 == VAR97)
            {
                const int VAR96 = (1 << VAR3->VAR62) - 1;
                if ((VAR51 & VAR96) || FUN5(VAR18))
                    VAR63 = VAR64 = NULL;
                if (FUN8(VAR18))
                {
                    FUN9(VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR85, (VAR93 *)VAR60, (VAR93 *)VAR63, (VAR93 *)VAR64, (VAR93 *)VAR65, VAR12, VAR14, VAR18);
                }
                else if (VAR34 == 1 && VAR35 == 1)
                {
                    VAR21 *VAR98 = VAR83[0];
                    VAR21 *VAR99 = VAR84[0];
                    VAR21 *VAR100 = (VAR66 && VAR40) ? VAR85[0] : NULL;
                    VAR3->FUN10(VAR3, VAR98, VAR99, VAR100, VAR60, VAR63, VAR64, VAR65, VAR12, VAR14);
                }
                else
                {
                    VAR3->FUN11(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR63, VAR64, VAR65, VAR12, VAR14);
                }
            }
            else
            {
                assert(VAR83 + VAR34 - 1 < VAR38 + VAR41 * 2);
                assert(VAR84 + VAR35 - 1 < VAR39 + VAR42 * 2);
                if (VAR34 == 1 && VAR35 == 2)
                {
                    int VAR101 = VAR27[2 * VAR51 + 1];
                    if (VAR20 & VAR102)
                    {
                        FUN12(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN13(VAR3, *VAR83, *VAR84, *(VAR84 + 1), VAR40 ? *VAR85 : NULL, VAR60, VAR12, VAR101, VAR18, VAR20, VAR51);
                    }
                }
                else if (VAR34 == 2 && VAR35 == 2)
                {
                    int VAR103 = VAR26[2 * VAR51 + 1];
                    int VAR101 = VAR27[2 * VAR51 + 1];
                    VAR31[2] = VAR31[3] = VAR26[2 * VAR51] * 0x10001;
                    VAR32[2] = VAR32[3] = VAR27[2 * VAR61] * 0x10001;
                    if (VAR20 & VAR102)
                    {
                        FUN12(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN14(VAR3, *VAR83, *(VAR83 + 1), *VAR84, *(VAR84 + 1), VAR40 ? *VAR85 : NULL, VAR40 ? *(VAR85 + 1) : NULL, VAR60, VAR12, VAR103, VAR101, VAR51);
                    }
                }
                else
                {
                    if (VAR20 & VAR102)
                    {
                        FUN12(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                    }
                    else
                    {
                        VAR3->FUN15(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                    }
                }
            }
        }
        else
        {
            const VAR21 **VAR83 = (const VAR21 **)VAR38 + VAR52 + VAR67 - VAR54 + VAR41;
            const VAR21 **VAR84 = (const VAR21 **)VAR39 + VAR53 + VAR68 - VAR55 + VAR42;
            const VAR21 **VAR85 = (VAR66 && VAR40) ? (const VAR21 **)VAR40 + VAR52 + VAR67 - VAR54 + VAR41 : NULL;
            if (VAR18 == VAR94 || VAR18 == VAR95)
            {
                const int VAR96 = (1 << VAR3->VAR62) - 1;
                if (VAR51 & VAR96)
                    VAR63 = NULL;
                FUN16(VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR60, VAR63, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || VAR18 == VAR97)
            {
                const int VAR96 = (1 << VAR3->VAR62) - 1;
                if ((VAR51 & VAR96) || FUN5(VAR18))
                    VAR63 = VAR64 = NULL;
                if (FUN8(VAR18))
                {
                    FUN9(VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR85, (VAR93 *)VAR60, (VAR93 *)VAR63, (VAR93 *)VAR64, (VAR93 *)VAR65, VAR12, VAR14, VAR18);
                }
                else
                {
                    FUN17(VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR61 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR63, VAR64, VAR65, VAR12, VAR14);
                }
            }
            else
            {
                assert(VAR83 + VAR34 - 1 < VAR38 + VAR41 * 2);
                assert(VAR84 + VAR35 - 1 < VAR39 + VAR42 * 2);
                if (VAR20 & VAR102)
                {
                    FUN12(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                }
                else
                {
                    FUN18(VAR3, VAR26 + VAR51 * VAR34, VAR83, VAR34, VAR27 + VAR51 * VAR35, VAR84, VAR35, VAR85, VAR60, VAR12, VAR51);
                }
            }
        }
    }
    if ((VAR18 == VAR104) && !VAR40)
        FUN19(VAR9[3], VAR10[3], VAR12, VAR51 - VAR47, VAR47, 255);
    if (VAR20 & VAR105)
        VAR106 volatile(""
                         :
                         :
                         : "");
    if (VAR20 & VAR107)
        VAR106 volatile(""
                         :
                         :
                         : "");
    else
        VAR106 volatile(""
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