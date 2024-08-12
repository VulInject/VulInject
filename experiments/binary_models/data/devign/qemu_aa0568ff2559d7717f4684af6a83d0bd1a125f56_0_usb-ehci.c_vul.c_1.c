static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    uint32_t VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR13 = (VAR4->VAR22[1] & VAR23);
    VAR14 = FUN2(VAR4->VAR22[0], VAR24);
    VAR15 = FUN2(VAR4->VAR22[0], VAR25);
    VAR20 = FUN2(VAR4->VAR22[1], VAR26);
    VAR21 = FUN2(VAR4->VAR22[2], VAR27);
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        if (VAR4->VAR28[VAR10] & VAR29)
        {
            VAR16 = FUN2(VAR4->VAR28[VAR10], VAR30);
            VAR17 = VAR4->VAR28[VAR10] & VAR31;
            VAR18 = (VAR4->VAR22[VAR16] & VAR32);
            VAR19 = (VAR4->VAR22[VAR16 + 1] & VAR32);
            VAR11 = FUN2(VAR4->VAR28[VAR10], VAR33);
            if (VAR11 > VAR20 * VAR21)
            {
                VAR11 = VAR20 * VAR21;
            }
            if (VAR11 > VAR34)
            {
                return VAR35;
            }
            FUN3(&VAR2->VAR36, &VAR2->VAR6, 2);
            if (VAR17 + VAR11 > 4096)
            {
                uint32_t VAR37 = VAR17 + VAR11 - 4096;
                uint32_t VAR38 = VAR11 - VAR37;
                FUN4(&VAR2->VAR36, VAR18 + VAR17, VAR38);
                FUN4(&VAR2->VAR36, VAR19, VAR37);
            }
            else
            {
                FUN4(&VAR2->VAR36, VAR18 + VAR17, VAR11);
            }
            VAR12 = VAR13 ? VAR39 : VAR40;
            VAR6 = FUN5(VAR2, VAR14);
            VAR8 = FUN6(VAR6, VAR12, VAR15);
            FUN7(&VAR2->VAR41, VAR12, VAR8);
            FUN8(&VAR2->VAR41, &VAR2->VAR36);
            VAR9 = FUN9(VAR6, &VAR2->VAR41);
            FUN10(&VAR2->VAR41);
            FUN11(&VAR2->VAR36);
            if (VAR9 == VAR42)
            {
                if (VAR2->VAR43 > 0)
                {
                    FUN12("");
                    VAR2->VAR43--;
                    return 0;
                }
                else if (VAR2->VAR43 == -1)
                {
                    FUN12("");
                    VAR2->VAR43 = 50;
                    return 0;
                }
                else
                {
                    FUN12("");
                    VAR9 = 0;
                }
            }
            else
            {
                FUN12("");
                VAR2->VAR43 = -1;
            }
            if (VAR9 == VAR42)
            {
                VAR9 = 0;
            }
            if (VAR9 >= 0)
            {
                if (!VAR13)
                {
                    FUN13(&VAR4->VAR28[VAR10], VAR11 - VAR9, VAR33);
                }
                else
                {
                    FUN13(&VAR4->VAR28[VAR10], VAR9, VAR33);
                }
                if (VAR4->VAR28[VAR10] & VAR44)
                {
                    FUN14(VAR2, VAR45);
                }
            }
            VAR4->VAR28[VAR10] &= ~VAR29;
        }
    }
    return 0;
}