FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    struct VAR11 *VAR12 = VAR7->private;
    int VAR13 = VAR10->VAR14->VAR15 + VAR7->VAR16 + 2;
    VAR17 *VAR18;
    if (!(VAR7->VAR19[VAR7->VAR20] & 0x80))
        return 0;
    if (!VAR12)
    {
        VAR12 = FUN2(sizeof(*VAR12));
        VAR7->private = VAR12;
        if (VAR7->VAR19[VAR7->VAR20] == 0x80)
        {
            GetBitContext VAR21;
            int VAR22, VAR23;
            FUN3(&VAR21, VAR7->VAR19 + VAR7->VAR20, VAR7->VAR16 * 8);
            FUN4(&VAR21, 7 * 8);
            VAR12->VAR24 = FUN5(&VAR21, 24);
            if (VAR12->VAR24 < 0x030100)
            {
                FUN6(VAR2, VAR25, "", VAR12->VAR24);
                return -1;
                VAR22 = FUN7(&VAR21, 16) << 4;
                VAR23 = FUN7(&VAR21, 16) << 4;
                FUN8(VAR10->VAR14, VAR22, VAR23);
                if (VAR12->VAR24 >= 0x030400)
                    FUN9(&VAR21, 100);
                if (VAR12->VAR24 >= 0x030200)
                {
                    VAR22 = FUN5(&VAR21, 24);
                    VAR23 = FUN5(&VAR21, 24);
                    if (VAR22 <= VAR10->VAR14->VAR22 && VAR22 > VAR10->VAR14->VAR22 - 16 && VAR23 <= VAR10->VAR14->VAR23 && VAR23 > VAR10->VAR14->VAR23 - 16)
                        FUN8(VAR10->VAR14, VAR22, VAR23);
                    FUN9(&VAR21, 16);
                    VAR10->VAR14->VAR26.VAR27 = FUN5(&VAR21, 32);
                    VAR10->VAR14->VAR26.VAR28 = FUN5(&VAR21, 32);
                    VAR10->VAR26 = VAR10->VAR14->VAR26;
                    VAR10->VAR29.VAR28 = FUN5(&VAR21, 24);
                    VAR10->VAR29.VAR27 = FUN5(&VAR21, 24);
                    if (VAR12->VAR24 >= 0x030200)
                        FUN4(&VAR21, 38);
                    if (VAR12->VAR24 >= 0x304000)
                        FUN9(&VAR21, 2);
                    VAR12->VAR30 = FUN7(&VAR21, 5);
                    VAR12->VAR31 = (1 << VAR12->VAR30) - 1;
                    VAR10->VAR14->VAR32 = VAR33;
                    VAR10->VAR14->VAR34 = VAR35;
                }
                else if (VAR7->VAR19[VAR7->VAR20] == 0x83)
                {
                    FUN10(VAR2, VAR7->VAR19 + VAR7->VAR20 + 7, VAR7->VAR16 - 8);
                    VAR10->VAR14->VAR36 = FUN11(VAR10->VAR14->VAR36, VAR13 + VAR37);
                    VAR18 = VAR10->VAR14->VAR36 + VAR10->VAR14->VAR15;
                    *VAR18++ = VAR7->VAR16 >> 8;
                    *VAR18++ = VAR7->VAR16 & 0xff;
                    memcpy(VAR18, VAR7->VAR19 + VAR7->VAR20, VAR7->VAR16);
                    VAR10->VAR14->VAR15 = VAR13;
                    return 1;