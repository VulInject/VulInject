int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
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
    VAR6.VAR29 = 1 - VAR30;
    VAR6.VAR27 = ((1 - VAR30) << 1) | VAR28;
    VAR6.VAR31 = VAR32;
    VAR6.VAR33 = VAR2->VAR33;
    VAR34 = 1;
    while (VAR6.VAR24 == VAR25 && VAR17 < VAR13)
    {
        if (FUN2(VAR2->VAR35 > 0))
        {
            for (VAR14 = 0; VAR14 < VAR2->VAR35; VAR14++)
            {
                if (VAR2->VAR36[VAR14] == VAR6.VAR23)
                {
                    FUN3(VAR6.VAR23);
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
                    VAR37[VAR15++] = 0;
                VAR38[VAR15] = VAR6.VAR23;
                VAR37[VAR15] = 1;
            }
        }
        if (VAR39 & VAR40)
        {
            fprintf(VAR41, "");
            fprintf(VAR41, "", VAR6.VAR23, 1 - VAR30, VAR42);
        }
        VAR6.VAR43 = FUN5(VAR6.VAR23);
        if (VAR28)
        {
            VAR6.VAR43 = ((VAR6.VAR43 & 0xFF000000) >> 24) | ((VAR6.VAR43 & 0x00FF0000) >> 8) | ((VAR6.VAR43 & 0x0000FF00) << 8) | ((VAR6.VAR43 & 0x000000FF) << 24);
        }
        if (VAR39 & VAR40)
        {
            fprintf(VAR41, "", VAR6.VAR43, FUN6(VAR6.VAR43), FUN7(VAR6.VAR43), FUN8(VAR6.VAR43), VAR28 ? "" : "");
        }
        VAR6.VAR23 += 4;
        VAR9 = VAR2->VAR44;
        VAR10 = VAR9[FUN6(VAR6.VAR43)];
        if (FUN9(VAR10))
        {
            VAR9 = FUN10(VAR10);
            VAR10 = VAR9[FUN7(VAR6.VAR43)];
            if (FUN9(VAR10))
            {
                VAR9 = FUN10(VAR10);
                VAR10 = VAR9[FUN8(VAR6.VAR43)];
            }
        }
        if (FUN2(VAR10->VAR10 == &VAR45))
        {
            if (VAR39 > 0)
            {
                fprintf(VAR41, ""
                                 "",
                        FUN6(VAR6.VAR43), FUN7(VAR6.VAR43), FUN8(VAR6.VAR43), VAR6.VAR43, VAR6.VAR23 - 4, VAR42);
            }
            else
            {
                FUN11(""
                       "",
                       FUN6(VAR6.VAR43), FUN7(VAR6.VAR43), FUN8(VAR6.VAR43), VAR6.VAR43, VAR6.VAR23 - 4, VAR42);
            }
        }
        else
        {
            if (FUN2((VAR6.VAR43 & VAR10->VAR46) != 0))
            {
                if (VAR39 > 0)
                {
                    fprintf(VAR41, ""
                                     "",
                            VAR6.VAR43 & VAR10->VAR46, FUN6(VAR6.VAR43), FUN7(VAR6.VAR43), FUN8(VAR6.VAR43), VAR6.VAR43, VAR6.VAR23 - 4);
                }
                else
                {
                    FUN11(""
                           "",
                           VAR6.VAR43 & VAR10->VAR46, FUN6(VAR6.VAR43), FUN7(VAR6.VAR43), FUN8(VAR6.VAR43), VAR6.VAR43, VAR6.VAR23 - 4);
                }
                FUN12(VAR7);
                break;
            }
        }
        (*(VAR10->VAR10))(&VAR6);
        VAR10->VAR47++;
        if (FUN2((VAR48 && VAR6.VAR24 == VAR49) || (VAR34 && (VAR6.VAR23 < 0x100 || VAR6.VAR23 > 0xF00 || (VAR6.VAR23 & 0xFC) != 0x04) && VAR6.VAR24 != VAR50 && VAR6.VAR24 != VAR51 && VAR6.VAR24 != VAR52)))
        {
            FUN13(VAR7, VAR53, 0);
        }
        if (FUN2(((VAR6.VAR23 & (VAR54 - 1)) == 0) || (VAR2->VAR33)))
        {
            break;
        }
        break;
    }
    if (VAR6.VAR24 == VAR25)
    {
        FUN14(&VAR6, 0, VAR6.VAR23);
    }
    else if (VAR6.VAR24 != VAR49)
    {
        FUN15();
        FUN16();
    }
    *VAR17 = VAR55;
    if (FUN2(VAR5))
    {
        VAR14 = VAR17 - VAR18;
        VAR15++;
        while (VAR15 <= VAR14)
            VAR37[VAR15++] = 0;
        VAR4->VAR56 = 0;
    }
    else
    {
        VAR4->VAR56 = VAR6.VAR23 - VAR11;
    }
    if (VAR39 & VAR57)
    {
        fprintf(VAR41, "", VAR6.VAR24);
        FUN17(VAR2, VAR41, fprintf, 0);
    }
    if (VAR39 & VAR40)
    {
        int VAR58;
        VAR58 = VAR28;
        fprintf(VAR41, "", FUN18(VAR11));
        FUN19(VAR41, VAR11, VAR6.VAR23 - VAR11, VAR58);
        fprintf(VAR41, "");
    }
    if (VAR39 & VAR59)
    {
        fprintf(VAR41, "");
        FUN20(VAR18, VAR21);
        fprintf(VAR41, "");
    }
    return 0;
}