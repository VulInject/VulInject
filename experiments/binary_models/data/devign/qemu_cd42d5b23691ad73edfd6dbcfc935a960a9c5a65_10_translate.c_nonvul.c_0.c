static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    target_ulong VAR10, VAR11;
    VAR12 *VAR13;
    DisasContext VAR14, *VAR15 = &VAR14;
    VAR16 *VAR17;
    int VAR18, VAR19 = -1;
    int VAR20;
    int VAR21;
    unsigned int VAR22;
    memset(VAR15, 0, sizeof(VAR23));
    VAR15->VAR4 = VAR4;
    VAR10 = VAR4->VAR24;
    VAR15->VAR24 = VAR10;
    VAR11 = VAR15->VAR24;
    VAR15->VAR25 = (VAR26)VAR4->VAR27;
    VAR15->VAR28 = VAR29;
    VAR15->VAR30 = FUN3(VAR9);
    VAR15->VAR31 = VAR9->VAR31;
    VAR15->VAR32 = FUN4(VAR4->VAR33);
    VAR15->VAR34 = FUN5(VAR4->VAR33);
    VAR15->VAR35 = (VAR7->VAR36 || VAR35);
    VAR13 = VAR37.VAR38 + VAR39;
    VAR20 = 0;
    VAR21 = VAR4->VAR40 & VAR41;
    if (VAR21 == 0)
        VAR21 = VAR41;
    FUN6(VAR4);
    do
    {
        if (FUN7(!FUN8(&VAR7->VAR42)))
        {
            FUN9(VAR17, &VAR7->VAR42, VAR43)
            {
                if (VAR17->VAR24 == VAR15->VAR24)
                {
                    if (VAR15->VAR24 != VAR10)
                        FUN10(VAR15);
                    FUN11(VAR44);
                    FUN12(0);
                    VAR15->VAR45 = 1;
                    goto VAR46;
                }
            }
        }
        if (VAR5)
        {
            FUN13("");
            VAR18 = VAR37.VAR47 - VAR37.VAR38;
            if (VAR19 < VAR18)
            {
                VAR19++;
                while (VAR19 < VAR18)
                    VAR37.VAR48[VAR19++] = 0;
                VAR37.VAR49[VAR19] = VAR15->VAR24;
                VAR50[VAR19] = VAR15->VAR25;
                VAR37.VAR48[VAR19] = 1;
                VAR37.VAR51[VAR19] = VAR20;
            }
        }
        if (VAR20 + 1 == VAR21 && (VAR4->VAR40 & VAR52))
            FUN14();
        VAR11 = VAR15->VAR24;
        VAR22 = FUN15(VAR9, VAR15->VAR24);
        FUN16(VAR15, VAR22);
        VAR20++;
        if (VAR15->VAR45)
            break;
        if (VAR15->VAR24 != (VAR11 + 4))
            break;
        if ((VAR15->VAR24 & (VAR53 - 1)) == 0)
            break;
        if (VAR15->VAR35)
        {
            break;
        }
    } while ((VAR37.VAR47 < VAR13) && (VAR15->VAR24 - VAR10) < (VAR53 - 32) && VAR20 < VAR21);
VAR46:
    if (VAR4->VAR40 & VAR52)
    {
        FUN17();
    }
    if (!VAR15->VAR45)
    {
        if (VAR15->VAR24 != VAR54 && (VAR15->VAR25 != VAR54 && VAR15->VAR25 != VAR55))
        {
            FUN18(VAR15, 0, VAR15->VAR24, VAR15->VAR25);
        }
        else
        {
            if (VAR15->VAR24 != VAR54)
            {
                FUN19(VAR56, VAR15->VAR24);
            }
            FUN20(VAR15);
            FUN12(0);
        }
    }
    FUN21(VAR4, VAR20);
    *VAR37.VAR47 = VAR57;
    if (VAR5)
    {
        VAR18 = VAR37.VAR47 - VAR37.VAR38;
        VAR19++;
        while (VAR19 <= VAR18)
            VAR37.VAR48[VAR19++] = 0;
        FUN22();
        VAR58[0] = VAR15->VAR59[0];
        VAR58[1] = VAR15->VAR59[1];
    }
    else
    {
        VAR4->VAR60 = VAR11 + 4 - VAR10;
        VAR4->VAR61 = VAR20;
    }
    if (FUN23(VAR62))
    {
        FUN13("");
        FUN13("", FUN24(VAR10));
        FUN25(VAR9, VAR10, VAR11 + 4 - VAR10, 0);
        FUN13("");
    }
}