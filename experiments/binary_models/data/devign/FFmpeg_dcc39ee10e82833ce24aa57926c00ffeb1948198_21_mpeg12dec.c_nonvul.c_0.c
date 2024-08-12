static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR2;
    int VAR10;
    if (VAR2->VAR11 == VAR12)
        VAR2->VAR13 = 0;
    else
        VAR2->VAR13 ^= 1;
    if (VAR2->VAR13 || VAR2->VAR11 == VAR12)
    {
        VAR14 *VAR15;
        if ((VAR10 = FUN2(VAR2, VAR7)) < 0)
            return VAR10;
        FUN3(VAR2);
        VAR2->VAR16->VAR17->VAR18 = 0;
        if (VAR2->VAR19)
        {
            if (VAR2->VAR20)
            {
                if (VAR2->VAR21)
                    VAR2->VAR16->VAR17->VAR18 = 4;
                else
                    VAR2->VAR16->VAR17->VAR18 = 2;
            }
            else if (VAR2->VAR22)
            {
                VAR2->VAR16->VAR17->VAR18 = 1;
            }
        }
        VAR15 = FUN4(VAR2->VAR16->VAR17, VAR23, sizeof(VAR9->VAR15));
        if (!VAR15)
            return FUN5(VAR24);
        memcpy(VAR15->VAR25, &VAR9->VAR15, sizeof(VAR9->VAR15));
        if (VAR9->VAR26)
        {
            VAR14 *VAR27 = FUN4(VAR2->VAR16->VAR17, VAR28, VAR9->VAR29);
            if (VAR27)
                memcpy(VAR27->VAR25, VAR9->VAR26, VAR9->VAR29);
            FUN6(&VAR9->VAR26);
        }
        if (VAR9->VAR30)
        {
            VAR31 *VAR32 = FUN7(VAR2->VAR16->VAR17);
            if (!VAR32)
                return FUN5(VAR24);
            *VAR32 = VAR9->VAR33;
            VAR9->VAR30 = 0;
        }
        if (VAR9->VAR34)
        {
            VAR14 *VAR27 = FUN4(VAR2->VAR16->VAR17, VAR35, 1);
            if (!VAR27)
                return FUN5(VAR24);
            *VAR27->VAR25 = VAR9->VAR36;
            VAR9->VAR34 = 0;
        }
        if (VAR37 && (VAR7->VAR38 & VAR39))
            FUN8(VAR7);
    }
    else
    {
        int VAR40;
        if (!VAR2->VAR16)
        {
            FUN9(VAR2->VAR7, VAR41, "");
            return VAR42;
        }
        if (VAR2->VAR7->VAR43 && (VAR2->VAR7->VAR44 & VAR45))
        {
            if (VAR2->VAR7->VAR43->FUN10(VAR2->VAR7) < 0)
                FUN9(VAR7, VAR41, "");
        }
        for (VAR40 = 0; VAR40 < 4; VAR40++)
        {
            VAR2->VAR46.VAR17->VAR25[VAR40] = VAR2->VAR16->VAR17->VAR25[VAR40];
            if (VAR2->VAR11 == VAR47)
                VAR2->VAR46.VAR17->VAR25[VAR40] += VAR2->VAR16->VAR17->VAR48[VAR40];
        }
    }
    if (VAR7->VAR43)
    {
        if ((VAR10 = VAR7->VAR43->FUN11(VAR7, VAR4, VAR5)) < 0)
            return VAR10;
    }
    return 0;
}