static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 **VAR9, *VAR10;
    target_ulong VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15 = -1;
    VAR11 = VAR4->VAR16;
    VAR17 = VAR18;
    VAR13 = VAR18 + VAR19;
    VAR20 = VAR21;
    VAR22 = 0;
    VAR6.VAR23 = VAR11;
    VAR6.VAR4 = VAR4;
    VAR6.VAR24 = VAR25;
    VAR6.VAR26 = VAR2->VAR26;
    VAR6.VAR27 = VAR28;
    VAR6.VAR27 |= VAR29 << 1;
    VAR6.VAR30 = 1 - VAR31;
    VAR6.VAR27 = ((1 - VAR31) << 1) | VAR28;
    VAR6.VAR27 |= VAR29 << 2;
    VAR6.VAR32 = VAR29;
    VAR6.VAR33 = VAR34;
    VAR6.VAR35 = VAR36;
    VAR6.VAR37 = VAR2->VAR37;
    VAR38 = 1;
    while (VAR6.VAR24 == VAR25 && VAR17 < VAR13)
    {
        if (FUN2(VAR2->VAR39 > 0))
        {
            for (VAR14 = 0; VAR14 < VAR2->VAR39; VAR14++)
            {
                if (VAR2->VAR40[VAR14] == VAR6.VAR23)
                {
                    FUN3(&VAR6, VAR6.VAR23);
                    FUN4();
                    break;
                }
            }
        }
        if (FUN2(VAR5))
        {
            VAR14 = VAR17 - VAR18;
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                    VAR41[VAR15++] = 0;
                VAR42[VAR15] = VAR6.VAR23;
                VAR41[VAR15] = 1;
            }
        }
        if (VAR43 & VAR44)
        {
            fprintf(VAR45, "");
            fprintf(VAR45, "" VAR46 "", VAR6.VAR23, 1 - VAR31, VAR47);
        }
        VAR6.VAR48 = FUN5(VAR6.VAR23);
        if (VAR28)
        {
            VAR6.VAR48 = ((VAR6.VAR48 & 0xFF000000) >> 24) | ((VAR6.VAR48 & 0x00FF0000) >> 8) | ((VAR6.VAR48 & 0x0000FF00) << 8) | ((VAR6.VAR48 & 0x000000FF) << 24);
        }
        if (VAR43 & VAR44)
        {
            fprintf(VAR45, "", VAR6.VAR48, FUN6(VAR6.VAR48), FUN7(VAR6.VAR48), FUN8(VAR6.VAR48), VAR28 ? "" : "");
        }
        VAR6.VAR23 += 4;
        VAR9 = VAR2->VAR49;
        VAR10 = VAR9[FUN6(VAR6.VAR48)];
        if (FUN9(VAR10))
        {
            VAR9 = FUN10(VAR10);
            VAR10 = VAR9[FUN7(VAR6.VAR48)];
            if (FUN9(VAR10))
            {
                VAR9 = FUN10(VAR10);
                VAR10 = VAR9[FUN8(VAR6.VAR48)];
            }
        }
        if (FUN2(VAR10->VAR10 == &VAR50))
        {
            if (VAR43 != 0)
            {
                fprintf(VAR45, ""
                                 "" VAR46 "",
                        FUN6(VAR6.VAR48), FUN7(VAR6.VAR48), FUN8(VAR6.VAR48), VAR6.VAR48, VAR6.VAR23 - 4, VAR47);
            }
            else
            {
                FUN11(""
                       "" VAR46 "",
                       FUN6(VAR6.VAR48), FUN7(VAR6.VAR48), FUN8(VAR6.VAR48), VAR6.VAR48, VAR6.VAR23 - 4, VAR47);
            }
        }
        else
        {
            if (FUN2((VAR6.VAR48 & VAR10->VAR51) != 0))
            {
                if (VAR43 != 0)
                {
                    fprintf(VAR45, ""
                                     "" VAR46 "",
                            VAR6.VAR48 & VAR10->VAR51, FUN6(VAR6.VAR48), FUN7(VAR6.VAR48), FUN8(VAR6.VAR48), VAR6.VAR48, VAR6.VAR23 - 4);
                }
                else
                {
                    FUN11(""
                           "" VAR46 "",
                           VAR6.VAR48 & VAR10->VAR51, FUN6(VAR6.VAR48), FUN7(VAR6.VAR48), FUN8(VAR6.VAR48), VAR6.VAR48, VAR6.VAR23 - 4);
                }
                FUN12(VAR7);
                break;
            }
        }
        (*(VAR10->VAR10))(&VAR6);
        VAR10->VAR52++;
        if (FUN2((VAR53 && VAR6.VAR24 == VAR54) || (VAR38 && (VAR6.VAR23 < 0x100 || VAR6.VAR23 > 0xF00 || (VAR6.VAR23 & 0xFC) != 0x04) && VAR6.VAR24 != VAR55 && VAR6.VAR24 != VAR56 && VAR6.VAR24 != VAR57)))
        {
            FUN13(VAR7, VAR58, 0);
        }
        if (FUN2(((VAR6.VAR23 & (VAR59 - 1)) == 0) || (VAR2->VAR37)))
        {
            break;
        }
        break;
    }
    if (VAR6.VAR24 == VAR25)
    {
        FUN14(&VAR6, 0, VAR6.VAR23);
    }
    else if (VAR6.VAR24 != VAR54)
    {
        FUN15();
        FUN16();
    }
    *VAR17 = VAR60;
    if (FUN2(VAR5))
    {
        VAR14 = VAR17 - VAR18;
        VAR15++;
        while (VAR15 <= VAR14)
            VAR41[VAR15++] = 0;
    }
    else
    {
        VAR4->VAR61 = VAR6.VAR23 - VAR11;
    }
    if (VAR43 & VAR62)
    {
        fprintf(VAR45, "", VAR6.VAR24);
        FUN17(VAR2, VAR45, fprintf, 0);
    }
    if (VAR43 & VAR44)
    {
        int VAR63;
        VAR63 = VAR2->VAR64;
        VAR63 |= VAR28 << 16;
        fprintf(VAR45, "", FUN18(VAR11));
        FUN19(VAR45, VAR11, VAR6.VAR23 - VAR11, VAR63);
        fprintf(VAR45, "");
    }
    if (VAR43 & VAR65)
    {
        fprintf(VAR45, "");
        FUN20(VAR18, VAR21);
        fprintf(VAR45, "");
    }
    return 0;
}