static int FUN1(VAR1 *VAR2, int VAR3)
{
    static const uint32_t VAR4[16] = {
        0x00000000,
        0x3f800000,
        0x40000000,
        0x40400000,
        0x40800000,
        0x40a00000,
        0x40c00000,
        0x40e00000,
        0x41000000,
        0x41100000,
        0x41200000,
        0x41300000,
        0x41400000,
        0x41500000,
        0x41600000,
        0x41700000,
    };
    int VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = &VAR2->VAR10[VAR3];
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = 0;
    const VAR14 *VAR15;
    const float *VAR16;
    FUN2(VAR2->VAR17, "", VAR3);
    VAR5 = FUN3(&VAR2->VAR18);
    VAR7 = &VAR19[VAR5];
    if (VAR5)
    {
        VAR15 = VAR20;
        VAR16 = VAR21;
    }
    else
    {
        VAR15 = VAR22;
        VAR16 = VAR23;
    }
    while ((VAR2->VAR24 || !VAR11) && (VAR12 + 3 < VAR9->VAR25))
    {
        uint32_t VAR26[4];
        int VAR27;
        unsigned int VAR28;
        VAR28 = FUN4(&VAR2->VAR18, VAR29.VAR30, VAR31, VAR32);
        if (VAR28 == VAR33 - 1)
        {
            for (VAR27 = 0; VAR27 < 4; VAR27 += 2)
            {
                VAR28 = FUN4(&VAR2->VAR18, VAR34.VAR30, VAR31, VAR35);
                if (VAR28 == VAR36 - 1)
                {
                    uint32_t VAR37, VAR38;
                    VAR37 = FUN4(&VAR2->VAR18, VAR39.VAR30, VAR31, VAR40);
                    if (VAR37 == VAR41 - 1)
                        VAR37 += FUN5(&VAR2->VAR18);
                    VAR38 = FUN4(&VAR2->VAR18, VAR39.VAR30, VAR31, VAR40);
                    if (VAR38 == VAR41 - 1)
                        VAR38 += FUN5(&VAR2->VAR18);
                    VAR26[VAR27] = ((VAR42){.VAR43 = VAR37}).VAR44;
                    VAR26[VAR27 + 1] = ((VAR42){.VAR43 = VAR38}).VAR44;
                }
                else
                {
                    VAR26[VAR27] = VAR4[VAR45[VAR28] >> 4];
                    VAR26[VAR27 + 1] = VAR4[VAR45[VAR28] & 0xF];
                }
            }
        }
        else
        {
            VAR26[0] = VAR4[VAR46[VAR28] >> 12];
            VAR26[1] = VAR4[(VAR46[VAR28] >> 8) & 0xF];
            VAR26[2] = VAR4[(VAR46[VAR28] >> 4) & 0xF];
            VAR26[3] = VAR4[VAR46[VAR28] & 0xF];
        }
        for (VAR27 = 0; VAR27 < 4; VAR27++)
        {
            if (VAR26[VAR27])
            {
                uint32_t VAR47 = FUN3(&VAR2->VAR18) - 1;
                FUN6(&VAR9->VAR48[VAR12], VAR26[VAR27] ^ VAR47 << 31);
                VAR13 = 0;
            }
            else
            {
                VAR9->VAR48[VAR12] = 0;
                VAR11 |= (++VAR13 > VAR2->VAR49 >> 8);
            }
            ++VAR12;
        }
    }
    if (VAR12 < VAR2->VAR49)
    {
        memset(&VAR9->VAR48[VAR12], 0, sizeof(*VAR9->VAR48) * (VAR2->VAR49 - VAR12));
        if (FUN7(VAR2->VAR17, &VAR2->VAR18, VAR7, VAR16, VAR15, 1, VAR9->VAR48, VAR12, VAR2->VAR49, VAR2->VAR49, VAR2->VAR50, 0))
            return VAR51;
    }
    return 0;
}