static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    int VAR7 = -1;
    if (VAR2->VAR8)
        FUN2(&VAR2->VAR9, 32);
    if (VAR2->VAR10 && (VAR7 = FUN3(VAR2)) < 0 && (VAR2->VAR5->VAR11 & VAR12))
        return VAR7;
    if (VAR7 < 0)
        VAR2->VAR13 = 0;
    if (VAR2->VAR14 && !VAR4->VAR15)
    {
        int VAR16 = FUN4(VAR2->VAR17 / 4, VAR2->VAR9.VAR18 / 32) - 1;
        int VAR19 = FUN5(&VAR2->VAR9) / 32;
        int VAR20, VAR21;
        switch (VAR2->VAR22)
        {
        case VAR23:
            if (VAR4->VAR24)
                break;
            for (; VAR16 >= VAR19; VAR16--)
            {
                if (FUN6(VAR2->VAR9.VAR25 + VAR16 * 4) == VAR26)
                {
                    VAR2->VAR9.VAR27 = (VAR16 + 1) * 32;
                    VAR20 = FUN7(&VAR2->VAR9, 10) + 1;
                    VAR21 = VAR2->VAR17 - VAR16 * 4;
                    if (VAR20 >= 96 && (VAR20 == VAR21 || VAR20 - 1 == VAR21) && FUN7(&VAR2->VAR9, 7) == 0x08)
                    {
                        VAR2->VAR28 = FUN5(&VAR2->VAR9);
                        break;
                    }
                }
            }
            if (!VAR2->VAR28)
            {
                FUN8(VAR2->VAR5, VAR29, "");
                if (VAR2->VAR5->VAR11 & VAR12)
                    return VAR30;
            }
            break;
        case VAR31:
            for (; VAR16 >= VAR19; VAR16--)
            {
                if (FUN6(VAR2->VAR9.VAR25 + VAR16 * 4) == VAR32)
                {
                    VAR2->VAR9.VAR27 = (VAR16 + 1) * 32;
                    VAR20 = FUN7(&VAR2->VAR9, 12) + 1;
                    VAR21 = VAR2->VAR17 - VAR16 * 4;
                    if (VAR20 >= 96 && VAR20 == VAR21)
                    {
                        VAR2->VAR33 = FUN5(&VAR2->VAR9);
                        break;
                    }
                }
            }
            if (!VAR2->VAR33)
            {
                FUN8(VAR2->VAR5, VAR29, "");
                if (VAR2->VAR5->VAR11 & VAR12)
                    return VAR30;
            }
            break;
        case VAR34:
            if (VAR4->VAR24)
                break;
            for (; VAR16 >= VAR19; VAR16--)
            {
                if (FUN6(VAR2->VAR9.VAR25 + VAR16 * 4) == VAR35)
                {
                    VAR2->VAR9.VAR27 = (VAR16 + 1) * 32;
                    VAR20 = FUN7(&VAR2->VAR9, 6) + 1;
                    if (VAR20 >= 11 && !FUN9(&VAR2->VAR9, (VAR16 + 1) * 32, VAR16 * 32 + VAR20 * 8))
                    {
                        VAR2->VAR36 = VAR16 * 32;
                        break;
                    }
                }
            }
            if (!VAR2->VAR36)
            {
                FUN8(VAR2->VAR5, VAR29, "");
                if (VAR2->VAR5->VAR11 & VAR12)
                    return VAR30;
            }
            break;
        }
    }
    return 0;
}