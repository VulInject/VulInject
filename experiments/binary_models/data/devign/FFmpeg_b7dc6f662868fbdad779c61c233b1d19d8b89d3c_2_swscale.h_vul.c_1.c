VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11)
{
    VAR1 *VAR12;
    int VAR13;
    int VAR14;
    SwsFilter VAR15 = {NULL, NULL, NULL, NULL};
    if (VAR16.VAR17)
        asm volatile(""
                     :
                     :
                     : "");
    if (VAR18 == NULL)
        FUN2();
    if (VAR4 == VAR19)
        VAR4 = VAR20;
    if (VAR4 == VAR21)
        VAR4 = VAR22;
    if (VAR7 == VAR21)
        VAR7 = VAR22;
    if (!FUN3(VAR4))
    {
        fprintf(VAR23, "", FUN4(VAR4));
        return NULL;
    }
    if (!FUN5(VAR7))
    {
        fprintf(VAR23, "", FUN4(VAR7));
        return NULL;
    }
    if (VAR2 < 4 || VAR3 < 1 || VAR5 < 8 || VAR6 < 1)
    {
        fprintf(VAR23, "", VAR2, VAR3, VAR5, VAR6);
        return NULL;
    }
    if (!VAR11)
        VAR11 = &VAR15;
    if (!VAR10)
        VAR10 = &VAR15;
    VAR12 = memalign(64, sizeof(VAR1));
    memset(VAR12, 0, sizeof(VAR1));
    VAR12->VAR2 = VAR2;
    VAR12->VAR3 = VAR3;
    VAR12->VAR5 = VAR5;
    VAR12->VAR6 = VAR6;
    VAR12->VAR24 = ((VAR2 << 16) + (VAR5 >> 1)) / VAR5;
    VAR12->VAR25 = ((VAR3 << 16) + (VAR6 >> 1)) / VAR6;
    VAR12->VAR8 = VAR8;
    VAR12->VAR7 = VAR7;
    VAR12->VAR4 = VAR4;
    VAR14 = 0;
    if (VAR11->VAR26 != NULL && VAR11->VAR26->VAR27 > 1)
        VAR14 = 1;
    if (VAR11->VAR28 != NULL && VAR11->VAR28->VAR27 > 1)
        VAR14 = 1;
    if (VAR11->VAR29 != NULL && VAR11->VAR29->VAR27 > 1)
        VAR14 = 1;
    if (VAR11->VAR30 != NULL && VAR11->VAR30->VAR27 > 1)
        VAR14 = 1;
    if (VAR10->VAR26 != NULL && VAR10->VAR26->VAR27 > 1)
        VAR14 = 1;
    if (VAR10->VAR28 != NULL && VAR10->VAR28->VAR27 > 1)
        VAR14 = 1;
    if (VAR10->VAR29 != NULL && VAR10->VAR29->VAR27 > 1)
        VAR14 = 1;
    if (VAR10->VAR30 != NULL && VAR10->VAR30->VAR27 > 1)
        VAR14 = 1;
    if (VAR2 == VAR5 && VAR3 == VAR6 && !VAR14)
    {
        if (FUN6(VAR4) && FUN7(VAR7))
        {
            if (VAR7 == VAR31)
                FUN8(VAR7 & 0xFF, VAR32);
            else
                FUN8(VAR7 & 0xFF, VAR33);
            FUN8(VAR7 & 0xFF, VAR33);
            VAR12->VAR18 = VAR34;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
        if (VAR4 == VAR7 || (FUN6(VAR4) && FUN6(VAR7)))
        {
            VAR12->VAR18 = VAR36;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
        if ((VAR4 == VAR31 && VAR7 == VAR37) || (VAR4 == VAR38 && VAR7 == VAR39))
        {
            VAR12->VAR18 = VAR40;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
        if ((VAR4 == VAR37 && VAR7 == VAR31) || (VAR4 == VAR39 && VAR7 == VAR38))
        {
            VAR12->VAR18 = VAR41;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
        if (VAR4 == VAR42 && VAR7 == VAR43)
        {
            VAR12->VAR18 = VAR44;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
        if (VAR4 == VAR37 && VAR7 == VAR45)
        {
            VAR12->VAR18 = VAR46;
            if (VAR8 & VAR35)
                FUN9("", FUN4(VAR4), FUN4(VAR7));
            return VAR12;
        }
    }
    if (VAR47.VAR48)
    {
        VAR12->VAR49 = (VAR5 >= VAR2 && (VAR5 & 31) == 0 && (VAR2 & 15) == 0) ? 1 : 0;
        if (!VAR12->VAR49 && VAR5 >= VAR2 && (VAR2 & 15) == 0 && (VAR8 & VAR50))
        {
            if (VAR8 & VAR35)
                fprintf(VAR23, "");
        }
    }
    else
        VAR12->VAR49 = 0;
    if (FUN10(VAR4))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR51);
    if (FUN11(VAR4))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR52);
    if (FUN11(VAR7))
        VAR12->VAR8 = VAR8 = VAR8 & (~VAR53);
    if (VAR8 & VAR52)
        VAR12->VAR54 = VAR2;
    else
        VAR12->VAR54 = (VAR2 + 1) >> 1;
    if (VAR8 & VAR53)
        VAR12->VAR55 = VAR5;
    else
        VAR12->VAR55 = (VAR5 + 1) >> 1;
    if (VAR8 & VAR51)
        VAR12->VAR56 = VAR3;
    else
        VAR12->VAR56 = (VAR3 + 1) >> 1;
    if (FUN10(VAR7))
        VAR12->VAR57 = (VAR6 + 1) >> 1;
    else
        VAR12->VAR57 = VAR6;
    VAR12->VAR58 = ((VAR12->VAR54 << 16) + (VAR12->VAR55 >> 1)) / VAR12->VAR55;
    VAR12->VAR59 = ((VAR12->VAR56 << 16) + (VAR12->VAR57 >> 1)) / VAR12->VAR57;
    if (VAR8 & VAR50)
    {
        if (VAR12->VAR49)
        {
            VAR12->VAR24 += 20;
            VAR12->VAR58 += 20;
        }
        else if (VAR47.VAR17)
        {
            VAR12->VAR24 = ((VAR2 - 2) << 16) / (VAR5 - 2) - 20;
            VAR12->VAR58 = ((VAR12->VAR54 - 2) << 16) / (VAR12->VAR55 - 2) - 20;
        }
    }
    {
        const int VAR60 = VAR47.VAR17 ? 4 : 1;
        FUN12(&VAR12->VAR61, &VAR12->VAR62, &VAR12->VAR63, VAR12->VAR24, VAR2, VAR5, VAR60, 1 << 14, VAR8, VAR10->VAR28, VAR11->VAR28);
        FUN12(&VAR12->VAR64, &VAR12->VAR65, &VAR12->VAR66, VAR12->VAR58, (VAR2 + 1) >> 1, VAR12->VAR55, VAR60, 1 << 14, VAR8, VAR10->VAR30, VAR11->VAR30);
        if (VAR12->VAR49 && (VAR8 & VAR50))
        {
            FUN13(VAR5, VAR12->VAR24, VAR12->VAR67);
            FUN13(VAR12->VAR55, VAR12->VAR58, VAR12->VAR68);
        }
    }
    FUN12(&VAR12->VAR69, &VAR12->VAR70, &VAR12->VAR71, VAR12->VAR25, VAR3, VAR6, 1, (1 << 12) - 4, VAR8, VAR10->VAR26, VAR11->VAR26);
    FUN12(&VAR12->VAR72, &VAR12->VAR73, &VAR12->VAR74, VAR12->VAR59, (VAR3 + 1) >> 1, VAR12->VAR57, 1, (1 << 12) - 4, VAR8, VAR10->VAR29, VAR11->VAR29);
    VAR12->VAR75 = VAR12->VAR71;
    VAR12->VAR76 = VAR12->VAR74;
    for (VAR13 = 0; VAR13 < VAR6; VAR13++)
    {
        int VAR77 = VAR13 * VAR12->VAR57 / VAR6;
        int VAR78 = FUN14(VAR12->VAR70[VAR13] + VAR12->VAR71 - 1, ((VAR12->VAR73[VAR77] + VAR12->VAR74 - 1) << 1));
        VAR78 &= ~1;
        if (VAR12->VAR70[VAR13] + VAR12->VAR75 < VAR78)
            VAR12->VAR75 = VAR78 - VAR12->VAR70[VAR13];
        if (VAR12->VAR73[VAR77] + VAR12->VAR76 < (VAR78 >> 1))
            VAR12->VAR76 = (VAR78 >> 1) - VAR12->VAR73[VAR77];
    }
    VAR12->VAR79 = (VAR80 **)memalign(4, VAR12->VAR75 * 2 * sizeof(VAR80 *));
    VAR12->VAR81 = (VAR80 **)memalign(4, VAR12->VAR76 * 2 * sizeof(VAR80 *));
    for (VAR13 = 0; VAR13 < VAR12->VAR75; VAR13++)
        VAR12->VAR79[VAR13] = VAR12->VAR79[VAR13 + VAR12->VAR75] = (VAR82 *)memalign(8, 4000);
    for (VAR13 = 0; VAR13 < VAR12->VAR76; VAR13++)
        VAR12->VAR81[VAR13] = VAR12->VAR81[VAR13 + VAR12->VAR76] = (VAR82 *)memalign(8, 8000);
    for (VAR13 = 0; VAR13 < VAR12->VAR75; VAR13++)
        memset(VAR12->VAR79[VAR13], 0, 4000);
    for (VAR13 = 0; VAR13 < VAR12->VAR76; VAR13++)
        memset(VAR12->VAR81[VAR13], 64, 8000);
    FUN15(VAR12->VAR57 <= VAR6)
    if (VAR47.VAR17)
    {
        VAR12->VAR83 = (VAR80 *)memalign(8, VAR12->VAR71 * VAR6 * 4 * sizeof(VAR80));
        VAR12->VAR84 = (VAR80 *)memalign(8, VAR12->VAR74 * VAR12->VAR57 * 4 * sizeof(VAR80));
        for (VAR13 = 0; VAR13 < VAR12->VAR71 * VAR6; VAR13++)
            VAR12->VAR83[4 * VAR13] = VAR12->VAR83[4 * VAR13 + 1] = VAR12->VAR83[4 * VAR13 + 2] = VAR12->VAR83[4 * VAR13 + 3] = VAR12->VAR69[VAR13];
        for (VAR13 = 0; VAR13 < VAR12->VAR74 * VAR12->VAR57; VAR13++)
            VAR12->VAR84[4 * VAR13] = VAR12->VAR84[4 * VAR13 + 1] = VAR12->VAR84[4 * VAR13 + 2] = VAR12->VAR84[4 * VAR13 + 3] = VAR12->VAR72[VAR13];
    }
    if (VAR8 & VAR35)
    {
        char *VAR85 = "";
        char *VAR85 = "";
        if (VAR8 & VAR50)
            fprintf(VAR23, "");
        else if (VAR8 & VAR86)
            fprintf(VAR23, "");
        else if (VAR8 & VAR87)
            fprintf(VAR23, "");
        else if (VAR8 & VAR88)
            fprintf(VAR23, "");
        else if (VAR8 & VAR89)
            fprintf(VAR23, "");
        else if (VAR8 & VAR90)
            fprintf(VAR23, "");
        else
            fprintf(VAR23, "");
        if (VAR7 == VAR42 || VAR7 == VAR43)
            fprintf(VAR23, "", FUN4(VAR4), VAR85, FUN4(VAR7));
        else
            fprintf(VAR23, "", FUN4(VAR4), FUN4(VAR7));
        if (VAR47.VAR48)
            fprintf(VAR23, "");
        else if (VAR47.VAR91)
            fprintf(VAR23, "");
        else if (VAR47.VAR17)
            fprintf(VAR23, "");
        else
            fprintf(VAR23, "");
    }
    if ((VAR8 & VAR35) && VAR92)
    {
        if (VAR47.VAR17)
        {
            if (VAR12->VAR49 && (VAR8 & VAR50))
                FUN9("");
            else
            {
                if (VAR12->VAR63 == 4)
                    FUN9("");
                else if (VAR12->VAR63 == 8)
                    FUN9("");
                else
                    FUN9("");
                if (VAR12->VAR66 == 4)
                    FUN9("");
                else if (VAR12->VAR66 == 8)
                    FUN9("");
                else
                    FUN9("");
            }
        }
        else
        {
            FUN9("");
            if (VAR8 & VAR50)
                FUN9("");
            else
                FUN9("");
        }
        if (FUN6(VAR7))
        {
            if (VAR12->VAR71 == 1)
                FUN9(""VAR93\"", VAR47.VAR17 ? "" : "");
            else
                FUN9("", VAR47.VAR17 ? "" : "");
        }
        else
        {
            if (VAR12->VAR71 == 1 && VAR12->VAR74 == 2)
                FUN9(""VAR93\""
                       "",
                       VAR47.VAR17 ? "" : "");
            else if (VAR12->VAR71 == 2 && VAR12->VAR74 == 2)
                FUN9("", VAR47.VAR17 ? "" : "");
            else
                FUN9("", VAR47.VAR17 ? "" : "");
        }
        if (VAR7 == VAR37)
            FUN9("", VAR47.VAR48 ? "" : (VAR47.VAR17 ? "" : ""));
        else if (VAR7 == VAR31)
            FUN9("", VAR47.VAR17 ? "" : "");
        else if (VAR7 == VAR43)
            FUN9("", VAR47.VAR17 ? "" : "");
        else if (VAR7 == VAR42)
            FUN9("", VAR47.VAR17 ? "" : "");
        FUN9("", VAR2, VAR3, VAR5, VAR6);
    }
    if ((VAR8 & VAR35) && VAR92 > 1)
    {
        FUN9("", VAR12->VAR2, VAR12->VAR3, VAR12->VAR5, VAR12->VAR6, VAR12->VAR24, VAR12->VAR25);
        FUN9("", VAR12->VAR54, VAR12->VAR56, VAR12->VAR55, VAR12->VAR57, VAR12->VAR58, VAR12->VAR59);
    }
    VAR12->VAR18 = VAR18;
    return VAR12;
}