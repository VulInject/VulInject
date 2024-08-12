static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    int VAR9;
    int VAR10;
    int VAR11 = 0;
    int VAR12 = 0;
    if (VAR2->VAR13->VAR14 || VAR6->VAR15 >= VAR6->VAR16)
        return VAR17;
    if (VAR6->VAR18 < 0)
    {
        FUN2(VAR2->VAR13, VAR6->VAR19, 0);
        VAR11 = VAR6->VAR20[VAR6->VAR15] & (~3);
        VAR8 = VAR6->VAR21[VAR6->VAR15];
        if (VAR8 & VAR22)
        {
            int VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
            VAR29 *VAR30 = VAR6->VAR30;
            uint8_t VAR31[768];
            memcpy(VAR31, VAR30, 768);
            VAR23 = FUN3(VAR2->VAR13);
            VAR23 = VAR23 * 4 - 1;
            VAR11 -= VAR23;
            VAR11--;
            VAR24 = 0;
            VAR28 = FUN4(VAR2->VAR13) + VAR23;
            while (VAR24 < 256)
            {
                VAR25 = FUN3(VAR2->VAR13);
                if (VAR25 & 0x80)
                {
                    VAR24 += (VAR25 & 0x7F) + 1;
                    VAR30 += ((VAR25 & 0x7F) + 1) * 3;
                }
                else if (VAR25 & 0x40)
                {
                    VAR26 = FUN3(VAR2->VAR13);
                    VAR27 = (VAR25 & 0x3F) + 1;
                    if (VAR26 + VAR27 > 0x100)
                    {
                        FUN5(VAR2, VAR32, "", VAR26, VAR27);
                        return VAR33;
                    }
                    VAR26 *= 3;
                    while (VAR27-- && VAR24 < 256)
                    {
                        *VAR30++ = VAR31[VAR26 + 0];
                        *VAR30++ = VAR31[VAR26 + 1];
                        *VAR30++ = VAR31[VAR26 + 2];
                        VAR24++;
                        VAR26 += 3;
                    }
                }
                else
                {
                    *VAR30++ = VAR34[VAR25];
                    *VAR30++ = VAR34[FUN3(VAR2->VAR13) & 0x3F];
                    *VAR30++ = VAR34[FUN3(VAR2->VAR13) & 0x3F];
                    VAR24++;
                }
            }
            FUN2(VAR2->VAR13, VAR28, 0);
            VAR12 |= 1;
        }
        VAR8 >>= 1;
        VAR6->VAR18 = -1;
        for (VAR10 = 0; VAR10 < 7; VAR10++)
        {
            if (VAR8 & 1)
            {
                uint32_t VAR23;
                VAR29 *VAR35;
                VAR23 = FUN6(VAR2->VAR13) - 4;
                if (!VAR23 || VAR23 > VAR11)
                {
                    FUN5(VAR2, VAR32, "");
                    return VAR33;
                }
                VAR11 -= VAR23;
                VAR11 -= 4;
                VAR6->VAR18++;
                VAR35 = FUN7(VAR6->VAR36[VAR6->VAR18], VAR23);
                if (!VAR35)
                    return FUN8(VAR37);
                VAR6->VAR36[VAR6->VAR18] = VAR35;
                VAR6->VAR38[VAR6->VAR18] = VAR23;
                VAR9 = FUN9(VAR2->VAR13, VAR6->VAR36[VAR6->VAR18], VAR23);
                if (VAR9 != VAR23)
                    return FUN8(VAR39);
                VAR6->VAR40[VAR6->VAR18] = VAR6->VAR41[VAR10];
            }
            VAR8 >>= 1;
        }
        if (VAR11 < 0)
            return VAR33;
        if (FUN10(VAR4, VAR11 + 769))
            return FUN8(VAR37);
        if (VAR6->VAR20[VAR6->VAR15] & 1)
            VAR12 |= 2;
        VAR4->VAR42[0] = VAR12;
        memcpy(VAR4->VAR42 + 1, VAR6->VAR30, 768);
        VAR9 = FUN9(VAR2->VAR13, VAR4->VAR42 + 769, VAR11);
        if (VAR9 != VAR11)
            return FUN8(VAR39);
        VAR4->VAR43 = VAR6->VAR44;
        VAR4->VAR45 = VAR6->VAR15;
        VAR4->VAR23 = VAR9 + 769;
        VAR6->VAR15++;
        VAR6->VAR19 = FUN4(VAR2->VAR13);
    }
    else
    {
        if (VAR6->VAR40[VAR6->VAR18] < 0)
            return VAR33;
        if (FUN10(VAR4, VAR6->VAR38[VAR6->VAR18]))
            return FUN8(VAR37);
        memcpy(VAR4->VAR42, VAR6->VAR36[VAR6->VAR18], VAR6->VAR38[VAR6->VAR18]);
        VAR4->VAR23 = VAR6->VAR38[VAR6->VAR18];
        VAR4->VAR43 = VAR6->VAR40[VAR6->VAR18];
        VAR4->VAR45 = VAR6->VAR46[VAR6->VAR18];
        VAR6->VAR46[VAR6->VAR18] += FUN11(VAR4->VAR42);
        VAR6->VAR18--;
    }
    return 0;
}