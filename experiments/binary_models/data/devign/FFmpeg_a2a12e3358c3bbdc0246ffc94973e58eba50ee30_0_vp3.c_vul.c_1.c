static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    FUN2(VAR9, VAR10, [64]);
    int VAR11 = 0xdeadbeef, VAR12 = 0xdeadbeef;
    int VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17;
    if (VAR3 >= VAR2->VAR18)
        return;
    for (VAR16 = 0; VAR16 < 3; VAR16++)
    {
        VAR14 *VAR19 = VAR2->VAR20.VAR21[VAR16] + VAR2->VAR22[VAR16];
        VAR14 *VAR23 = VAR2->VAR24.VAR21[VAR16] + VAR2->VAR22[VAR16];
        VAR14 *VAR25 = VAR2->VAR26.VAR21[VAR16] + VAR2->VAR22[VAR16];
        int VAR27 = VAR2->VAR20.VAR28[VAR16];
        int VAR29 = VAR2->VAR30 >> (VAR16 && VAR2->VAR31);
        int VAR32 = VAR2->VAR33 >> (VAR16 && VAR2->VAR34);
        FUN3(*VAR35)[2] = VAR2->VAR35[!!VAR16];
        int VAR36, VAR37 = VAR3 << (!VAR16 && VAR2->VAR34);
        int VAR38 = VAR37 + 1 + (!VAR16 && VAR2->VAR34);
        int VAR39 = VAR16 ? VAR2->VAR40 : VAR2->VAR41;
        int VAR42 = VAR2->VAR42[!!VAR16];
        int VAR43 = VAR2->VAR43[!!VAR16];
        int VAR44 = VAR2->VAR44[VAR16];
        int VAR45 = !VAR16 && VAR46 && (VAR2->VAR47->VAR48 & VAR49);
        if (!VAR2->VAR50)
            VAR27 = -VAR27;
        if (VAR51 && VAR16 && (VAR2->VAR47->VAR52 & VAR53))
            continue;
        for (; VAR37 < VAR38; VAR37++)
        {
            for (VAR36 = 0; VAR36 < VAR39; VAR36++)
            {
                for (VAR7 = 0; VAR7 < 16; VAR7++)
                {
                    VAR4 = 4 * VAR36 + VAR54[VAR7][0];
                    VAR5 = 4 * VAR37 + VAR54[VAR7][1];
                    VAR8 = VAR5 * VAR42 + VAR4;
                    VAR6 = VAR44 + VAR8;
                    if (VAR4 >= VAR42 || VAR5 >= VAR43)
                        continue;
                    VAR17 = 8 * VAR5 * VAR27 + 8 * VAR4;
                    if (VAR45 && VAR2->VAR55[VAR6].VAR56 != VAR57)
                        FUN4(VAR2, &VAR2->VAR55[VAR6], VAR35[VAR8][1], (16 * VAR5) >> VAR2->VAR34);
                    if (VAR2->VAR55[VAR6].VAR56 != VAR58)
                    {
                        if ((VAR2->VAR55[VAR6].VAR56 == VAR59) || (VAR2->VAR55[VAR6].VAR56 == VAR60))
                            VAR15 = VAR25;
                        else
                            VAR15 = VAR23;
                        VAR15 += VAR17;
                        VAR13 = 0;
                        if ((VAR2->VAR55[VAR6].VAR56 > VAR57) && (VAR2->VAR55[VAR6].VAR56 != VAR59))
                        {
                            int VAR61, VAR62;
                            VAR11 = VAR35[VAR8][0];
                            VAR12 = VAR35[VAR8][1];
                            VAR61 = (VAR11 >> 1) + 8 * VAR4;
                            VAR62 = (VAR12 >> 1) + 8 * VAR5;
                            VAR13 = VAR11 & 0x01;
                            VAR15 += (VAR11 >> 1);
                            VAR13 |= (VAR12 & 0x01) << 1;
                            VAR15 += ((VAR12 >> 1) * VAR27);
                            if (VAR61 < 0 || VAR62 < 0 || VAR61 + 9 >= VAR29 || VAR62 + 9 >= VAR32)
                            {
                                VAR14 *VAR63 = VAR2->VAR64;
                                if (VAR27 < 0)
                                    VAR63 -= 8 * VAR27;
                                VAR2->VAR65.FUN5(VAR63, VAR15, VAR27, 9, 9, VAR61, VAR62, VAR29, VAR32);
                                VAR15 = VAR63;
                            }
                        }
                        if (VAR2->VAR55[VAR6].VAR56 != VAR57)
                        {
                            if (VAR13 != 3)
                            {
                                VAR2->VAR65.VAR66[1][VAR13](VAR19 + VAR17, VAR15, VAR27, 8);
                            }
                            else
                            {
                                int VAR67 = (VAR11 ^ VAR12) >> 31;
                                VAR2->VAR65.VAR68[1](VAR19 + VAR17, VAR15 - VAR67, VAR15 + VAR27 + 1 + VAR67, VAR27, 8);
                            }
                        }
                        VAR2->VAR65.FUN6(VAR10);
                        if (VAR2->VAR55[VAR6].VAR56 == VAR57)
                        {
                            int VAR69;
                            VAR69 = FUN7(VAR2, VAR2->VAR55 + VAR6, VAR16, 0, VAR10);
                            if (VAR69 > 63)
                                continue;
                            if (VAR2->VAR47->VAR70 != VAR71)
                                VAR10[0] += 128 << 3;
                            VAR2->VAR65.FUN8(VAR19 + VAR17, VAR27, VAR10);
                        }
                        else
                        {
                            int VAR69 = FUN7(VAR2, VAR2->VAR55 + VAR6, VAR16, 1, VAR10);
                            if (VAR69 > 63)
                                continue;
                            if (VAR69 > 0)
                            {
                                VAR2->VAR65.FUN9(VAR19 + VAR17, VAR27, VAR10);
                            }
                            else
                            {
                                VAR2->VAR65.FUN10(VAR19 + VAR17, VAR27, VAR10);
                            }
                        }
                    }
                    else
                    {
                        VAR2->VAR65.VAR72[1][0](VAR19 + VAR17, VAR23 + VAR17, VAR27, 8);
                    }
                }
            }
            if (!VAR2->VAR73)
                FUN11(VAR2, VAR16, 4 * VAR37 - !!VAR37, FUN12(4 * VAR37 + 3, VAR43 - 1));
        }
    }
    FUN13(VAR2, FUN12((32 << VAR2->VAR34) * (VAR3 + 1) - 16, VAR2->VAR33 - 16));
}