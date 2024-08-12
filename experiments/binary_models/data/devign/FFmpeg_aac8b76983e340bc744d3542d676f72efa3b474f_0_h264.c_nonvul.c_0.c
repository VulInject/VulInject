static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int16_t VAR6[8], int VAR7[2])
{
    int VAR8;
    for (VAR8 = 0; VAR8 < 16; VAR8++, VAR4 += VAR5)
    {
        int VAR9;
        int VAR10;
        int VAR11;
        int VAR12;
        int VAR13 = (VAR8 >> 1);
        if (!VAR14)
        {
            VAR13 &= ~1;
            VAR13 |= (VAR8 & 1);
        }
        if (VAR6[VAR13] == 0)
        {
            continue;
        }
        VAR12 = VAR14 ? (VAR8 >> 3) : (VAR8 & 1);
        VAR9 = VAR7[VAR12] + VAR2->VAR15;
        VAR10 = (VAR16 + 52)[VAR9];
        VAR11 = (VAR17 + 52)[VAR7[VAR12] + VAR2->VAR18];
        if (VAR6[VAR13] < 4)
        {
            const int VAR19 = (VAR20 + 52)[VAR9][VAR6[VAR13]];
            const int VAR21 = VAR4[-1];
            const int VAR22 = VAR4[-2];
            const int VAR23 = VAR4[-3];
            const int VAR24 = VAR4[0];
            const int VAR25 = VAR4[1];
            const int VAR26 = VAR4[2];
            if (FUN2(VAR21 - VAR24) < VAR10 && FUN2(VAR22 - VAR21) < VAR11 && FUN2(VAR25 - VAR24) < VAR11)
            {
                int VAR27 = VAR19;
                int VAR28;
                if (FUN2(VAR23 - VAR21) < VAR11)
                {
                    VAR4[-2] = VAR22 + FUN3((VAR23 + ((VAR21 + VAR24 + 1) >> 1) - (VAR22 << 1)) >> 1, -VAR19, VAR19);
                    VAR27++;
                }
                if (FUN2(VAR26 - VAR24) < VAR11)
                {
                    VAR4[1] = VAR25 + FUN3((VAR26 + ((VAR21 + VAR24 + 1) >> 1) - (VAR25 << 1)) >> 1, -VAR19, VAR19);
                    VAR27++;
                }
                VAR28 = FUN3((((VAR24 - VAR21) << 2) + (VAR22 - VAR25) + 4) >> 3, -VAR27, VAR27);
                VAR4[-1] = FUN4(VAR21 + VAR28);
                VAR4[0] = FUN4(VAR24 - VAR28);
                FUN5(VAR2->VAR29.VAR30, "", VAR8, VAR7[VAR12], VAR9, VAR10, VAR11, VAR27, VAR6[VAR13], VAR4[-3], VAR22, VAR21, VAR24, VAR25, VAR4[2], VAR22, VAR4[-1], VAR4[0], VAR25);
            }
        }
        else
        {
            const int VAR21 = VAR4[-1];
            const int VAR22 = VAR4[-2];
            const int VAR23 = VAR4[-3];
            const int VAR24 = VAR4[0];
            const int VAR25 = VAR4[1];
            const int VAR26 = VAR4[2];
            if (FUN2(VAR21 - VAR24) < VAR10 && FUN2(VAR22 - VAR21) < VAR11 && FUN2(VAR25 - VAR24) < VAR11)
            {
                if (FUN2(VAR21 - VAR24) < ((VAR10 >> 2) + 2))
                {
                    if (FUN2(VAR23 - VAR21) < VAR11)
                    {
                        const int VAR31 = VAR4[-4];
                        VAR4[-1] = (VAR23 + 2 * VAR22 + 2 * VAR21 + 2 * VAR24 + VAR25 + 4) >> 3;
                        VAR4[-2] = (VAR23 + VAR22 + VAR21 + VAR24 + 2) >> 2;
                        VAR4[-3] = (2 * VAR31 + 3 * VAR23 + VAR22 + VAR21 + VAR24 + 4) >> 3;
                    }
                    else
                    {
                        VAR4[-1] = (2 * VAR22 + VAR21 + VAR25 + 2) >> 2;
                    }
                    if (FUN2(VAR26 - VAR24) < VAR11)
                    {
                        const int VAR32 = VAR4[3];
                        VAR4[0] = (VAR22 + 2 * VAR21 + 2 * VAR24 + 2 * VAR25 + VAR26 + 4) >> 3;
                        VAR4[1] = (VAR21 + VAR24 + VAR25 + VAR26 + 2) >> 2;
                        VAR4[2] = (2 * VAR32 + 3 * VAR26 + VAR25 + VAR24 + VAR21 + 4) >> 3;
                    }
                    else
                    {
                        VAR4[0] = (2 * VAR25 + VAR24 + VAR22 + 2) >> 2;
                    }
                }
                else
                {
                    VAR4[-1] = (2 * VAR22 + VAR21 + VAR25 + 2) >> 2;
                    VAR4[0] = (2 * VAR25 + VAR24 + VAR22 + 2) >> 2;
                }
                FUN5(VAR2->VAR29.VAR30, "", VAR8, VAR7[VAR12], VAR9, VAR10, VAR11, VAR23, VAR22, VAR21, VAR24, VAR25, VAR26, VAR4[-3], VAR4[-2], VAR4[-1], VAR4[0], VAR4[1], VAR4[2]);
            }
        }
    }
}