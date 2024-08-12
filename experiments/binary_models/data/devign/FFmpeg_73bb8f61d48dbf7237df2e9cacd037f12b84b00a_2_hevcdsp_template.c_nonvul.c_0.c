static void FUN1(VAR1)(VAR2 *VAR3, ptrdiff_t VAR4, ptrdiff_t VAR5, int VAR6, int *VAR7, VAR2 *VAR8, VAR2 *VAR9)
{
    int VAR10, VAR11;
    VAR12 *VAR13 = (VAR12 *)VAR3;
    ptrdiff_t VAR14 = VAR4 / sizeof(VAR12);
    ptrdiff_t VAR15 = VAR5 / sizeof(VAR12);
    VAR6 <<= VAR16 - 8;
    for (VAR11 = 0; VAR11 < 2; VAR11++)
    {
        const int VAR17 = FUN2(VAR18 - 2 * VAR19 + VAR20);
        const int VAR21 = FUN2(VAR22 - 2 * VAR23 + VAR24);
        const int VAR25 = FUN2(VAR26 - 2 * VAR27 + VAR28);
        const int VAR29 = FUN2(VAR30 - 2 * VAR31 + VAR32);
        const int VAR33 = VAR17 + VAR21;
        const int VAR34 = VAR25 + VAR29;
        const int VAR35 = VAR7[VAR11] << (VAR16 - 8);
        const int VAR36 = VAR8[VAR11];
        const int VAR37 = VAR9[VAR11];
        if (VAR33 + VAR34 >= VAR6)
        {
            VAR13 += 4 * VAR15;
            continue;
        }
        else
        {
            const int VAR38 = VAR6 >> 3;
            const int VAR39 = VAR6 >> 2;
            const int VAR40 = ((VAR35 * 5 + 1) >> 1);
            if (FUN2(VAR41 - VAR20) + FUN2(VAR42 - VAR24) < VAR38 && FUN2(VAR20 - VAR24) < VAR40 && FUN2(VAR43 - VAR28) + FUN2(VAR44 - VAR32) < VAR38 && FUN2(VAR28 - VAR32) < VAR40 && (VAR33 << 1) < VAR39 && (VAR34 << 1) < VAR39)
            {
                const int VAR45 = VAR35 << 1;
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                {
                    const int VAR46 = VAR41;
                    const int VAR47 = VAR18;
                    const int VAR48 = VAR19;
                    const int VAR49 = VAR20;
                    const int VAR50 = VAR24;
                    const int VAR51 = VAR23;
                    const int VAR52 = VAR22;
                    const int VAR53 = VAR42;
                    if (!VAR36)
                    {
                        VAR20 = VAR49 + FUN3(((VAR47 + 2 * VAR48 + 2 * VAR49 + 2 * VAR50 + VAR51 + 4) >> 3) - VAR49, -VAR45, VAR45);
                        VAR19 = VAR48 + FUN3(((VAR47 + VAR48 + VAR49 + VAR50 + 2) >> 2) - VAR48, -VAR45, VAR45);
                        VAR18 = VAR47 + FUN3(((2 * VAR46 + 3 * VAR47 + VAR48 + VAR49 + VAR50 + 4) >> 3) - VAR47, -VAR45, VAR45);
                    }
                    if (!VAR37)
                    {
                        VAR24 = VAR50 + FUN3(((VAR48 + 2 * VAR49 + 2 * VAR50 + 2 * VAR51 + VAR52 + 4) >> 3) - VAR50, -VAR45, VAR45);
                        VAR23 = VAR51 + FUN3(((VAR49 + VAR50 + VAR51 + VAR52 + 2) >> 2) - VAR51, -VAR45, VAR45);
                        VAR22 = VAR52 + FUN3(((2 * VAR53 + 3 * VAR52 + VAR51 + VAR50 + VAR49 + 4) >> 3) - VAR52, -VAR45, VAR45);
                    }
                    VAR13 += VAR15;
                }
            }
            else
            {
                int VAR54 = 1;
                int VAR55 = 1;
                const int VAR56 = VAR35 >> 1;
                if (VAR17 + VAR25 < ((VAR6 + (VAR6 >> 1)) >> 3))
                    VAR54 = 2;
                if (VAR21 + VAR29 < ((VAR6 + (VAR6 >> 1)) >> 3))
                    VAR55 = 2;
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                {
                    const int VAR47 = VAR18;
                    const int VAR48 = VAR19;
                    const int VAR49 = VAR20;
                    const int VAR50 = VAR24;
                    const int VAR51 = VAR23;
                    const int VAR52 = VAR22;
                    int VAR57 = (9 * (VAR50 - VAR49) - 3 * (VAR51 - VAR48) + 8) >> 4;
                    if (FUN2(VAR57) < 10 * VAR35)
                    {
                        VAR57 = FUN3(VAR57, -VAR35, VAR35);
                        if (!VAR36)
                            VAR20 = FUN4(VAR49 + VAR57);
                        if (!VAR37)
                            VAR24 = FUN4(VAR50 - VAR57);
                        if (!VAR36 && VAR54 > 1)
                        {
                            const int VAR58 = FUN3((((VAR47 + VAR49 + 1) >> 1) - VAR48 + VAR57) >> 1, -VAR56, VAR56);
                            VAR19 = FUN4(VAR48 + VAR58);
                        }
                        if (!VAR37 && VAR55 > 1)
                        {
                            const int VAR59 = FUN3((((VAR52 + VAR50 + 1) >> 1) - VAR51 - VAR57) >> 1, -VAR56, VAR56);
                            VAR23 = FUN4(VAR51 + VAR59);
                        }
                    }
                    VAR13 += VAR15;
                }
            }
        }
    }
}