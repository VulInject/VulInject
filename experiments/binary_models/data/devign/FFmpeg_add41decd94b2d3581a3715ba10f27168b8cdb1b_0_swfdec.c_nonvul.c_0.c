static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = NULL, *VAR12 = NULL, *VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    for (;;)
    {
        uint64_t VAR19 = FUN2(VAR9);
        VAR14 = FUN3(VAR9, &VAR15);
        if (VAR14 < 0)
            return FUN4(VAR20);
        if (VAR14 == VAR21)
        {
            int VAR22 = FUN5(VAR9);
            VAR15 -= 2;
            for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16++)
            {
                VAR13 = VAR2->VAR24[VAR16];
                if (VAR13->VAR25->VAR26 == VAR27 && VAR13->VAR28 == VAR22)
                    goto VAR29;
            }
            FUN5(VAR9);
            FUN5(VAR9);
            FUN5(VAR9);
            FUN6(VAR9);
            VAR11 = FUN7(VAR2, VAR22);
            if (!VAR11)
                return -1;
            VAR11->VAR25->VAR26 = VAR27;
            VAR11->VAR25->VAR30 = FUN8(VAR31, FUN6(VAR9));
            FUN9(VAR11, 16, 256, VAR6->VAR32);
            VAR11->VAR25->VAR33 = (VAR34){256, VAR6->VAR32};
            VAR15 -= 8;
        }
        else if (VAR14 == VAR35 || VAR14 == VAR36)
        {
            int VAR37;
            for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16++)
            {
                VAR13 = VAR2->VAR24[VAR16];
                if (VAR13->VAR25->VAR26 == VAR38 && VAR13->VAR28 == -1)
                    goto VAR29;
            }
            FUN6(VAR9);
            VAR18 = FUN6(VAR9);
            VAR6->VAR39 = FUN5(VAR9);
            VAR12 = FUN7(VAR2, -1);
            if (!VAR12)
                return -1;
            VAR12->VAR25->VAR40 = 1 + (VAR18 & 1);
            VAR12->VAR25->VAR26 = VAR38;
            VAR12->VAR25->VAR30 = FUN8(VAR41, (VAR18 >> 4) & 15);
            VAR12->VAR42 = VAR43;
            VAR37 = (VAR18 >> 2) & 3;
            if (!VAR37)
                return FUN4(VAR20);
            VAR12->VAR25->VAR44 = 11025 << (VAR37 - 1);
            FUN9(VAR12, 64, 1, VAR12->VAR25->VAR44);
            VAR15 -= 4;
        }
        else if (VAR14 == VAR45)
        {
            int VAR22 = FUN5(VAR9);
            VAR15 -= 2;
            for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16++)
            {
                VAR13 = VAR2->VAR24[VAR16];
                if (VAR13->VAR25->VAR26 == VAR27 && VAR13->VAR28 == VAR22)
                {
                    VAR17 = FUN5(VAR9);
                    FUN10(VAR9, VAR4, VAR15 - 2);
                    VAR4->VAR19 = VAR19;
                    VAR4->VAR46 = VAR17;
                    VAR4->VAR47 = VAR13->VAR48;
                    return VAR4->VAR49;
                }
            }
        }
        else if (VAR14 == VAR50)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16++)
            {
                VAR13 = VAR2->VAR24[VAR16];
                if (VAR13->VAR25->VAR26 == VAR38 && VAR13->VAR28 == -1)
                {
                    if (VAR13->VAR25->VAR30 == VAR51)
                    {
                        FUN11(VAR9, 4);
                        FUN10(VAR9, VAR4, VAR15 - 4);
                    }
                    else
                    {
                        FUN10(VAR9, VAR4, VAR15);
                    }
                    VAR4->VAR19 = VAR19;
                    VAR4->VAR47 = VAR13->VAR48;
                    return VAR4->VAR49;
                }
            }
        }
        else if (VAR14 == VAR52)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR23; VAR16++)
            {
                VAR13 = VAR2->VAR24[VAR16];
                if (VAR13->VAR25->VAR30 == VAR53 && VAR13->VAR28 == -2)
                    break;
            }
            if (VAR16 == VAR2->VAR23)
            {
                VAR11 = FUN7(VAR2, -2);
                if (!VAR11)
                    return -1;
                VAR11->VAR25->VAR26 = VAR27;
                VAR11->VAR25->VAR30 = VAR53;
                FUN9(VAR11, 64, 256, VAR6->VAR32);
                VAR11->VAR25->VAR33 = (VAR34){256, VAR6->VAR32};
                VAR13 = VAR11;
            }
            FUN5(VAR9);
            FUN12(VAR4, VAR15 - 2);
            FUN13(VAR9, VAR4->VAR54, 4);
            if (FUN14(VAR4->VAR54) == 0xffd8ffd9 || FUN14(VAR4->VAR54) == 0xffd9ffd8)
            {
                VAR4->VAR49 -= 4;
                FUN13(VAR9, VAR4->VAR54, VAR4->VAR49);
            }
            else
            {
                FUN13(VAR9, VAR4->VAR54 + 4, VAR4->VAR49 - 4);
            }
            VAR4->VAR19 = VAR19;
            VAR4->VAR47 = VAR13->VAR48;
            return VAR4->VAR49;
        }
    VAR29:
        FUN11(VAR9, VAR15);
    }
}