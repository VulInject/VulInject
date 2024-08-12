static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    DSPContext VAR6;
    static int VAR7 = 0;
    int VAR8, VAR9;
    if (!VAR7)
    {
        VLC VAR10;
        uint16_t VAR11[VAR12 * 2];
        uint8_t VAR13[VAR12 * 2];
        uint8_t VAR14[VAR12 * 2];
        int16_t VAR15[VAR12 * 2];
        VAR7 = 1;
        VAR16 = FUN2(VAR17 * VAR18 * sizeof(struct VAR19));
        if (!VAR16)
            return -VAR20;
        VAR21 = FUN3(12 * 27 * sizeof(void *));
        if (!VAR21)
        {
            FUN4(VAR16);
            return -VAR20;
        }
        for (VAR8 = 0; VAR8 < 12 * 27; VAR8++)
            VAR21[VAR8] = (void *)(VAR22)VAR8;
        for (VAR8 = 0, VAR9 = 0; VAR8 < VAR12; VAR8++, VAR9++)
        {
            VAR11[VAR9] = VAR23[VAR8];
            VAR13[VAR9] = VAR24[VAR8];
            VAR14[VAR9] = VAR25[VAR8];
            VAR15[VAR9] = VAR26[VAR8];
            if (VAR26[VAR8])
            {
                VAR11[VAR9] <<= 1;
                VAR13[VAR9]++;
                VAR9++;
                VAR11[VAR9] = (VAR23[VAR8] << 1) | 1;
                VAR13[VAR9] = VAR24[VAR8] + 1;
                VAR14[VAR9] = VAR25[VAR8];
                VAR15[VAR9] = -VAR26[VAR8];
            }
        }
        FUN5(&VAR10, VAR27, VAR9, VAR13, 1, 1, VAR11, 2, 2);
        VAR28 = FUN3(VAR10.VAR29 * sizeof(VAR30));
        if (!VAR28)
        {
            FUN4(VAR21);
            FUN4(VAR16);
            return -VAR20;
        }
        for (VAR8 = 0; VAR8 < VAR10.VAR29; VAR8++)
        {
            int VAR31 = VAR10.VAR32[VAR8][0];
            int VAR33 = VAR10.VAR32[VAR8][1];
            int VAR34, VAR35;
            if (VAR33 < 0)
            {
                VAR35 = 0;
                VAR34 = VAR31;
            }
            else
            {
                VAR35 = VAR14[VAR31] + 1;
                VAR34 = VAR15[VAR31];
            }
            VAR28[VAR8].VAR33 = VAR33;
            VAR28[VAR8].VAR34 = VAR34;
            VAR28[VAR8].VAR35 = VAR35;
        }
        FUN6(&VAR10);
        for (VAR8 = 0; VAR8 < VAR12 - 1; VAR8++)
        {
            if (VAR25[VAR8] >= VAR18)
                continue;
            if (VAR26[VAR8] >= VAR17)
                continue;
            if (VAR16[VAR25[VAR8]][VAR26[VAR8]].VAR36 != 0)
                continue;
            VAR16[VAR25[VAR8]][VAR26[VAR8]].VAR37 = VAR23[VAR8] << (!!VAR26[VAR8]);
            VAR16[VAR25[VAR8]][VAR26[VAR8]].VAR36 = VAR24[VAR8] + (!!VAR26[VAR8]);
        }
        for (VAR8 = 0; VAR8 < VAR18; VAR8++)
        {
            for (VAR9 = 1; VAR9 < VAR17; VAR9++)
            {
                if (VAR16[VAR8][VAR9].VAR36 == 0)
                {
                    VAR16[VAR8][VAR9].VAR37 = VAR16[0][VAR9].VAR37 | (VAR16[VAR8 - 1][0].VAR37 << (VAR16[0][VAR9].VAR36));
                    VAR16[VAR8][VAR9].VAR36 = VAR16[VAR8 - 1][0].VAR36 + VAR16[0][VAR9].VAR36;
                }
            }
            for (VAR9 = 1; VAR9 < VAR17 / 2; VAR9++)
            {
                if (VAR16[VAR8][VAR9].VAR36 == 0)
                {
                    VAR16[VAR8][VAR9].VAR37 = VAR16[0][VAR9].VAR37 | (VAR16[VAR8 - 1][0].VAR37 << (VAR16[0][VAR9].VAR36));
                    VAR16[VAR8][VAR9].VAR36 = VAR16[VAR8 - 1][0].VAR36 + VAR16[0][VAR9].VAR36;
                }
                VAR16[VAR8][((VAR38)(-VAR9)) & 0x1ff].VAR37 = VAR16[VAR8][VAR9].VAR37 | 1;
                VAR16[VAR8][((VAR38)(-VAR9)) & 0x1ff].VAR36 = VAR16[VAR8][VAR9].VAR36;
            }
        }
    }
    FUN7(&VAR6, VAR2);
    VAR4->VAR39 = VAR6.VAR39;
    VAR4->VAR40[0] = VAR6.VAR40;
    VAR4->VAR41[0] = VAR6.VAR41;
    for (VAR8 = 0; VAR8 < 64; VAR8++)
        VAR4->VAR42[0][VAR8] = VAR6.VAR43[VAR44[VAR8]];
    VAR4->VAR40[1] = VAR6.VAR45;
    VAR4->VAR41[1] = VAR46;
    memcpy(VAR4->VAR42[1], VAR47, 64);
    FUN8(VAR4, VAR6.VAR43);
    if (FUN9(VAR2))
        VAR2->VAR48 = FUN9(VAR2)->VAR48;
    VAR2->VAR49 = &VAR4->VAR50;
    return 0;
}