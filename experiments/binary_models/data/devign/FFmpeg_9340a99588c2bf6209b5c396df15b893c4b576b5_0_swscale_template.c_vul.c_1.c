static int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5[], int VAR6[], int VAR7, int VAR8, VAR4 *VAR9[], int VAR10[])
{
    const int VAR11 = VAR3->VAR11;
    const int VAR12 = VAR3->VAR12;
    const int VAR13 = VAR3->VAR13;
    const int VAR14 = VAR3->VAR14;
    const int VAR15 = VAR3->VAR15;
    const int VAR16 = VAR3->VAR16;
    const int VAR17 = VAR3->VAR17;
    const int VAR18 = VAR3->VAR18;
    const int VAR19 = VAR3->VAR19;
    const int VAR20 = VAR3->VAR20;
    const int VAR21 = VAR3->VAR21;
    VAR22 *VAR23 = VAR3->VAR23;
    VAR22 *VAR24 = VAR3->VAR24;
    VAR22 *VAR25 = VAR3->VAR25;
    VAR22 *VAR26 = VAR3->VAR26;
    VAR22 *VAR27 = VAR3->VAR27;
    VAR22 *VAR28 = VAR3->VAR28;
    VAR22 *VAR29 = VAR3->VAR29;
    VAR22 *VAR30 = VAR3->VAR30;
    VAR31 *VAR32 = VAR3->VAR32;
    VAR31 *VAR33 = VAR3->VAR33;
    const int VAR34 = VAR3->VAR34;
    const int VAR35 = VAR3->VAR35;
    const int VAR36 = VAR3->VAR36;
    const int VAR37 = VAR3->VAR37;
    VAR22 **VAR38 = VAR3->VAR38;
    VAR22 **VAR39 = VAR3->VAR39;
    const int VAR40 = VAR3->VAR40;
    const int VAR41 = VAR3->VAR41;
    VAR4 *VAR42 = VAR3->VAR42;
    VAR4 *VAR43 = VAR3->VAR43;
    VAR4 *VAR44 = VAR3->VAR44;
    const int VAR45 = VAR7 >> VAR3->VAR46;
    const int VAR47 = -((-VAR8) >> VAR3->VAR46);
    int VAR48;
    VAR4 *VAR49 = NULL;
    int VAR50 = VAR3->VAR50;
    int VAR51 = VAR3->VAR51;
    int VAR52 = VAR3->VAR52;
    int VAR53 = VAR3->VAR53;
    int VAR54 = VAR3->VAR54;
    if (FUN2(VAR3->VAR19))
    {
        VAR49 = VAR5[1];
        VAR5[0] = VAR5[1] = VAR5[2] = VAR5[0];
        VAR6[0] = VAR6[1] = VAR6[2] = VAR6[0];
    }
    VAR6[1] <<= VAR3->VAR55;
    VAR6[2] <<= VAR3->VAR55;
    {
        static volatile int VAR56 = 0;
        VAR56++;
        if (VAR19 == VAR57 && VAR56 == 1 && VAR8 >= VAR3->VAR58)
            FUN3(VAR5, VAR6, VAR3->VAR11, VAR3->VAR58);
        VAR56--;
    }
    if (VAR10[0] % 8 != 0 || VAR10[1] % 8 != 0 || VAR10[2] % 8 != 0)
    {
        static int VAR59 = 1;
        if (VAR20 & VAR60 && VAR59)
        {
            FUN4(VAR3, VAR61, ""
                                      "");
            VAR59 = 0;
        }
    }
    if (VAR7 == 0)
    {
        VAR51 = 0;
        VAR52 = 0;
        VAR50 = 0;
        VAR53 = -1;
        VAR54 = -1;
    }
    VAR48 = VAR50;
    for (; VAR50 < VAR13; VAR50++)
    {
        unsigned char *VAR62 = VAR9[0] + VAR10[0] * VAR50;
        const int VAR63 = VAR50 >> VAR3->VAR64;
        unsigned char *VAR65 = VAR9[1] + VAR10[1] * VAR63;
        unsigned char *VAR66 = VAR9[2] + VAR10[2] * VAR63;
        const int VAR67 = VAR23[VAR50];
        const int VAR68 = VAR24[VAR63];
        const int VAR69 = VAR67 + VAR34 - 1;
        const int VAR70 = VAR68 + VAR35 - 1;
        if (VAR67 > VAR53)
            VAR53 = VAR67 - 1;
        if (VAR68 > VAR54)
            VAR54 = VAR68 - 1;
        FUN5(VAR67 >= VAR53 - VAR40 + 1)
        FUN5(VAR68 >= VAR54 - VAR41 + 1) if (VAR69 < VAR7 + VAR8 && VAR70 < -((-VAR7 - VAR8) >> VAR3->VAR46))
        {
            while (VAR53 < VAR69)
            {
                VAR4 *VAR71 = VAR5[0] + (VAR53 + 1 - VAR7) * VAR6[0];
                VAR51++;
                FUN5(VAR51 < 2 * VAR40)
                FUN5(VAR53 + 1 - VAR7 < VAR8) FUN5(VAR53 + 1 - VAR7 >= 0) FUN1(VAR72)(VAR38[VAR51], VAR12, VAR71, VAR11, VAR16, VAR20, VAR21, VAR29, VAR25, VAR36, VAR42, VAR3->VAR19, VAR44, VAR3->VAR73, VAR3->VAR74, VAR49);
                VAR53++;
            }
            while (VAR54 < VAR70)
            {
                VAR4 *VAR75 = VAR5[1] + (VAR54 + 1 - VAR45) * VAR6[1];
                VAR4 *VAR76 = VAR5[2] + (VAR54 + 1 - VAR45) * VAR6[2];
                VAR52++;
                FUN5(VAR52 < 2 * VAR41)
                FUN5(VAR54 + 1 - VAR45 < (VAR47)) FUN5(VAR54 + 1 - VAR45 >= 0) if (!(FUN6(VAR19) || FUN6(VAR18))) FUN1(VAR77)(VAR39[VAR52], VAR14, VAR75, VAR76, VAR15, VAR17, VAR20, VAR21, VAR30, VAR26, VAR37, VAR43, VAR3->VAR19, VAR44, VAR3->VAR78, VAR3->VAR79, VAR49);
                VAR54++;
            }
            if (VAR51 >= VAR40)
                VAR51 -= VAR40;
            if (VAR52 >= VAR41)
                VAR52 -= VAR41;
        }
        else
        {
            while (VAR53 + 1 < VAR7 + VAR8)
            {
                VAR4 *VAR71 = VAR5[0] + (VAR53 + 1 - VAR7) * VAR6[0];
                VAR51++;
                FUN5(VAR51 < 2 * VAR40)
                FUN5(VAR53 + 1 - VAR7 < VAR8) FUN5(VAR53 + 1 - VAR7 >= 0) FUN1(VAR72)(VAR38[VAR51], VAR12, VAR71, VAR11, VAR16, VAR20, VAR21, VAR29, VAR25, VAR36, VAR42, VAR3->VAR19, VAR44, VAR3->VAR73, VAR3->VAR74, VAR49);
                VAR53++;
            }
            while (VAR54 + 1 < (VAR45 + VAR47))
            {
                VAR4 *VAR75 = VAR5[1] + (VAR54 + 1 - VAR45) * VAR6[1];
                VAR4 *VAR76 = VAR5[2] + (VAR54 + 1 - VAR45) * VAR6[2];
                VAR52++;
                FUN5(VAR52 < 2 * VAR41)
                FUN5(VAR54 + 1 - VAR45 < VAR47) FUN5(VAR54 + 1 - VAR45 >= 0) if (!(FUN6(VAR19) || FUN6(VAR18))) FUN1(VAR77)(VAR39[VAR52], VAR14, VAR75, VAR76, VAR15, VAR17, VAR20, VAR21, VAR30, VAR26, VAR37, VAR43, VAR3->VAR19, VAR44, VAR3->VAR78, VAR3->VAR79, VAR49);
                VAR54++;
            }
            if (VAR51 >= VAR40)
                VAR51 -= VAR40;
            if (VAR52 >= VAR41)
                VAR52 -= VAR41;
            break;
        }
        VAR80 = VAR81[VAR50 & 1];
        VAR82 = VAR83[VAR50 & 1];
        VAR84 = VAR81[VAR50 & 1];
        VAR85 = VAR81[(VAR50 + 1) & 1];
        if (VAR50 < VAR13 - 2)
        {
            VAR22 **VAR86 = VAR38 + VAR51 + VAR67 - VAR53 + VAR40;
            VAR22 **VAR87 = VAR39 + VAR52 + VAR68 - VAR54 + VAR41;
            int VAR56;
            if (VAR20 & VAR88)
            {
                for (VAR56 = 0; VAR56 < VAR34; VAR56 += 2)
                {
                    VAR32[2 * VAR56 + 0] = (VAR31)VAR86[VAR56];
                    VAR32[2 * VAR56 + 1] = (VAR31)VAR86[VAR56 + (VAR34 > 1)];
                    VAR32[2 * VAR56 + 2] = VAR32[2 * VAR56 + 3] = VAR27[VAR50 * VAR34 + VAR56] + (VAR34 > 1 ? VAR27[VAR50 * VAR34 + VAR56 + 1] << 16 : 0);
                }
                for (VAR56 = 0; VAR56 < VAR35; VAR56 += 2)
                {
                    VAR33[2 * VAR56 + 0] = (VAR31)VAR87[VAR56];
                    VAR33[2 * VAR56 + 1] = (VAR31)VAR87[VAR56 + (VAR35 > 1)];
                    VAR33[2 * VAR56 + 2] = VAR33[2 * VAR56 + 3] = VAR28[VAR63 * VAR35 + VAR56] + (VAR35 > 1 ? VAR28[VAR63 * VAR35 + VAR56 + 1] << 16 : 0);
                }
            }
            else
            {
                for (VAR56 = 0; VAR56 < VAR34; VAR56++)
                {
                    VAR32[4 * VAR56 + 0] = (VAR31)VAR86[VAR56];
                    VAR32[4 * VAR56 + 1] = (VAR89)VAR86[VAR56] >> 32;
                    VAR32[4 * VAR56 + 2] = VAR32[4 * VAR56 + 3] = ((VAR90)VAR27[VAR50 * VAR34 + VAR56]) * 0x10001;
                }
                for (VAR56 = 0; VAR56 < VAR35; VAR56++)
                {
                    VAR33[4 * VAR56 + 0] = (VAR31)VAR87[VAR56];
                    VAR33[4 * VAR56 + 2] = VAR33[4 * VAR56 + 3] = ((VAR90)VAR28[VAR63 * VAR35 + VAR56]) * 0x10001;
                }
            }
            if (VAR18 == VAR91 || VAR18 == VAR92)
            {
                const int VAR93 = (1 << VAR3->VAR64) - 1;
                if (VAR50 & VAR93)
                    VAR65 = NULL;
                FUN1(VAR94)
                (VAR3, VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR63 * VAR35, VAR87, VAR35, VAR62, VAR65, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || FUN6(VAR18))
            {
                const int VAR93 = (1 << VAR3->VAR64) - 1;
                if ((VAR50 & VAR93) || FUN6(VAR18))
                    VAR65 = VAR66 = NULL;
                if (VAR34 == 1 && VAR35 == 1)
                {
                    VAR22 *VAR95 = VAR38[0];
                    VAR22 *VAR96 = VAR39[0];
                    FUN1(VAR97)
                    (VAR95, VAR96, VAR62, VAR65, VAR66, VAR12, VAR14);
                }
                else
                {
                    FUN1(VAR98)
                    (VAR3, VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR63 * VAR35, VAR87, VAR35, VAR62, VAR65, VAR66, VAR12, VAR14);
                }
            }
            else
            {
                FUN5(VAR86 + VAR34 - 1 < VAR38 + VAR40 * 2);
                FUN5(VAR87 + VAR35 - 1 < VAR39 + VAR41 * 2);
                if (VAR34 == 1 && VAR35 == 2)
                {
                    int VAR99 = VAR28[2 * VAR50 + 1];
                    FUN1(VAR100)
                    (VAR3, *VAR86, *VAR87, *(VAR87 + 1), VAR62, VAR12, VAR99, VAR18, VAR20, VAR50);
                }
                else if (VAR34 == 2 && VAR35 == 2)
                {
                    int VAR101 = VAR27[2 * VAR50 + 1];
                    int VAR99 = VAR28[2 * VAR50 + 1];
                    VAR32[2] = VAR32[3] = VAR27[2 * VAR50] * 0x10001;
                    VAR33[2] = VAR33[3] = VAR28[2 * VAR63] * 0x10001;
                    FUN1(VAR102)
                    (VAR3, *VAR86, *(VAR86 + 1), *VAR87, *(VAR87 + 1), VAR62, VAR12, VAR101, VAR99, VAR50);
                }
                else
                {
                    FUN1(VAR103)
                    (VAR3, VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR50 * VAR35, VAR87, VAR35, VAR62, VAR12, VAR50);
                }
            }
        }
        else
        {
            VAR22 **VAR86 = VAR38 + VAR51 + VAR67 - VAR53 + VAR40;
            VAR22 **VAR87 = VAR39 + VAR52 + VAR68 - VAR54 + VAR41;
            if (VAR18 == VAR91 || VAR18 == VAR92)
            {
                const int VAR93 = (1 << VAR3->VAR64) - 1;
                if (VAR50 & VAR93)
                    VAR65 = NULL;
                FUN8(VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR63 * VAR35, VAR87, VAR35, VAR62, VAR65, VAR12, VAR14, VAR18);
            }
            else if (FUN7(VAR18) || FUN6(VAR18))
            {
                const int VAR93 = (1 << VAR3->VAR64) - 1;
                if ((VAR50 & VAR93) || FUN6(VAR18))
                    VAR65 = VAR66 = NULL;
                FUN9(VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR63 * VAR35, VAR87, VAR35, VAR62, VAR65, VAR66, VAR12, VAR14);
            }
            else
            {
                FUN5(VAR86 + VAR34 - 1 < VAR38 + VAR40 * 2);
                FUN5(VAR87 + VAR35 - 1 < VAR39 + VAR41 * 2);
                FUN10(VAR3, VAR27 + VAR50 * VAR34, VAR86, VAR34, VAR28 + VAR50 * VAR35, VAR87, VAR35, VAR62, VAR12, VAR50);
            }
        }
    }
    __asm FUN11(VAR104
                     :
                     :
                     : "");
    __asm FUN11(VAR105
                     :
                     :
                     : "");
    VAR3->VAR50 = VAR50;
    VAR3->VAR51 = VAR51;
    VAR3->VAR52 = VAR52;
    VAR3->VAR53 = VAR53;
    VAR3->VAR54 = VAR54;
    return VAR50 - VAR48;