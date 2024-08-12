VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11)
{
    VAR1 *VAR12;
    int VAR13;
    SwsFilter VAR14 = {NULL, NULL, NULL, NULL};
    if (VAR15.VAR16)
        asm volatile(""
                     :
                     :
                     : "");
    if (VAR17 == NULL)
        FUN2();
    if (VAR4 == VAR18)
        VAR4 = VAR19;
    if (VAR4 == VAR20)
        VAR4 = VAR21;
    if (!FUN3(VAR4))
        return NULL;
    if (!FUN4(VAR7))
        return NULL;
    if (VAR2 < 4 || VAR3 < 1 || VAR5 < 8 || VAR6 < 1)
        return NULL;
    if (!VAR11)
        VAR11 = &VAR14;
    if (!VAR10)
        VAR10 = &VAR14;
    VAR12 = memalign(64, sizeof(VAR1));
    memset(VAR12, 0, sizeof(VAR1));
    VAR12->VAR2 = VAR2;
    VAR12->VAR3 = VAR3;
    VAR12->VAR5 = VAR5;
    VAR12->VAR6 = VAR6;
    VAR12->VAR22 = ((VAR2 << 16) + (VAR5 >> 1)) / VAR5;
    VAR12->VAR23 = ((VAR3 << 16) + (VAR6 >> 1)) / VAR6;
    VAR12->VAR8 = VAR8;
    VAR12->VAR7 = VAR7;
    VAR12->VAR4 = VAR4;
    if (VAR24.VAR25)
    {
        VAR12->VAR26 = (VAR5 >= VAR2 && (VAR5 & 31) == 0 && (VAR2 & 15) == 0) ? 1 : 0;
        if (!VAR12->VAR26 && VAR5 >= VAR2 && (VAR2 & 15) == 0 && (VAR8 & VAR27))
        {
            if (VAR8 & VAR28)
                fprintf(VAR29, "");
        }
    }
    else
        VAR12->VAR26 = 0;
    if (FUN5(VAR4))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR30);
    if (FUN6(VAR4))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR31);
    if (FUN6(VAR7))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR32);
    if (VAR8 & VAR31)
        VAR12->VAR33 = VAR2;
    else
        VAR12->VAR33 = (VAR2 + 1) >> 1;
    if (VAR8 & VAR32)
        VAR12->VAR34 = VAR5;
    else
        VAR12->VAR34 = (VAR5 + 1) >> 1;
    if (VAR8 & VAR30)
        VAR12->VAR35 = VAR3;
    else
        VAR12->VAR35 = (VAR3 + 1) >> 1;
    if (FUN5(VAR7))
        VAR12->VAR36 = (VAR6 + 1) >> 1;
    else
        VAR12->VAR36 = VAR6;
    VAR12->VAR37 = ((VAR12->VAR33 << 16) + (VAR12->VAR34 >> 1)) / VAR12->VAR34;
    VAR12->VAR38 = ((VAR12->VAR35 << 16) + (VAR12->VAR36 >> 1)) / VAR12->VAR36;
    if (VAR8 & VAR27)
    {
        if (VAR12->VAR26)
        {
            VAR12->VAR22 += 20;
            VAR12->VAR37 += 20;
        }
        else if (VAR24.VAR16)
        {
            VAR12->VAR22 = ((VAR2 - 2) << 16) / (VAR5 - 2) - 20;
            VAR12->VAR37 = ((VAR12->VAR33 - 2) << 16) / (VAR12->VAR34 - 2) - 20;
        }
    }
    {
        const int VAR39 = VAR24.VAR16 ? 4 : 1;
        FUN7(&VAR12->VAR40, &VAR12->VAR41, &VAR12->VAR42, VAR12->VAR22, VAR2, VAR5, VAR39, 1 << 14, VAR8, VAR10->VAR43, VAR11->VAR43);
        FUN7(&VAR12->VAR44, &VAR12->VAR45, &VAR12->VAR46, VAR12->VAR37, (VAR2 + 1) >> 1, VAR12->VAR34, VAR39, 1 << 14, VAR8, VAR10->VAR47, VAR11->VAR47);
        if (VAR12->VAR26 && (VAR8 & VAR27))
        {
            FUN8(VAR5, VAR12->VAR22, VAR12->VAR48);
            FUN8(VAR12->VAR34, VAR12->VAR37, VAR12->VAR49);
        }
    }
    FUN7(&VAR12->VAR50, &VAR12->VAR51, &VAR12->VAR52, VAR12->VAR23, VAR3, VAR6, 1, (1 << 12) - 4, VAR8, VAR10->VAR53, VAR11->VAR53);
    FUN7(&VAR12->VAR54, &VAR12->VAR55, &VAR12->VAR56, VAR12->VAR38, (VAR3 + 1) >> 1, VAR12->VAR36, 1, (1 << 12) - 4, VAR8, VAR10->VAR57, VAR11->VAR57);
    VAR12->VAR58 = VAR12->VAR52;
    VAR12->VAR59 = VAR12->VAR56;
    for (VAR13 = 0; VAR13 < VAR6; VAR13++)
    {
        int VAR60 = VAR13 * VAR12->VAR36 / VAR6;
        int VAR61 = FUN9(VAR12->VAR51[VAR13] + VAR12->VAR52 - 1, ((VAR12->VAR55[VAR60] + VAR12->VAR56 - 1) << 1));
        VAR61 &= ~1;
        if (VAR12->VAR51[VAR13] + VAR12->VAR58 < VAR61)
            VAR12->VAR58 = VAR61 - VAR12->VAR51[VAR13];
        if (VAR12->VAR55[VAR60] + VAR12->VAR59 < (VAR61 >> 1))
            VAR12->VAR59 = (VAR61 >> 1) - VAR12->VAR55[VAR60];
    }
    VAR12->VAR62 = (VAR63 **)memalign(4, VAR12->VAR58 * 2 * sizeof(VAR63 *));
    VAR12->VAR64 = (VAR63 **)memalign(4, VAR12->VAR59 * 2 * sizeof(VAR63 *));
    for (VAR13 = 0; VAR13 < VAR12->VAR58; VAR13++)
        VAR12->VAR62[VAR13] = VAR12->VAR62[VAR13 + VAR12->VAR58] = (VAR65 *)memalign(8, 4000);
    for (VAR13 = 0; VAR13 < VAR12->VAR59; VAR13++)
        VAR12->VAR64[VAR13] = VAR12->VAR64[VAR13 + VAR12->VAR59] = (VAR65 *)memalign(8, 8000);
    for (VAR13 = 0; VAR13 < VAR12->VAR58; VAR13++)
        memset(VAR12->VAR62[VAR13], 0, 4000);
    for (VAR13 = 0; VAR13 < VAR12->VAR59; VAR13++)
        memset(VAR12->VAR64[VAR13], 64, 8000);
    FUN10(VAR12->VAR36 <= VAR6)
    if (VAR24.VAR16)
    {
        VAR12->VAR66 = (VAR63 *)memalign(8, VAR12->VAR52 * VAR6 * 4 * sizeof(VAR63));
        VAR12->VAR67 = (VAR63 *)memalign(8, VAR12->VAR56 * VAR12->VAR36 * 4 * sizeof(VAR63));
        for (VAR13 = 0; VAR13 < VAR12->VAR52 * VAR6; VAR13++)
            VAR12->VAR66[4 * VAR13] = VAR12->VAR66[4 * VAR13 + 1] = VAR12->VAR66[4 * VAR13 + 2] = VAR12->VAR66[4 * VAR13 + 3] = VAR12->VAR50[VAR13];
        for (VAR13 = 0; VAR13 < VAR12->VAR56 * VAR12->VAR36; VAR13++)
            VAR12->VAR67[4 * VAR13] = VAR12->VAR67[4 * VAR13 + 1] = VAR12->VAR67[4 * VAR13 + 2] = VAR12->VAR67[4 * VAR13 + 3] = VAR12->VAR54[VAR13];
    }
    if (VAR8 & VAR28)
    {
        char *VAR68 = "";
        char *VAR68 = "";
        if (VAR8 & VAR27)
            fprintf(VAR29, "");
        else if (VAR8 & VAR69)
            fprintf(VAR29, "");
        else if (VAR8 & VAR70)
            fprintf(VAR29, "");
        else if (VAR8 & VAR71)
            fprintf(VAR29, "");
        else if (VAR8 & VAR72)
            fprintf(VAR29, "");
        else if (VAR8 & VAR73)
            fprintf(VAR29, "");
        else
            fprintf(VAR29, "");
        if (VAR7 == VAR74 || VAR7 == VAR75)
            fprintf(VAR29, "", FUN11(VAR4), VAR68, FUN11(VAR7));
        else
            fprintf(VAR29, "", FUN11(VAR4), FUN11(VAR7));
        if (VAR24.VAR25)
            fprintf(VAR29, "");
        else if (VAR24.VAR76)
            fprintf(VAR29, "");
        else if (VAR24.VAR16)
            fprintf(VAR29, "");
        else
            fprintf(VAR29, "");
    }
    if ((VAR8 & VAR28) && VAR77)
    {
        if (VAR24.VAR16)
        {
            if (VAR12->VAR26 && (VAR8 & VAR27))
                FUN12("");
            else
            {
                if (VAR12->VAR42 == 4)
                    FUN12("");
                else if (VAR12->VAR42 == 8)
                    FUN12("");
                else
                    FUN12("");
                if (VAR12->VAR46 == 4)
                    FUN12("");
                else if (VAR12->VAR46 == 8)
                    FUN12("");
                else
                    FUN12("");
            }
        }
        else
        {
            FUN12("");
            if (VAR8 & VAR27)
                FUN12("");
            else
                FUN12("");
        }
        if (FUN13(VAR7))
        {
            if (VAR12->VAR52 == 1)
                FUN12(""VAR78\"", VAR24.VAR16 ? "" : "");
            else
                FUN12("", VAR24.VAR16 ? "" : "");
        }
        else
        {
            if (VAR12->VAR52 == 1 && VAR12->VAR56 == 2)
                FUN12(""VAR78\""
                       "",
                       VAR24.VAR16 ? "" : "");
            else if (VAR12->VAR52 == 2 && VAR12->VAR56 == 2)
                FUN12("", VAR24.VAR16 ? "" : "");
            else
                FUN12("", VAR24.VAR16 ? "" : "");
        }
        if (VAR7 == VAR79)
            FUN12("", VAR24.VAR25 ? "" : (VAR24.VAR16 ? "" : ""));
        else if (VAR7 == VAR80)
            FUN12("", VAR24.VAR16 ? "" : "");
        else if (VAR7 == VAR75)
            FUN12("", VAR24.VAR16 ? "" : "");
        else if (VAR7 == VAR74)
            FUN12("", VAR24.VAR16 ? "" : "");
        FUN12("", VAR2, VAR3, VAR5, VAR6);
    }
    if ((VAR8 & VAR28) && VAR77 > 1)
    {
        FUN12("", VAR12->VAR2, VAR12->VAR3, VAR12->VAR5, VAR12->VAR6, VAR12->VAR22, VAR12->VAR23);
        FUN12("", VAR12->VAR33, VAR12->VAR35, VAR12->VAR34, VAR12->VAR36, VAR12->VAR37, VAR12->VAR38);
    }
    return VAR12;
}