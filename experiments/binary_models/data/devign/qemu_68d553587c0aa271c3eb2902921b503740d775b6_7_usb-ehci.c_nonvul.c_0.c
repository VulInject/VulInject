static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    uint32_t VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR14 = (VAR4->VAR23[1] & VAR24);
    VAR15 = FUN2(VAR4->VAR23[0], VAR25);
    VAR16 = FUN2(VAR4->VAR23[0], VAR26);
    VAR21 = FUN2(VAR4->VAR23[1], VAR27);
    VAR22 = FUN2(VAR4->VAR23[2], VAR28);
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        if (VAR4->VAR29[VAR10] & VAR30)
        {
            VAR17 = FUN2(VAR4->VAR29[VAR10], VAR31);
            VAR18 = VAR4->VAR29[VAR10] & VAR32;
            VAR19 = (VAR4->VAR23[VAR17] & VAR33);
            VAR20 = (VAR4->VAR23[VAR17 + 1] & VAR33);
            VAR12 = FUN2(VAR4->VAR29[VAR10], VAR34);
            if (VAR12 > VAR21 * VAR22)
            {
                VAR12 = VAR21 * VAR22;
            }
            if (VAR12 > VAR35)
            {
                return VAR36;
            }
            FUN3(&VAR2->VAR37, &VAR2->VAR8, 2);
            if (VAR18 + VAR12 > 4096)
            {
                uint32_t VAR38 = VAR18 + VAR12 - 4096;
                uint32_t VAR39 = VAR12 - VAR38;
                FUN4(&VAR2->VAR37, VAR19 + VAR18, VAR39);
                FUN4(&VAR2->VAR37, VAR20, VAR38);
            }
            else
            {
                FUN4(&VAR2->VAR37, VAR19 + VAR18, VAR12);
            }
            VAR13 = VAR14 ? VAR40 : VAR41;
            FUN5(&VAR2->VAR42, VAR13, VAR15, VAR16);
            FUN6(&VAR2->VAR42, &VAR2->VAR37);
            VAR9 = VAR43;
            for (VAR11 = 0; VAR11 < VAR44; VAR11++)
            {
                VAR6 = &VAR2->VAR45[VAR11];
                VAR8 = VAR6->VAR8;
                if (!(VAR2->VAR46[VAR11] & (VAR47)))
                {
                    continue;
                }
                VAR9 = FUN7(VAR8, &VAR2->VAR42);
                if (VAR9 != VAR43)
                {
                    break;
                }
            }
            FUN8(&VAR2->VAR42);
            FUN9(&VAR2->VAR37);
            if (VAR9 == VAR48)
            {
                if (VAR2->VAR49 > 0)
                {
                    FUN10("");
                    VAR2->VAR49--;
                    return 0;
                }
                else if (VAR2->VAR49 == -1)
                {
                    FUN10("");
                    VAR2->VAR49 = 50;
                    return 0;
                }
                else
                {
                    FUN10("");
                    VAR9 = 0;
                }
            }
            else
            {
                FUN10("");
                VAR2->VAR49 = -1;
            }
            if (VAR9 == VAR48)
            {
                VAR9 = 0;
            }
            if (VAR9 >= 0)
            {
                if (!VAR14)
                {
                    FUN11(&VAR4->VAR29[VAR10], VAR12 - VAR9, VAR34);
                }
                else
                {
                    FUN11(&VAR4->VAR29[VAR10], VAR9, VAR34);
                }
                if (VAR4->VAR29[VAR10] & VAR50)
                {
                    FUN12(VAR2, VAR51);
                }
            }
            VAR4->VAR29[VAR10] &= ~VAR30;
        }
    }
    return 0;
}