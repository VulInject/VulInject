static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5[], int VAR6[], int VAR7, int VAR8, VAR4 *VAR9[], int VAR10[])
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
    VAR20 *VAR21 = VAR3->VAR21;
    VAR20 *VAR22 = VAR3->VAR22;
    VAR20 *VAR23 = VAR3->VAR23;
    VAR20 *VAR24 = VAR3->VAR24;
    VAR20 *VAR25 = VAR3->VAR25;
    VAR20 *VAR26 = VAR3->VAR26;
    VAR20 *VAR27 = VAR3->VAR27;
    VAR20 *VAR28 = VAR3->VAR28;
    VAR20 *VAR29 = VAR3->VAR29;
    VAR20 *VAR30 = VAR3->VAR30;
    const int VAR31 = VAR3->VAR31;
    const int VAR32 = VAR3->VAR32;
    const int VAR33 = VAR3->VAR33;
    const int VAR34 = VAR3->VAR34;
    VAR20 **VAR35 = VAR3->VAR35;
    VAR20 **VAR36 = VAR3->VAR36;
    const int VAR37 = VAR3->VAR37;
    const int VAR38 = VAR3->VAR38;
    VAR4 *VAR39 = VAR3->VAR39;
    VAR4 *VAR40 = VAR3->VAR40;
    VAR4 *VAR41 = VAR3->VAR41;
    int VAR42 = VAR3->VAR42;
    int VAR43 = VAR3->VAR43;
    int VAR44 = VAR3->VAR44;
    int VAR45 = VAR3->VAR45;
    int VAR46 = VAR3->VAR46;
    int VAR47[3];
    int VAR48[3];
    VAR4 *VAR49[3];
    VAR4 *VAR50[3];
    if (VAR3->VAR51 == VAR52)
    {
        VAR49[0] = VAR5[0];
        VAR49[1] = VAR5[2];
        VAR49[2] = VAR5[1];
        VAR47[0] = VAR6[0];
        VAR47[1] = VAR6[2];
        VAR47[2] = VAR6[1];
    }
    else if (VAR3->VAR51 == VAR53)
    {
        VAR49[0] = VAR5[0];
        VAR49[1] = VAR5[1];
        VAR49[2] = VAR5[2];
        VAR47[0] = VAR6[0];
        VAR47[1] = VAR6[1];
        VAR47[2] = VAR6[2];
    }
    else if (FUN2(VAR3->VAR51))
    {
        VAR49[0] = VAR49[1] = VAR49[2] = VAR5[0];
        VAR47[0] = VAR6[0];
        VAR47[1] = VAR47[2] = VAR6[0] << 1;
    }
    else if (FUN3(VAR3->VAR51))
    {
        VAR49[0] = VAR5[0];
        VAR49[1] = VAR49[2] = NULL;
        VAR47[0] = VAR6[0];
        VAR47[1] = VAR47[2] = 0;
    }
    if (VAR17 == VAR52)
    {
        VAR50[0] = VAR9[0];
        VAR50[1] = VAR9[2];
        VAR50[2] = VAR9[1];
        VAR48[0] = VAR10[0];
        VAR48[1] = VAR10[2];
        VAR48[2] = VAR10[1];
    }
    else
    {
        VAR50[0] = VAR9[0];
        VAR50[1] = VAR9[1];
        VAR50[2] = VAR9[2];
        VAR48[0] = VAR10[0];
        VAR48[1] = VAR10[1];
        VAR48[2] = VAR10[2];
    }
    if (VAR48[0] % 8 != 0 || VAR48[1] % 8 != 0 || VAR48[2] % 8 != 0)
    {
        static int VAR54 = 1;
        if (VAR18 & VAR55 && VAR54)
        {
            fprintf(VAR56, ""
                            "");
            VAR54 = 0;
        }
    }
    if (VAR7 == 0)
    {
        VAR43 = 0;
        VAR44 = 0;
        VAR42 = 0;
        VAR45 = -1;
        VAR46 = -1;
    }
    for (; VAR42 < VAR13; VAR42++)
    {
        unsigned char *VAR57 = VAR50[0] + VAR48[0] * VAR42;
        unsigned char *VAR58 = VAR50[1] + VAR48[1] * (VAR42 >> 1);
        unsigned char *VAR59 = VAR50[2] + VAR48[2] * (VAR42 >> 1);
        const int VAR60 = FUN4(VAR17) ? (VAR42 >> 1) : VAR42;
        const int VAR61 = VAR21[VAR42];
        const int VAR62 = VAR22[VAR60];
        const int VAR63 = VAR61 + VAR31 - 1;
        const int VAR64 = VAR62 + VAR32 - 1;
        if (VAR61 > VAR45)
            VAR45 = VAR61 - 1;
        if (VAR62 > VAR46)
            VAR46 = VAR62 - 1;
        FUN5(VAR61 >= VAR45 - VAR37 + 1)
        FUN5(VAR62 >= VAR46 - VAR38 + 1) if (VAR63 < VAR7 + VAR8 && VAR64 < ((VAR7 + VAR8 + 1) >> 1))
        {
            while (VAR45 < VAR63)
            {
                VAR4 *VAR65 = VAR49[0] + (VAR45 + 1 - VAR7) * VAR47[0];
                VAR43++;
                FUN5(VAR43 < 2 * VAR37)
                FUN5(VAR45 + 1 - VAR7 < VAR8) FUN5(VAR45 + 1 - VAR7 >= 0) FUN1(VAR66)(VAR35[VAR43], VAR12, VAR65, VAR11, VAR15, VAR18, VAR19, VAR27, VAR23, VAR33, VAR39, VAR3->VAR51, VAR41);
                VAR45++;
            }
            while (VAR46 < VAR64)
            {
                VAR4 *VAR67 = VAR49[1] + (VAR46 + 1 - (VAR7 >> 1)) * VAR47[1];
                VAR4 *VAR68 = VAR49[2] + (VAR46 + 1 - (VAR7 >> 1)) * VAR47[2];
                VAR44++;
                FUN5(VAR44 < 2 * VAR38)
                FUN5(VAR46 + 1 - (VAR7 >> 1) < ((VAR8 + 1) >> 1)) FUN5(VAR46 + 1 - (VAR7 >> 1) >= 0) FUN1(VAR69)(VAR36[VAR44], VAR14, VAR67, VAR68, (VAR11 + 1) >> 1, VAR16, VAR18, VAR19, VAR28, VAR24, VAR34, VAR40, VAR3->VAR51, VAR41);
                VAR46++;
            }
            if (VAR43 >= VAR37)
                VAR43 -= VAR37;
            if (VAR44 >= VAR38)
                VAR44 -= VAR38;
        }
        else
        {
            while (VAR45 + 1 < VAR7 + VAR8)
            {
                VAR4 *VAR65 = VAR49[0] + (VAR45 + 1 - VAR7) * VAR47[0];
                VAR43++;
                FUN5(VAR43 < 2 * VAR37)
                FUN5(VAR45 + 1 - VAR7 < VAR8) FUN5(VAR45 + 1 - VAR7 >= 0) FUN1(VAR66)(VAR35[VAR43], VAR12, VAR65, VAR11, VAR15, VAR18, VAR19, VAR27, VAR23, VAR33, VAR39, VAR3->VAR51, VAR41);
                VAR45++;
            }
            while (VAR46 + 1 < ((VAR7 + VAR8) >> 1))
            {
                VAR4 *VAR67 = VAR49[1] + (VAR46 + 1 - (VAR7 >> 1)) * VAR47[1];
                VAR4 *VAR68 = VAR49[2] + (VAR46 + 1 - (VAR7 >> 1)) * VAR47[2];
                VAR44++;
                FUN5(VAR44 < 2 * VAR38)
                FUN5(VAR46 + 1 - (VAR7 >> 1) < ((VAR8 + 1) >> 1)) FUN5(VAR46 + 1 - (VAR7 >> 1) >= 0) FUN1(VAR69)(VAR36[VAR44], VAR14, VAR67, VAR68, (VAR11 + 1) >> 1, VAR16, VAR18, VAR19, VAR28, VAR24, VAR34, VAR40, VAR3->VAR51, VAR41);
                VAR46++;
            }
            if (VAR43 >= VAR37)
                VAR43 -= VAR37;
            if (VAR44 >= VAR38)
                VAR44 -= VAR38;
            break;
        }
        VAR70 = VAR71[VAR42 & 1];
        VAR72 = VAR73[VAR42 & 1];
        VAR74 = VAR71[VAR42 & 1];
        VAR75 = VAR71[(VAR42 + 1) & 1];
        if (VAR42 < VAR13 - 2)
        {
            if (FUN6(VAR17))
            {
                if (VAR42 & 1)
                    VAR58 = VAR59 = NULL;
                if (VAR31 == 1 && VAR32 == 1)
                {
                    VAR20 *VAR76 = VAR35[0];
                    VAR20 *VAR77 = VAR36[0];
                    FUN1(VAR78)
                    (VAR76, VAR77, VAR57, VAR58, VAR59, VAR12);
                }
                else
                {
                    VAR20 **VAR79 = VAR35 + VAR43 + VAR61 - VAR45 + VAR37;
                    VAR20 **VAR80 = VAR36 + VAR44 + VAR62 - VAR46 + VAR38;
                    FUN1(VAR81)
                    (VAR25 + VAR42 * VAR31, VAR79, VAR31, VAR26 + (VAR42 >> 1) * VAR32, VAR80, VAR32, VAR57, VAR58, VAR59, VAR12, VAR29 + VAR42 * VAR31 * 4, VAR30 + (VAR42 >> 1) * VAR32 * 4);
                }
            }
            else
            {
                VAR20 **VAR79 = VAR35 + VAR43 + VAR61 - VAR45 + VAR37;
                VAR20 **VAR80 = VAR36 + VAR44 + VAR62 - VAR46 + VAR38;
                FUN5(VAR79 + VAR31 - 1 < VAR35 + VAR37 * 2);
                FUN5(VAR80 + VAR32 - 1 < VAR36 + VAR38 * 2);
                if (VAR31 == 1 && VAR32 == 2)
                {
                    int VAR82 = VAR26[2 * VAR42 + 1];
                    FUN1(VAR83)
                    (*VAR79, *VAR80, *(VAR80 + 1), VAR57, VAR12, VAR82, VAR17, VAR18);
                }
                else if (VAR31 == 2 && VAR32 == 2)
                {
                    int VAR84 = VAR25[2 * VAR42 + 1];
                    int VAR82 = VAR26[2 * VAR42 + 1];
                    FUN1(VAR85)
                    (*VAR79, *(VAR79 + 1), *VAR80, *(VAR80 + 1), VAR57, VAR12, VAR84, VAR82, VAR17, VAR18);
                }
                else
                {
                    FUN1(VAR86)
                    (VAR25 + VAR42 * VAR31, VAR79, VAR31, VAR26 + VAR42 * VAR32, VAR80, VAR32, VAR57, VAR12, VAR17, VAR29 + VAR42 * VAR31 * 4, VAR30 + VAR42 * VAR32 * 4);
                }
            }
        }
        else
        {
            VAR20 **VAR79 = VAR35 + VAR43 + VAR61 - VAR45 + VAR37;
            VAR20 **VAR80 = VAR36 + VAR44 + VAR62 - VAR46 + VAR38;
            if (FUN6(VAR17))
            {
                if (VAR42 & 1)
                    VAR58 = VAR59 = NULL;
                FUN7(VAR25 + VAR42 * VAR31, VAR79, VAR31, VAR26 + (VAR42 >> 1) * VAR32, VAR80, VAR32, VAR57, VAR58, VAR59, VAR12);
            }
            else
            {
                FUN5(VAR79 + VAR31 - 1 < VAR35 + VAR37 * 2);
                FUN5(VAR80 + VAR32 - 1 < VAR36 + VAR38 * 2);
                FUN8(VAR25 + VAR42 * VAR31, VAR79, VAR31, VAR26 + VAR42 * VAR32, VAR80, VAR32, VAR57, VAR12, VAR17);
            }
        }
    }
    __asm FUN9(VAR87
                     :
                     :
                     : "");
    __asm FUN9(VAR88
                     :
                     :
                     : "");
    VAR3->VAR42 = VAR42;
    VAR3->VAR43 = VAR43;
    VAR3->VAR44 = VAR44;
    VAR3->VAR45 = VAR45;
    VAR3->VAR46 = VAR46;
}