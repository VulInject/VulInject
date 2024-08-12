static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    int VAR8, VAR9;
    if (VAR4->VAR10)
        FUN2(VAR2, VAR11, "");
    for (VAR8 = 0; VAR8 < VAR2->VAR12; VAR8++)
    {
        VAR13 *VAR14 = VAR2->VAR15[VAR8];
        unsigned VAR16 = VAR8;
        if (VAR14->VAR17->VAR18 == VAR19)
        {
            if (VAR14->VAR17->VAR20 == VAR21)
                FUN3(VAR14, 64, 1, 48000);
            else
                FUN3(VAR14, 64, 1, VAR14->VAR17->VAR22);
        }
        else if (VAR14->VAR17->VAR18 == VAR23)
            FUN3(VAR14, 64, VAR14->VAR17->VAR24.VAR25, VAR14->VAR17->VAR24.VAR26);
        if (VAR14->VAR17->VAR20 != VAR27 && VAR14->VAR17->VAR20 != VAR28 && VAR14->VAR17->VAR20 != VAR29 && VAR14->VAR17->VAR20 != VAR30 && VAR14->VAR17->VAR20 != VAR21)
        {
            FUN2(VAR2, VAR31, "", VAR8);
            return -1;
        }
        if (!VAR14->VAR17->VAR32 || !VAR14->VAR17->VAR33)
        {
            FUN2(VAR2, VAR31, "");
            return -1;
        }
        VAR7 = FUN4(sizeof(*VAR7));
        if (!VAR7)
            return FUN5(VAR34);
        VAR7->VAR35.VAR36 = VAR8;
        if (!(VAR2->VAR37 & VAR38))
            do
            {
                VAR16 = FUN6();
                for (VAR9 = 0; VAR9 < VAR8; VAR9++)
                {
                    VAR6 *VAR39 = VAR2->VAR15[VAR9]->VAR5;
                    if (VAR16 == VAR39->VAR16)
                        break;
                }
            } while (VAR9 < VAR8);
        VAR7->VAR16 = VAR16;
        FUN7(&VAR14->VAR40, VAR2->VAR40, VAR41);
        VAR14->VAR5 = VAR7;
        if (VAR14->VAR17->VAR20 == VAR30)
        {
            int VAR42 = FUN8(VAR14->VAR17, VAR7, VAR2->VAR37 & VAR38, &VAR14->VAR40);
            if (VAR42)
            {
                FUN2(VAR2, VAR31, "");
                FUN9(&VAR14->VAR5);
                return VAR42;
            }
        }
        else if (VAR14->VAR17->VAR20 == VAR29)
        {
            int VAR42 = FUN10(VAR14->VAR17, VAR7, VAR2->VAR37 & VAR38, &VAR14->VAR40);
            if (VAR42)
            {
                FUN2(VAR2, VAR31, "");
                FUN9(&VAR14->VAR5);
                return VAR42;
            }
        }
        else if (VAR14->VAR17->VAR20 == VAR21)
        {
            int VAR42 = FUN11(VAR14->VAR17, VAR7, VAR2->VAR37 & VAR38, &VAR14->VAR40);
            if (VAR42)
            {
                FUN2(VAR2, VAR31, "");
                FUN9(&VAR14->VAR5);
                return VAR42;
            }
        }
        else
        {
            VAR43 *VAR44;
            const char *VAR45 = VAR14->VAR17->VAR20 == VAR27 ? "" : "";
            int VAR46 = VAR14->VAR17->VAR20 == VAR27 ? 3 : 0x81;
            int VAR47 = VAR14->VAR17->VAR20 == VAR27 ? 1 : 0;
            if (FUN12(VAR14->VAR17->VAR32, VAR14->VAR17->VAR33, VAR14->VAR17->VAR20 == VAR27 ? 30 : 42, VAR7->VAR48, VAR7->VAR49) < 0)
            {
                FUN2(VAR2, VAR31, "");
                FUN9(&VAR14->VAR5);
                return -1;
            }
            VAR44 = FUN13(7, VAR2->VAR37 & VAR38, &VAR7->VAR49[1], &VAR14->VAR40, VAR47);
            VAR7->VAR48[1] = VAR44;
            if (!VAR44)
                return FUN5(VAR34);
            FUN14(&VAR44, VAR46);
            FUN15(&VAR44, VAR45, 6);
            if (VAR14->VAR17->VAR20 == VAR28)
            {
                VAR7->VAR50 = ((VAR7->VAR48[0][40] & 3) << 3) | (VAR7->VAR48[0][41] >> 5);
                VAR7->VAR51 = VAR7->VAR48[0][9];
                FUN2(VAR2, VAR52, "", VAR7->VAR50, VAR7->VAR51);
            }
        }
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR12; VAR9++)
    {
        VAR6 *VAR7 = VAR2->VAR15[VAR9]->VAR5;
        FUN16(VAR2, VAR2->VAR15[VAR9], VAR7->VAR48[0], VAR7->VAR49[0], 0, 1);
        VAR7->VAR35.VAR37 |= 2;
        FUN17(VAR2, VAR7);
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR12; VAR9++)
    {
        VAR13 *VAR14 = VAR2->VAR15[VAR9];
        VAR6 *VAR7 = VAR14->VAR5;
        for (VAR8 = 1; VAR8 < 3; VAR8++)
        {
            if (VAR7->VAR49[VAR8])
                FUN16(VAR2, VAR14, VAR7->VAR48[VAR8], VAR7->VAR49[VAR8], 0, 1);
        }
        FUN17(VAR2, VAR7);
    }
    VAR7->VAR35.VAR53 = VAR54;
    FUN18(VAR2, 1);
    return 0;
}