static inline int FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    if (!FUN2(VAR5, VAR5->VAR7, VAR3))
    {
        int VAR8;
        uint32_t VAR9 = FUN3(VAR5, VAR3);
        uint64_t VAR10;
        if (VAR9 >= VAR5->VAR11)
        {
            return -1;
        }
        VAR5->VAR7 = VAR5->VAR11;
        switch (VAR5->VAR12[VAR9])
        {
        case 0x80000005:
        {
            VAR8 = FUN4(VAR2->VAR13, VAR5->VAR14[VAR9], VAR5->VAR15, VAR5->VAR16[VAR9]);
            if (VAR8 != VAR5->VAR16[VAR9])
            {
                return -1;
            }
            VAR5->VAR17.VAR18 = VAR5->VAR15;
            VAR5->VAR17.VAR19 = VAR5->VAR16[VAR9];
            VAR5->VAR17.VAR20 = VAR5->VAR21;
            VAR5->VAR17.VAR22 = 512 * VAR5->VAR23[VAR9];
            VAR8 = FUN5(&VAR5->VAR17);
            if (VAR8 != VAR24)
            {
                return -1;
            }
            VAR8 = FUN6(&VAR5->VAR17, VAR25);
            if (VAR8 != VAR26 || VAR5->VAR17.VAR10 != 512 * VAR5->VAR23[VAR9])
            {
                return -1;
            }
            break;
        }
        case 0x80000006:
            VAR8 = FUN4(VAR2->VAR13, VAR5->VAR14[VAR9], VAR5->VAR15, VAR5->VAR16[VAR9]);
            if (VAR8 != VAR5->VAR16[VAR9])
            {
                return -1;
            }
            VAR8 = FUN7(&VAR5->VAR27, 0, 0);
            if (VAR8 != VAR28)
            {
                return -1;
            }
            VAR5->VAR27.VAR18 = (char *)VAR5->VAR15;
            VAR5->VAR27.VAR19 = (unsigned int)VAR5->VAR16[VAR9];
            VAR5->VAR27.VAR20 = (char *)VAR5->VAR21;
            VAR5->VAR27.VAR22 = (unsigned int)512 * VAR5->VAR23[VAR9];
            VAR8 = FUN8(&VAR5->VAR27);
            VAR10 = ((VAR29)VAR5->VAR27.VAR30 << 32) + VAR5->VAR27.VAR31;
            FUN9(&VAR5->VAR27);
            if (VAR8 != VAR32 || VAR10 != 512 * VAR5->VAR23[VAR9])
            {
                return -1;
            }
            break;
        case 1:
            VAR8 = FUN4(VAR2->VAR13, VAR5->VAR14[VAR9], VAR5->VAR21, VAR5->VAR16[VAR9]);
            if (VAR8 != VAR5->VAR16[VAR9])
            {
                return -1;
            }
            break;
        case 2:
            break;
        }
        VAR5->VAR7 = VAR9;
    }
    return 0;
}