static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, int VAR14)
{
    VAR15 *VAR16 = &VAR4->VAR16;
    int VAR17, VAR18, VAR19;
    VAR20 *VAR21 = VAR2->VAR22;
    if (!VAR21->VAR23)
        if (VAR13 > 0)
        {
            int VAR24, VAR25 = 0;
            if (VAR13 < 4)
                FUN2(&VAR4->VAR12);
            FUN3(VAR16, VAR12, VAR13, 0, NULL, NULL, NULL, NULL);
            while (FUN4(VAR16) + 4 < VAR13)
            {
                int VAR26 = FUN4(VAR16);
                VAR18 = FUN5(VAR16);
                if (VAR18 & 0x80)
                    VAR14 |= VAR27;
                VAR19 = FUN6(VAR16);
                if (VAR18 & 0x20)
                    FUN7(VAR16, 4);
                if (VAR18 & 0x10)
                    FUN7(VAR16, 4);
                if (VAR18 & 0x8)
                    FUN7(VAR16, 4);
                VAR24 = FUN4(VAR16);
                if (!(VAR18 & 0x40))
                {
                    if (VAR4->VAR28 && VAR19 != FUN4(VAR4->VAR28))
                    {
                        VAR11 *VAR29;
                        FUN8(VAR4->VAR28, &VAR29);
                        VAR4->VAR28 = NULL;
                        FUN9(VAR29);
                    }
                    if (!VAR19 && !VAR4->VAR28 && (VAR17 = FUN10(&VAR4->VAR28)) < 0)
                        return VAR17;
                    if (!VAR4->VAR28)
                        return FUN11(VAR30);
                    FUN12(VAR4->VAR28, VAR12 + VAR24, VAR13 - VAR24);
                    FUN7(VAR16, VAR13 - VAR24);
                    if (!(VAR14 & VAR31))
                        VAR25 = FUN8(VAR4->VAR28, &VAR4->VAR12);
                    VAR4->VAR28 = NULL;
                }
                else
                {
                    int VAR32 = VAR26 + VAR19 - VAR24;
                    int VAR33 = VAR25;
                    VAR25 += VAR32;
                    VAR4->VAR12 = FUN13(VAR4->VAR12, VAR25);
                    memcpy(VAR4->VAR12 + VAR33, VAR12 + VAR24, FUN14(VAR32, VAR13 - VAR24));
                    FUN7(VAR16, VAR32);
                }
            }
            FUN15(VAR16, VAR4->VAR12, VAR25);
            VAR16->VAR34 += VAR21->VAR35;
            VAR16->VAR36 = 0;
            VAR21->VAR23->VAR16 = VAR16;
        }
    for (;;)
    {
        int VAR37;
        VAR17 = FUN16(VAR21->VAR23, VAR8);
        VAR21->VAR35 = FUN4(VAR16);
        if (VAR17 != 0)
            break;
        for (VAR37 = 0; VAR37 < VAR2->VAR38; VAR37++)
        {
            if (VAR2->VAR39[VAR37]->VAR40 == VAR21->VAR23->VAR39[VAR8->VAR41]->VAR40)
            {
                VAR8->VAR41 = VAR37;
                return 1;
            }
        }
        FUN17(VAR8);
    }
    return VAR17 == 1 ? -1 : VAR17;