static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10, *VAR11 = &VAR10;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17;
    target_ulong VAR18;
    uint32_t VAR19;
    int VAR20;
    int VAR21;
    VAR22 = 0;
    VAR18 = VAR4->VAR23;
    VAR11->VAR4 = VAR4;
    VAR15 = VAR24.VAR25 + VAR26;
    VAR11->VAR27 = VAR28;
    VAR11->VAR23 = VAR18;
    VAR11->VAR29 = VAR7->VAR29;
    VAR11->VAR30 = 0;
    VAR31 = FUN3();
    VAR32 = FUN3();
    VAR33 = FUN4();
    VAR34 = FUN4();
    VAR19 = (VAR18 & VAR35) + VAR36;
    VAR17 = -1;
    VAR20 = 0;
    VAR21 = VAR4->VAR37 & VAR38;
    if (VAR21 == 0)
    {
        VAR21 = VAR38;
    }
    if ((VAR9->VAR39 & VAR40) == VAR41)
    {
        VAR11->VAR42 = 1;
    }
    else
    {
        VAR11->VAR42 = 0;
    }
    FUN5(VAR4);
    do
    {
        if (FUN6(!FUN7(&VAR7->VAR43)))
        {
            FUN8(VAR13, &VAR7->VAR43, VAR44)
            {
                if (VAR13->VAR23 == VAR11->VAR23)
                {
                    FUN9(VAR11->VAR23);
                    FUN10(VAR45);
                    VAR11->VAR27 = VAR46;
                    VAR11->VAR23 += 2;
                    goto VAR47;
                }
            }
        }
        if (VAR5)
        {
            VAR16 = VAR24.VAR48 - VAR24.VAR25;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                {
                    VAR24.VAR49[VAR17++] = 0;
                }
            }
            VAR24.VAR50[VAR17] = VAR11->VAR23;
            VAR24.VAR49[VAR17] = 1;
            VAR24.VAR51[VAR17] = VAR20;
        }
        if (VAR20 + 1 == VAR21 && (VAR4->VAR37 & VAR52))
        {
            FUN11();
        }
        FUN12(VAR9, VAR11);
        if (VAR22)
        {
            fprintf(VAR53, "", VAR11->VAR23);
            VAR22 = 0;
        }
        if (VAR11->VAR30 && !VAR11->VAR27)
        {
            FUN13(VAR11->VAR54);
            VAR11->VAR30 = 0;
        }
        VAR20++;
    } while (!VAR11->VAR27 && VAR24.VAR48 < VAR15 && !VAR7->VAR29 && !VAR55 && VAR11->VAR23 < VAR19 && VAR20 < VAR21);
    if (VAR4->VAR37 & VAR52)
    {
        if (VAR11->VAR30)
        {
            FUN14(VAR7, "");
        }
        FUN15();
    }
    if (FUN6(VAR7->VAR29))
    {
        if (VAR11->VAR30)
        {
            if (VAR11->VAR27 == VAR56)
            {
                FUN10(VAR57);
            }
            else
            {
                FUN10(VAR45);
            }
            FUN13(VAR11->VAR54);
        }
        if (VAR11->VAR30 || !VAR11->VAR27)
        {
            FUN9(VAR11->VAR23);
            VAR11->VAR30 = 0;
        }
        if (VAR11->VAR27 == VAR56 && !VAR11->VAR30)
        {
            FUN10(VAR57);
        }
        else
        {
            FUN10(VAR45);
        }
    }
    else
    {
        switch (VAR11->VAR27)
        {
        case VAR28:
            FUN16(VAR11, 1, VAR11->VAR23);
            break;
        default:
        case VAR46:
        case VAR58:
            FUN17(0);
            break;
        case VAR59:
            break;
        case VAR56:
            FUN10(VAR57);
            break;
        }
        if (VAR11->VAR30)
        {
            FUN13(VAR11->VAR54);
            FUN16(VAR11, 1, VAR11->VAR23);
            VAR11->VAR30 = 0;
        }
    }
VAR47:
    FUN18(VAR4, VAR20);
    *VAR24.VAR48 = VAR60;
    if (FUN19(VAR61))
    {
        FUN20("");
        FUN20("", FUN21(VAR18));
        FUN22(VAR9, VAR18, VAR11->VAR23 - VAR18, 0);
        FUN20("");
    }
    if (VAR5)
    {
        VAR16 = VAR24.VAR48 - VAR24.VAR25;
        VAR17++;
        while (VAR17 <= VAR16)
        {
            VAR24.VAR49[VAR17++] = 0;
        }
    }
    else
    {
        VAR4->VAR62 = VAR11->VAR23 - VAR18;
        VAR4->VAR63 = VAR20;
    }
}