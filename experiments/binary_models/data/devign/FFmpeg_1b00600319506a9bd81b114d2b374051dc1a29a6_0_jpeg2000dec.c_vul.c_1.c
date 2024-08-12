static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4, VAR5;
    int VAR6 = 10;
    while (VAR6 && FUN2(&VAR2->VAR7) >= 8)
    {
        VAR3 = FUN3(&VAR2->VAR7);
        VAR4 = FUN3(&VAR2->VAR7);
        VAR5 = FUN4(&VAR2->VAR7) + VAR3 - 8;
        if (VAR4 == VAR8)
            return 1;
        if (FUN2(&VAR2->VAR7) < VAR3 || VAR5 < VAR3)
            return 0;
        if (VAR4 == VAR9 && VAR3 >= 16)
        {
            uint32_t VAR10, VAR11, VAR12;
            do
            {
                VAR10 = FUN3(&VAR2->VAR7);
                VAR11 = FUN3(&VAR2->VAR7);
                VAR12 = FUN4(&VAR2->VAR7) + VAR10 - 8;
                if (VAR10 < 8 || VAR12 > VAR5 || VAR12 < VAR10)
                    break;
                VAR10 -= 8;
                if (VAR11 == VAR8)
                {
                    return 1;
                }
                else if (VAR11 == FUN5('', '', '', '') && VAR10 >= 7)
                {
                    int VAR13 = FUN6(&VAR2->VAR7);
                    FUN7(&VAR2->VAR7, 2);
                    if (VAR13 == 1)
                    {
                        VAR2->VAR14 = FUN3(&VAR2->VAR7);
                    }
                    else if (VAR11 == FUN5('', '', '', '') && VAR10 >= 6)
                    {
                        int VAR15, VAR16, VAR17, VAR18, VAR19[3];
                        uint32_t VAR20, VAR7, VAR21;
                        VAR17 = FUN8(&VAR2->VAR7);
                        VAR18 = FUN6(&VAR2->VAR7);
                        VAR19[0] = (FUN6(&VAR2->VAR7) & 0x7f) + 1;
                        VAR19[1] = (FUN6(&VAR2->VAR7) & 0x7f) + 1;
                        VAR19[2] = (FUN6(&VAR2->VAR7) & 0x7f) + 1;
                        VAR16 = (VAR19[0] + 7 >> 3) * VAR17 + (VAR19[1] + 7 >> 3) * VAR17 + (VAR19[2] + 7 >> 3) * VAR17;
                        if (VAR17 > 256 || VAR18 != 3 || VAR19[0] > 16 || VAR19[1] > 16 || VAR19[2] > 16 || VAR10 < VAR16)
                        {
                            FUN9(VAR2->VAR22, "");
                            VAR2->VAR23 = 1;
                            for (VAR15 = 0; VAR15 < VAR17; VAR15++)
                            {
                                if (VAR19[0] <= 8)
                                {
                                    VAR20 = FUN6(&VAR2->VAR7) << 8 - VAR19[0];
                                    VAR20 |= VAR20 >> VAR19[0];
                                }
                                else
                                {
                                    VAR20 = FUN8(&VAR2->VAR7) >> VAR19[0] - 8;
                                    if (VAR19[1] <= 8)
                                    {
                                        VAR7 = FUN6(&VAR2->VAR7) << 8 - VAR19[1];
                                        VAR20 |= VAR20 >> VAR19[1];
                                    }
                                    else
                                    {
                                        VAR7 = FUN8(&VAR2->VAR7) >> VAR19[1] - 8;
                                        if (VAR19[2] <= 8)
                                        {
                                            VAR21 = FUN6(&VAR2->VAR7) << 8 - VAR19[2];
                                            VAR20 |= VAR20 >> VAR19[2];
                                        }
                                        else
                                        {
                                            VAR21 = FUN8(&VAR2->VAR7) >> VAR19[2] - 8;
                                            VAR2->VAR24[VAR15] = 0xffu << 24 | VAR20 << 16 | VAR7 << 8 | VAR21;
                                        }
                                        else if (VAR11 == FUN5('', '', '', '') && VAR10 >= 2)
                                        {
                                            int VAR25 = FUN8(&VAR2->VAR7);
                                            for (; VAR25 > 0; VAR25--)
                                            {
                                                int VAR26 = FUN10(&VAR2->VAR7);
                                                int av_unused VAR27 = FUN10(&VAR2->VAR7);
                                                int VAR28 = FUN10(&VAR2->VAR7);
                                                if (VAR26 < 4 && VAR28 < 4)
                                                    VAR2->VAR29[VAR26] = VAR28;
                                            }
                                            else if (VAR11 == FUN5('', '', '', '') && VAR10 >= 18)
                                            {
                                                int64_t VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
                                                uint32_t VAR36;
                                                FUN11(&VAR2->VAR7, 4);
                                                VAR36 = FUN3(&VAR2->VAR7);
                                                if (VAR36 != FUN5('', '', '', '') && VAR36 != FUN5('', '', '', ''))
                                                {
                                                    VAR30 = FUN8(&VAR2->VAR7);
                                                    VAR31 = FUN8(&VAR2->VAR7);
                                                    VAR32 = FUN8(&VAR2->VAR7);
                                                    VAR33 = FUN8(&VAR2->VAR7);
                                                    VAR34 = FUN6(&VAR2->VAR7);
                                                    VAR35 = FUN6(&VAR2->VAR7);
                                                    if (VAR34 > VAR35)
                                                    {
                                                        VAR34 -= VAR35;
                                                        VAR35 = 0;
                                                    }
                                                    else
                                                    {
                                                        VAR35 -= VAR34;
                                                        VAR34 = 0;
                                                        if (VAR37 / (VAR32 * VAR31) > FUN12(10, VAR35) && VAR37 / (VAR30 * VAR33) > FUN12(10, VAR34))
                                                            FUN13(&VAR2->VAR38.VAR39, &VAR2->VAR38.VAR40, VAR32 * VAR31 * FUN12(10, VAR35), VAR30 * VAR33 * FUN12(10, VAR34), VAR41);
                                                    }
                                                    while (VAR5 - VAR12 >= 8)
                                                        ;
                                                }
                                                else
                                                {
                                                    VAR6--;
                                                    FUN14(&VAR2->VAR7, VAR5, VAR42);
                                                    return 0;