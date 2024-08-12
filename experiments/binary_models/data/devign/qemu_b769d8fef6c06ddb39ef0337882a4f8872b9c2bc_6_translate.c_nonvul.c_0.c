int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 **VAR9, *VAR10;
    uint32_t VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15 = -1;
    VAR11 = VAR4->VAR16;
    VAR17 = VAR18;
    VAR13 = VAR18 + VAR19;
    VAR20 = VAR21;
    VAR6.VAR22 = VAR11;
    VAR6.VAR4 = VAR4;
    VAR6.VAR23 = VAR24;
    VAR6.VAR25 = 0;
    VAR6.VAR26 = 1 - VAR27;
    VAR6.VAR25 = (1 - VAR27);
    VAR28 = 1;
    while (VAR6.VAR23 == VAR24 && VAR17 < VAR13)
    {
        if (VAR5)
        {
            VAR14 = VAR17 - VAR18;
            if (VAR15 < VAR14)
            {
                VAR15++;
                while (VAR15 < VAR14)
                    VAR29[VAR15++] = 0;
                VAR30[VAR15] = VAR6.VAR22;
                VAR29[VAR15] = 1;
            }
        }
        if (VAR31 & VAR32)
        {
            fprintf(VAR33, "");
            fprintf(VAR33, "", VAR6.VAR22, 1 - VAR27, VAR34);
        }
        VAR6.VAR35 = FUN2((void *)VAR6.VAR22);
        if (VAR31 & VAR32)
        {
            fprintf(VAR33, "", VAR6.VAR35, FUN3(VAR6.VAR35), FUN4(VAR6.VAR35), FUN5(VAR6.VAR35));
        }
        VAR6.VAR22 += 4;
        VAR9 = VAR36;
        VAR10 = VAR9[FUN3(VAR6.VAR35)];
        if (FUN6(VAR10))
        {
            VAR9 = FUN7(VAR10);
            VAR10 = VAR9[FUN4(VAR6.VAR35)];
            if (FUN6(VAR10))
            {
                VAR9 = FUN7(VAR10);
                VAR10 = VAR9[FUN5(VAR6.VAR35)];
            }
        }
        if (VAR10->VAR10 == &VAR37)
        {
            if (VAR31 > 0)
            {
                fprintf(VAR33, ""
                                 "",
                        FUN3(VAR6.VAR35), FUN4(VAR6.VAR35), FUN5(VAR6.VAR35), VAR6.VAR35, VAR6.VAR22 - 4, VAR34);
            }
            else
            {
                FUN8(""
                       "",
                       FUN3(VAR6.VAR35), FUN4(VAR6.VAR35), FUN5(VAR6.VAR35), VAR6.VAR35, VAR6.VAR22 - 4, VAR34);
            }
        }
        else
        {
            if ((VAR6.VAR35 & VAR10->VAR38) != 0)
            {
                if (VAR31 > 0)
                {
                    fprintf(VAR33, ""
                                     "",
                            VAR6.VAR35 & VAR10->VAR38, FUN3(VAR6.VAR35), FUN4(VAR6.VAR35), FUN5(VAR6.VAR35), VAR6.VAR35, VAR6.VAR22 - 4);
                }
                else
                {
                    FUN8(""
                           "",
                           VAR6.VAR35 & VAR10->VAR38, FUN3(VAR6.VAR35), FUN4(VAR6.VAR35), FUN5(VAR6.VAR35), VAR6.VAR35, VAR6.VAR22 - 4);
                }
                FUN9(VAR7);
                break;
            }
        }
        (*(VAR10->VAR10))(&VAR6);
        if ((VAR39 && VAR6.VAR23 == VAR40) || (VAR28 && (VAR6.VAR22 < 0x100 || VAR6.VAR22 > 0xF00 || (VAR6.VAR22 & 0xFC) != 0x04) && VAR6.VAR23 != VAR41 && VAR6.VAR23 != VAR42 && VAR6.VAR23 != VAR43))
        {
            FUN10(VAR7, VAR44, 0);
        }
        if ((VAR6.VAR22 & (VAR45 - 1)) == 0)
        {
            FUN10(VAR7, VAR40, 0);
        }
    }
    if (VAR6.VAR23 == VAR24)
    {
        FUN11((unsigned long)VAR6.VAR4, VAR6.VAR22);
    }
    else if (VAR6.VAR23 != VAR40)
    {
        FUN12(0);
    }
    FUN12(0);
    FUN13();
    *VAR17 = VAR46;
    if (VAR5)
    {
        VAR14 = VAR17 - VAR18;
        VAR15++;
        while (VAR15 <= VAR14)
            VAR29[VAR15++] = 0;
        VAR4->VAR47 = 0;
        if (VAR31 > 0)
        {
            FUN14(VAR33);
        }
    }
    else
    {
        VAR4->VAR47 = VAR6.VAR22 - VAR11;
    }
    if (VAR31 & VAR48)
    {
        fprintf(VAR33, "", VAR6.VAR23);
        FUN15(VAR2, VAR33, 0);
    }
    if (VAR31 & VAR32)
    {
        fprintf(VAR33, "", FUN16((void *)VAR11));
        FUN17(VAR33, (void *)VAR11, VAR6.VAR22 - VAR11, 0, 0);
        fprintf(VAR33, "");
    }
    if (VAR31 & VAR49)
    {
        fprintf(VAR33, "");
        FUN18(VAR18, VAR21);
        fprintf(VAR33, "");
    }
    return 0;
}