static void FUN1(VAR1)(unsigned char *VAR2[], int VAR3[], int VAR4, int VAR5, VAR6 *VAR7[], int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13)
{
    unsigned int VAR14 = (VAR10 << 16) / VAR12;
    unsigned int VAR15 = (VAR11 << 16) / VAR13;
    unsigned int VAR16;
    unsigned int VAR17;
    static int VAR18;
    static int VAR19 = -1;
    static int VAR20 = -1;
    static int VAR21 = -1;
    static int VAR22 = -1;
    static int VAR23 = -1;
    static int VAR24;
    static int VAR25;
    int VAR26, VAR27;
    static int VAR28 = 0;
    static int VAR29 = 0;
    static int VAR30 = 1;
    int VAR31 = VAR9 == 12 ? 16 : 8;
    if (((VAR12 + VAR31 - 1) & (~(VAR31 - 1))) > VAR8)
    {
        VAR12 &= ~(VAR31 - 1);
        if (VAR30)
            fprintf(VAR32, ""
                            ""
                            "",
                    VAR31, VAR12);
    }
    VAR33 = (VAR14 <= 0x10000 && (VAR12 & 31) == 0 && (VAR10 & 15) == 0) ? 1 : 0;
    if (!VAR33 && VAR14 <= 0x10000 && (VAR10 & 15) == 0 && VAR34 == VAR35)
    {
        if (VAR30)
            fprintf(VAR32, "");
    }
    if (VAR30)
    {
        char *VAR36 = "";
        char *VAR36 = "";
        if (VAR34 == VAR35)
            fprintf(VAR32, "");
        else if (VAR34 == VAR37)
            fprintf(VAR32, "");
        else if (VAR34 == VAR38)
            fprintf(VAR32, "");
        else
            fprintf(VAR32, "");
        if (VAR9 == 15)
            fprintf(VAR32, "", VAR36);
        else if (VAR9 == 16)
            fprintf(VAR32, "", VAR36);
        else if (VAR9 == 24)
            fprintf(VAR32, "");
        else if (VAR9 == 32)
            fprintf(VAR32, "");
        else if (VAR9 == 12)
            fprintf(VAR32, "");
        else
            fprintf(VAR32, "");
        fprintf(VAR32, "");
        fprintf(VAR32, "");
        fprintf(VAR32, "");
        fprintf(VAR32, "");
        fprintf(VAR32, "");
    }
    if (VAR34 == VAR35)
    {
        if (VAR33)
            VAR14 += 20;
        else
            VAR14 = ((VAR10 - 2) << 16) / (VAR12 - 2) - 20;
    }
    if (VAR39 && !(VAR9 == 12))
        VAR16 = VAR14 >> 1, VAR26 = VAR12;
    else
        VAR16 = VAR14, VAR26 = VAR12 >> 1;
    if (VAR9 == 12)
        VAR17 = VAR15, VAR27 = VAR13 >> 1;
    else
        VAR17 = VAR15 >> 1, VAR27 = VAR13;
    if (VAR4 == 0)
    {
        VAR28 = 0;
        VAR29 = 0;
        VAR18 = 0;
        if (VAR19 != VAR12 || VAR20 != VAR10 || VAR23 != VAR34)
        {
            const int VAR40 = 4;
            const int VAR40 = 1;
            VAR19 = VAR12;
            VAR20 = VAR10;
            VAR23 = VAR34;
            if (VAR34 != VAR35)
            {
                FUN1(VAR41)
                (VAR42, VAR43, &VAR44, VAR14, VAR10, VAR12, VAR40, 1 << 14);
                FUN1(VAR41)
                (VAR45, VAR46, &VAR47, VAR16, VAR10 >> 1, VAR26, VAR40, 1 << 14);
            }
            if (VAR33 && VAR34 == VAR35)
            {
                FUN2(VAR12, VAR14, VAR48);
                FUN2(VAR26, VAR16, VAR49);
            }
        }
        if (VAR21 != VAR13 || VAR22 != VAR11 || VAR23 != VAR34)
        {
            int VAR50;
            VAR21 = VAR13;
            VAR22 = VAR11;
            VAR23 = VAR34;
            for (VAR50 = 0; VAR50 < VAR51; VAR50++)
                free(VAR52[VAR50]);
            for (VAR50 = 0; VAR50 < VAR53; VAR50++)
                free(VAR54[VAR50]);
            FUN1(VAR41)
            (VAR55, VAR56, &VAR57, VAR15, VAR11, VAR13, 1, (1 << 12) - 4);
            FUN1(VAR41)
            (VAR58, VAR59, &VAR60, VAR17, VAR11 >> 1, VAR27, 1, (1 << 12) - 4);
            VAR51 = VAR57;
            VAR53 = VAR60;
            for (VAR50 = 0; VAR50 < VAR13; VAR50++)
            {
                int VAR61 = VAR50 * VAR27 / VAR13;
                int VAR62 = FUN3(VAR56[VAR50] + VAR57 - 1, ((VAR59[VAR61] + VAR60 - 1) << 1));
                VAR62 &= ~1;
                if (VAR56[VAR50] + VAR51 < VAR62)
                    VAR51 = VAR62 - VAR56[VAR50];
                if (VAR59[VAR61] + VAR53 < (VAR62 >> 1))
                    VAR53 = (VAR62 >> 1) - VAR59[VAR61];
            }
            for (VAR50 = 0; VAR50 < VAR51; VAR50++)
                VAR52[VAR50] = VAR52[VAR50 + VAR51] = (VAR63 *)memalign(8, 4000);
            for (VAR50 = 0; VAR50 < VAR53; VAR50++)
                VAR54[VAR50] = VAR54[VAR50 + VAR53] = (VAR63 *)memalign(8, 8000);
            for (VAR50 = 0; VAR50 < VAR51; VAR50++)
                memset(VAR52[VAR50], 0, 4000);
            for (VAR50 = 0; VAR50 < VAR53; VAR50++)
                memset(VAR54[VAR50], 64, 8000);
            for (VAR50 = 0; VAR50 < VAR57 * VAR13; VAR50++)
                VAR64[4 * VAR50] = VAR64[4 * VAR50 + 1] = VAR64[4 * VAR50 + 2] = VAR64[4 * VAR50 + 3] = VAR55[VAR50];
            for (VAR50 = 0; VAR50 < VAR60 * VAR27; VAR50++)
                VAR65[4 * VAR50] = VAR65[4 * VAR50 + 1] = VAR65[4 * VAR50 + 2] = VAR65[4 * VAR50 + 3] = VAR58[VAR50];
        }
        VAR24 = -1;
        VAR25 = -1;
    }
    for (; VAR18 < VAR13; VAR18++)
    {
        unsigned char *VAR66 = VAR7[0] + VAR8 * VAR18;
        unsigned char *VAR67 = VAR7[1] + (VAR8 >> 1) * (VAR18 >> 1);
        unsigned char *VAR68 = VAR7[2] + (VAR8 >> 1) * (VAR18 >> 1);
        const int VAR69 = VAR9 == 12 ? (VAR18 >> 1) : VAR18;
        const int VAR70 = VAR56[VAR18];
        const int VAR71 = VAR59[VAR69];
        const int VAR72 = VAR70 + VAR57 - 1;
        const int VAR73 = VAR71 + VAR60 - 1;
        if (VAR34 == VAR35)
        {
            if (VAR70 > VAR24)
                VAR24 = VAR70 - 1;
            if (VAR71 > VAR25)
                VAR25 = VAR71 - 1;
        }
        FUN4(VAR70 >= VAR24 - VAR51 + 1)
        FUN4(VAR71 >= VAR25 - VAR53 + 1) if (VAR72 < VAR4 + VAR5 && VAR73 < ((VAR4 + VAR5) >> 1))
        {
            while (VAR24 < VAR72)
            {
                VAR6 *VAR74 = VAR2[0] + (VAR24 + 1 - VAR4) * VAR3[0];
                VAR28++;
                FUN4(VAR28 < 2 * VAR51)
                FUN4(VAR24 + 1 - VAR4 < VAR5) FUN4(VAR24 + 1 - VAR4 >= 0) FUN1(VAR75)(VAR52[VAR28], VAR12, VAR74, VAR10, VAR14);
                VAR24++;
            }
            while (VAR25 < VAR73)
            {
                VAR6 *VAR76 = VAR2[1] + (VAR25 + 1 - (VAR4 >> 1)) * VAR3[1];
                VAR6 *VAR77 = VAR2[2] + (VAR25 + 1 - (VAR4 >> 1)) * VAR3[2];
                VAR29++;
                FUN4(VAR29 < 2 * VAR53)
                FUN4(VAR25 + 1 - (VAR4 >> 1) < (VAR5 >> 1)) FUN4(VAR25 + 1 - (VAR4 >> 1) >= 0) FUN1(VAR78)(VAR54[VAR29], VAR26, VAR76, VAR77, VAR10 >> 1, VAR16);
                VAR25++;
            }
            if (VAR28 >= VAR51)
                VAR28 -= VAR51;
            if (VAR29 >= VAR53)
                VAR29 -= VAR53;
        }
        else
        {
            while (VAR24 + 1 < VAR4 + VAR5)
            {
                VAR6 *VAR74 = VAR2[0] + (VAR24 + 1 - VAR4) * VAR3[0];
                VAR28++;
                FUN4(VAR28 < 2 * VAR51)
                FUN4(VAR24 + 1 - VAR4 < VAR5) FUN4(VAR24 + 1 - VAR4 >= 0) FUN1(VAR75)(VAR52[VAR28], VAR12, VAR74, VAR10, VAR14);
                VAR24++;
            }
            while (VAR25 + 1 < ((VAR4 + VAR5) >> 1))
            {
                VAR6 *VAR76 = VAR2[1] + (VAR25 + 1 - (VAR4 >> 1)) * VAR3[1];
                VAR6 *VAR77 = VAR2[2] + (VAR25 + 1 - (VAR4 >> 1)) * VAR3[2];
                VAR29++;
                FUN4(VAR29 < 2 * VAR53)
                FUN4(VAR25 + 1 - (VAR4 >> 1) < (VAR5 >> 1)) FUN4(VAR25 + 1 - (VAR4 >> 1) >= 0) FUN1(VAR78)(VAR54[VAR29], VAR26, VAR76, VAR77, VAR10 >> 1, VAR16);
                VAR25++;
            }
            if (VAR28 >= VAR51)
                VAR28 -= VAR51;
            if (VAR29 >= VAR53)
                VAR29 -= VAR53;
            break;
        }
        VAR79 = VAR80[VAR18 & 1];
        VAR81 = VAR82[VAR18 & 1];
        VAR83 = VAR80[VAR18 & 1];
        VAR84 = VAR80[(VAR18 + 1) & 1];
        if (VAR9 == 12)
        {
            if (VAR18 & 1)
                VAR67 = VAR68 = NULL;
            if (VAR57 == 1 && VAR60 == 1)
            {
                VAR85 *VAR86 = VAR52[0];
                VAR85 *VAR87 = VAR54[0];
                FUN1(VAR88)
                (VAR86, VAR87, VAR66, VAR67, VAR68, VAR12);
            }
            else
            {
                VAR85 **VAR89 = VAR52 + VAR28 + VAR70 - VAR24 + VAR51;
                VAR85 **VAR90 = VAR54 + VAR29 + VAR71 - VAR25 + VAR53;
                FUN1(VAR91)
                (VAR55 + VAR18 * VAR57, VAR89, VAR57, VAR58 + (VAR18 >> 1) * VAR60, VAR90, VAR60, VAR66, VAR67, VAR68, VAR12, VAR64 + VAR18 * VAR57 * 4, VAR65 + (VAR18 >> 1) * VAR60 * 4);
            }
        }
        else
        {
            VAR85 **VAR89 = VAR52 + VAR28 + VAR70 - VAR24 + VAR51;
            VAR85 **VAR90 = VAR54 + VAR29 + VAR71 - VAR25 + VAR53;
            FUN4(VAR89 + VAR57 - 1 < VAR52 + VAR51 * 2);
            FUN4(VAR90 + VAR60 - 1 < VAR54 + VAR53 * 2);
            if (VAR57 == 1 && VAR60 == 2)
            {
                int VAR92 = VAR58[2 * VAR18 + 1];
                FUN1(VAR93)
                (*VAR89, *VAR90, *(VAR90 + 1), VAR66, VAR12, VAR92, VAR9);
            }
            else if (VAR57 == 2 && VAR60 == 2)
            {
                int VAR94 = VAR55[2 * VAR18 + 1];
                int VAR92 = VAR58[2 * VAR18 + 1];
                FUN1(VAR95)
                (*VAR89, *(VAR89 + 1), *VAR90, *(VAR90 + 1), VAR66, VAR12, VAR94, VAR92, VAR9);
            }
            else
            {
                FUN1(VAR96)
                (VAR55 + VAR18 * VAR57, VAR89, VAR57, VAR58 + VAR18 * VAR60, VAR90, VAR60, VAR66, VAR12, VAR9, VAR64 + VAR18 * VAR57 * 4, VAR65 + VAR18 * VAR60 * 4);
            }
        }
    }
    __asm FUN5(VAR97
                     :
                     :
                     : "");
    __asm FUN5(VAR98
                     :
                     :
                     : "");
    VAR30 = 0;