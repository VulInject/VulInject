static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    if (!FUN2(VAR5, VAR5->VAR7, VAR3))
    {
        int VAR8;
        uint32_t VAR9 = FUN3(VAR5, VAR3);
        if (VAR9 >= VAR5->VAR10)
        {
            return -1;
        }
        VAR5->VAR7 = VAR5->VAR10;
        switch (VAR5->VAR11[VAR9])
        {
        case 0x80000005:
        {
            int VAR12;
            VAR12 = 0;
            do
            {
                VAR8 = FUN4(VAR2->VAR13, VAR5->VAR14[VAR9] + VAR12, VAR5->VAR15 + VAR12, VAR5->VAR16[VAR9] - VAR12);
                if (VAR8 < 0 && VAR17 == VAR18)
                {
                    VAR8 = 0;
                }
                VAR12 += VAR8;
            } while (VAR8 >= 0 && VAR8 + VAR12 < VAR5->VAR16[VAR9]);
            if (VAR8 != VAR5->VAR16[VAR9])
            {
                return -1;
            }
            VAR5->VAR19.VAR20 = VAR5->VAR15;
            VAR5->VAR19.VAR21 = VAR5->VAR16[VAR9];
            VAR5->VAR19.VAR22 = VAR5->VAR23;
            VAR5->VAR19.VAR24 = 512 * VAR5->VAR25[VAR9];
            VAR8 = FUN5(&VAR5->VAR19);
            if (VAR8 != VAR26)
            {
                return -1;
            }
            VAR8 = FUN6(&VAR5->VAR19, VAR27);
            if (VAR8 != VAR28 || VAR5->VAR19.VAR29 != 512 * VAR5->VAR25[VAR9])
            {
                return -1;
            }
            break;
        }
        case 1:
            VAR8 = FUN4(VAR2->VAR13, VAR5->VAR14[VAR9], VAR5->VAR23, VAR5->VAR16[VAR9]);
            if (VAR8 != VAR5->VAR16[VAR9])
            {
                return -1;
            }
            break;
        case 2:
            memset(VAR5->VAR23, 0, 512 * VAR5->VAR25[VAR9]);
            break;
        }
        VAR5->VAR7 = VAR9;
    }
    return 0;
}