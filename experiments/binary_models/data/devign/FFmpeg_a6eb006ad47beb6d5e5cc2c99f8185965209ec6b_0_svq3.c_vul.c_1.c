static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    const int VAR16 = ((VAR3 & 5) == 4) ? 4 : 16 >> (VAR3 & 1);
    const int VAR17 = 16 >> ((unsigned)(VAR3 + 1) / 3);
    const int VAR18 = (VAR4 == VAR19) ? -16 * 6 : 0;
    const int VAR20 = 6 * (VAR2->VAR20 - VAR16) - VAR18;
    const int VAR21 = 6 * (VAR2->VAR21 - VAR17) - VAR18;
    for (VAR7 = 0; VAR7 < 16; VAR7 += VAR17)
        for (VAR8 = 0; VAR8 < 16; VAR8 += VAR16)
        {
            const int VAR22 = (4 * VAR2->VAR23 + (VAR8 >> 2)) + (4 * VAR2->VAR24 + (VAR7 >> 2)) * VAR2->VAR25;
            int VAR26;
            VAR14 = 16 * VAR2->VAR23 + VAR8;
            VAR15 = 16 * VAR2->VAR24 + VAR7;
            VAR9 = (VAR8 >> 2 & 1) + (VAR7 >> 1 & 2) + (VAR8 >> 1 & 4) + (VAR7 & 8);
            if (VAR4 != VAR19)
            {
                FUN2(VAR2, VAR9, VAR16 >> 2, VAR5, 1, &VAR10, &VAR11);
            }
            else
            {
                VAR10 = VAR2->VAR27->VAR28[0][VAR22][0] << 1;
                VAR11 = VAR2->VAR27->VAR28[0][VAR22][1] << 1;
                if (VAR5 == 0)
                {
                    VAR10 = VAR10 * VAR2->VAR29 / VAR2->VAR30 + 1 >> 1;
                    VAR11 = VAR11 * VAR2->VAR29 / VAR2->VAR30 + 1 >> 1;
                }
                else
                {
                    VAR10 = VAR10 * (VAR2->VAR29 - VAR2->VAR30) / VAR2->VAR30 + 1 >> 1;
                    VAR11 = VAR11 * (VAR2->VAR29 - VAR2->VAR30) / VAR2->VAR30 + 1 >> 1;
                }
            }
            VAR10 = FUN3(VAR10, VAR18 - 6 * VAR14, VAR20 - 6 * VAR14);
            VAR11 = FUN3(VAR11, VAR18 - 6 * VAR15, VAR21 - 6 * VAR15);
            if (VAR4 == VAR19)
            {
                VAR12 = VAR13 = 0;
            }
            else
            {
                VAR13 = FUN4(&VAR2->VAR31);
                VAR12 = FUN4(&VAR2->VAR31);
                if (VAR12 != (VAR32)VAR12 || VAR13 != (VAR32)VAR13)
                {
                    FUN5(VAR2->VAR33, VAR34, "");
                    return -1;
                }
            }
            if (VAR4 == VAR35)
            {
                int VAR36, VAR37;
                VAR10 = (VAR10 + 1 >> 1) + VAR12;
                VAR11 = (VAR11 + 1 >> 1) + VAR13;
                VAR36 = (unsigned)(VAR10 + 0x30000) / 3 - 0x10000;
                VAR37 = (unsigned)(VAR11 + 0x30000) / 3 - 0x10000;
                VAR26 = (VAR10 - 3 * VAR36) + 4 * (VAR11 - 3 * VAR37);
                FUN6(VAR2, VAR14, VAR15, VAR16, VAR17, VAR36, VAR37, VAR26, 1, VAR5, VAR6);
                VAR10 += VAR10;
                VAR11 += VAR11;
            }
            else if (VAR4 == VAR38 || VAR4 == VAR19)
            {
                VAR10 = (unsigned)(VAR10 + 1 + 0x30000) / 3 + VAR12 - 0x10000;
                VAR11 = (unsigned)(VAR11 + 1 + 0x30000) / 3 + VAR13 - 0x10000;
                VAR26 = (VAR10 & 1) + 2 * (VAR11 & 1);
                FUN6(VAR2, VAR14, VAR15, VAR16, VAR17, VAR10 >> 1, VAR11 >> 1, VAR26, 0, VAR5, VAR6);
                VAR10 *= 3;
                VAR11 *= 3;
            }
            else
            {
                VAR10 = (unsigned)(VAR10 + 3 + 0x60000) / 6 + VAR12 - 0x10000;
                VAR11 = (unsigned)(VAR11 + 3 + 0x60000) / 6 + VAR13 - 0x10000;
                FUN6(VAR2, VAR14, VAR15, VAR16, VAR17, VAR10, VAR11, 0, 0, VAR5, VAR6);
                VAR10 *= 6;
                VAR11 *= 6;
            }
            if (VAR4 != VAR19)
            {
                int32_t VAR39 = FUN7(VAR10, VAR11);
                if (VAR17 == 8 && VAR7 < 8)
                {
                    FUN8(VAR2->VAR40[VAR5][VAR41[VAR9] + 1 * 8], VAR39);
                    if (VAR16 == 8 && VAR8 < 8)
                        FUN8(VAR2->VAR40[VAR5][VAR41[VAR9] + 1 + 1 * 8], VAR39);
                }
                if (VAR16 == 8 && VAR8 < 8)
                    FUN8(VAR2->VAR40[VAR5][VAR41[VAR9] + 1], VAR39);
                if (VAR16 == 4 || VAR17 == 4)
                    FUN8(VAR2->VAR40[VAR5][VAR41[VAR9]], VAR39);
            }
            FUN9(VAR2->VAR42->VAR28[VAR5][VAR22], VAR16 >> 2, VAR17 >> 2, VAR2->VAR25, FUN7(VAR10, VAR11), 4);
        }
    return 0;
}