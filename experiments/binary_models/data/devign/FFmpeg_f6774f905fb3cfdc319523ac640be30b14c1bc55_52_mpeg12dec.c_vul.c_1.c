static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR2;
    if (VAR2->VAR10 || VAR2->VAR11 == VAR12)
    {
        VAR13 *VAR14;
        if (FUN2(VAR2, VAR7) < 0)
            return -1;
        FUN3(VAR2);
        VAR2->VAR15->VAR16.VAR17 = 0;
        if (VAR2->VAR18)
        {
            if (VAR2->VAR19)
            {
                if (VAR2->VAR20)
                    VAR2->VAR15->VAR16.VAR17 = 4;
                else
                    VAR2->VAR15->VAR16.VAR17 = 2;
            }
            else if (VAR2->VAR21)
            {
                VAR2->VAR15->VAR16.VAR17 = 1;
            }
        }
        VAR14 = FUN4(&VAR2->VAR15->VAR16, VAR22, sizeof(VAR9->VAR14));
        if (!VAR14)
            return FUN5(VAR23);
        memcpy(VAR14->VAR24, &VAR9->VAR14, sizeof(VAR9->VAR14));
        if (VAR9->VAR25)
        {
            VAR13 *VAR26 = FUN4(&VAR2->VAR15->VAR16, VAR27, VAR9->VAR28);
            if (VAR26)
                memcpy(VAR26->VAR24, VAR9->VAR25, VAR9->VAR28);
            FUN6(&VAR9->VAR25);
        }
        if (VAR9->VAR29)
        {
            VAR30 *VAR31 = FUN7(&VAR2->VAR15->VAR16);
            if (!VAR31)
                return FUN5(VAR23);
            *VAR31 = VAR9->VAR32;
            VAR9->VAR29 = 0;
        }
        if (VAR33 && (VAR7->VAR34 & VAR35))
            FUN8(VAR7);
    }
    else
    {
        int VAR36;
        if (!VAR2->VAR15)
        {
            FUN9(VAR2->VAR7, VAR37, "");
            return -1;
        }
        if (VAR2->VAR7->VAR38 && (VAR2->VAR7->VAR39 & VAR40))
        {
            if (VAR2->VAR7->VAR38->FUN10(VAR2->VAR7) < 0)
                FUN9(VAR7, VAR37, "");
        }
        for (VAR36 = 0; VAR36 < 4; VAR36++)
        {
            VAR2->VAR41.VAR16.VAR24[VAR36] = VAR2->VAR15->VAR16.VAR24[VAR36];
            if (VAR2->VAR11 == VAR42)
                VAR2->VAR41.VAR16.VAR24[VAR36] += VAR2->VAR15->VAR16.VAR43[VAR36];
        }
    }
    if (VAR7->VAR38)
    {
        if (VAR7->VAR38->FUN11(VAR7, VAR4, VAR5) < 0)
            return -1;
    }
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR44 && VAR2->VAR7->VAR45) if (FUN12(VAR2, VAR7) < 0) return -1;
    FF_ENABLE_DEPRECATION_WARNINGS return 0;
}