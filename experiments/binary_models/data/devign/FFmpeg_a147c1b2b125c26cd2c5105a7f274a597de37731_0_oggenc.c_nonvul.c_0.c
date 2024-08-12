static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR5];
        unsigned VAR11 = VAR5;
        if (VAR9->VAR12->VAR13 == VAR14)
        {
            if (VAR9->VAR12->VAR15 == VAR16)
                FUN2(VAR9, 64, 1, 48000);
            else
                FUN2(VAR9, 64, 1, VAR9->VAR12->VAR17);
        }
        else if (VAR9->VAR12->VAR13 == VAR18)
            FUN2(VAR9, 64, VAR9->VAR12->VAR19.VAR20, VAR9->VAR12->VAR19.VAR21);
        if (VAR9->VAR12->VAR15 != VAR22 && VAR9->VAR12->VAR15 != VAR23 && VAR9->VAR12->VAR15 != VAR24 && VAR9->VAR12->VAR15 != VAR25 && VAR9->VAR12->VAR15 != VAR16)
        {
            FUN3(VAR2, VAR26, "", VAR5);
            return -1;
        }
        if (!VAR9->VAR12->VAR27 || !VAR9->VAR12->VAR28)
        {
            FUN3(VAR2, VAR26, "");
            return -1;
        }
        VAR4 = FUN4(sizeof(*VAR4));
        VAR4->VAR29.VAR30 = VAR5;
        if (!(VAR9->VAR12->VAR31 & VAR32))
            do
            {
                VAR11 = FUN5();
                for (VAR6 = 0; VAR6 < VAR5; VAR6++)
                {
                    VAR3 *VAR33 = VAR2->VAR10[VAR6]->VAR34;
                    if (VAR11 == VAR33->VAR11)
                        break;
                }
            } while (VAR6 < VAR5);
        VAR4->VAR11 = VAR11;
        VAR9->VAR34 = VAR4;
        if (VAR9->VAR12->VAR15 == VAR25)
        {
            int VAR35 = FUN6(VAR9->VAR12, VAR4, VAR9->VAR12->VAR31 & VAR32, &VAR2->VAR36);
            if (VAR35)
            {
                FUN3(VAR2, VAR26, "");
                FUN7(&VAR9->VAR34);
                return VAR35;
            }
        }
        else if (VAR9->VAR12->VAR15 == VAR24)
        {
            int VAR35 = FUN8(VAR9->VAR12, VAR4, VAR9->VAR12->VAR31 & VAR32, &VAR2->VAR36);
            if (VAR35)
            {
                FUN3(VAR2, VAR26, "");
                FUN7(&VAR9->VAR34);
                return VAR35;
            }
        }
        else if (VAR9->VAR12->VAR15 == VAR16)
        {
            int VAR35 = FUN9(VAR9->VAR12, VAR4, VAR9->VAR12->VAR31 & VAR32, &VAR2->VAR36);
            if (VAR35)
            {
                FUN3(VAR2, VAR26, "");
                FUN7(&VAR9->VAR34);
                return VAR35;
            }
        }
        else
        {
            VAR37 *VAR38;
            const char *VAR39 = VAR9->VAR12->VAR15 == VAR22 ? "" : "";
            int VAR40 = VAR9->VAR12->VAR15 == VAR22 ? 3 : 0x81;
            int VAR41 = VAR9->VAR12->VAR15 == VAR22 ? 1 : 0;
            if (FUN10(VAR9->VAR12->VAR27, VAR9->VAR12->VAR28, VAR9->VAR12->VAR15 == VAR22 ? 30 : 42, VAR4->VAR42, VAR4->VAR43) < 0)
            {
                FUN3(VAR2, VAR26, "");
                FUN7(&VAR9->VAR34);
                return -1;
            }
            VAR38 = FUN11(7, VAR9->VAR12->VAR31 & VAR32, &VAR4->VAR43[1], &VAR2->VAR36, VAR41);
            VAR4->VAR42[1] = VAR38;
            if (!VAR38)
                return FUN12(VAR44);
            FUN13(&VAR38, VAR40);
            FUN14(&VAR38, VAR39, 6);
            if (VAR9->VAR12->VAR15 == VAR23)
            {
                VAR4->VAR45 = ((VAR4->VAR42[0][40] & 3) << 3) | (VAR4->VAR42[0][41] >> 5);
                VAR4->VAR46 = VAR4->VAR42[0][9];
                FUN3(VAR2, VAR47, "", VAR4->VAR45, VAR4->VAR46);
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++)
    {
        VAR3 *VAR4 = VAR2->VAR10[VAR6]->VAR34;
        FUN15(VAR2, VAR2->VAR10[VAR6], VAR4->VAR42[0], VAR4->VAR43[0], 0, 1);
        VAR4->VAR29.VAR31 |= 2;
        FUN16(VAR2, VAR4);
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR6];
        VAR3 *VAR4 = VAR9->VAR34;
        for (VAR5 = 1; VAR5 < 3; VAR5++)
        {
            if (VAR4->VAR43[VAR5])
                FUN15(VAR2, VAR9, VAR4->VAR42[VAR5], VAR4->VAR43[VAR5], 0, 1);
        }
        FUN16(VAR2, VAR4);
    }
    return 0;
}