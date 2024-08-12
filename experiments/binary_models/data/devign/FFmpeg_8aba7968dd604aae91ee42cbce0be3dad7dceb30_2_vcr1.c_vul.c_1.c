static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = VAR3;
    const VAR7 *VAR16 = VAR8;
    int VAR17, VAR18, VAR19, VAR20;
    if ((VAR20 = FUN2(VAR2, VAR15, 0)) < 0)
    {
        FUN3(VAR2, VAR21, "");
        return VAR20;
    }
    VAR15->VAR22 = VAR23;
    VAR15->VAR24 = 1;
    if (VAR9 < 32)
        for (VAR17 = 0; VAR17 < 16; VAR17++)
        {
            VAR12->VAR25[VAR17] = *VAR16++;
            VAR16++;
            VAR9--;
        }
    for (VAR19 = 0; VAR19 < VAR2->VAR26; VAR19++)
    {
        int VAR27;
        VAR7 *VAR28 = &VAR15->VAR3[0][VAR19 * VAR15->VAR29[0]];
        if ((VAR19 & 3) == 0)
        {
            VAR7 *VAR30 = &VAR15->VAR3[1][(VAR19 >> 2) * VAR15->VAR29[1]];
            VAR7 *VAR31 = &VAR15->VAR3[2][(VAR19 >> 2) * VAR15->VAR29[2]];
            for (VAR17 = 0; VAR17 < 4; VAR17++)
                VAR12->VAR27[VAR17] = *VAR16++;
            VAR27 = VAR12->VAR27[0] - VAR12->VAR25[VAR16[2] & 0xF];
            for (VAR18 = 0; VAR18 < VAR2->VAR32; VAR18 += 4)
            {
                VAR28[0] = VAR27 += VAR12->VAR25[VAR16[2] & 0xF];
                VAR28[1] = VAR27 += VAR12->VAR25[VAR16[2] >> 4];
                VAR28[2] = VAR27 += VAR12->VAR25[VAR16[0] & 0xF];
                VAR28[3] = VAR27 += VAR12->VAR25[VAR16[0] >> 4];
                VAR28 += 4;
                *VAR30++ = VAR16[3];
                *VAR31++ = VAR16[1];
                VAR16 += 4;
                VAR9 -= 4;
            }
        }
        else
        {
            if (VAR9 < VAR2->VAR32 / 2)
                VAR27 = VAR12->VAR27[VAR19 & 3] - VAR12->VAR25[VAR16[2] & 0xF];
            for (VAR18 = 0; VAR18 < VAR2->VAR32; VAR18 += 8)
            {
                VAR28[0] = VAR27 += VAR12->VAR25[VAR16[2] & 0xF];
                VAR28[1] = VAR27 += VAR12->VAR25[VAR16[2] >> 4];
                VAR28[2] = VAR27 += VAR12->VAR25[VAR16[3] & 0xF];
                VAR28[3] = VAR27 += VAR12->VAR25[VAR16[3] >> 4];
                VAR28[4] = VAR27 += VAR12->VAR25[VAR16[0] & 0xF];
                VAR28[5] = VAR27 += VAR12->VAR25[VAR16[0] >> 4];
                VAR28[6] = VAR27 += VAR12->VAR25[VAR16[1] & 0xF];
                VAR28[7] = VAR27 += VAR12->VAR25[VAR16[1] >> 4];
                VAR28 += 8;
                VAR16 += 4;
                VAR9 -= 4;
            }
        }
    }
    *VAR4 = 1;
    return VAR9;
VAR33:
    FUN3(VAR2, VAR21, "");
    return VAR34;