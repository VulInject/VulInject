static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *const VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    const VAR12 *VAR14 = VAR13 + VAR6->VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    if (VAR6->VAR15 < 32 + VAR2->VAR20 + VAR2->VAR21 * VAR2->VAR20 * 5 / 8)
    {
        FUN2(VAR2, VAR22, "");
        return FUN3(VAR23);
    }
    if ((VAR19 = FUN4(VAR2, VAR11, 0)) < 0)
        return VAR19;
    VAR11->VAR24 = VAR25;
    VAR11->VAR26 = 1;
    for (VAR16 = 0; VAR16 < 16; VAR16++)
    {
        VAR8->VAR27[VAR16] = *VAR13++;
        VAR13++;
    }
    for (VAR18 = 0; VAR18 < VAR2->VAR20; VAR18++)
    {
        int VAR28;
        VAR12 *VAR29 = &VAR11->VAR3[0][VAR18 * VAR11->VAR30[0]];
        if ((VAR18 & 3) == 0)
        {
            VAR12 *VAR31 = &VAR11->VAR3[1][(VAR18 >> 2) * VAR11->VAR30[1]];
            VAR12 *VAR32 = &VAR11->VAR3[2][(VAR18 >> 2) * VAR11->VAR30[2]];
            FUN5(VAR14 - VAR13 >= 4 + VAR2->VAR21);
            for (VAR16 = 0; VAR16 < 4; VAR16++)
                VAR8->VAR28[VAR16] = *VAR13++;
            VAR28 = VAR8->VAR28[0] - VAR8->VAR27[VAR13[2] & 0xF];
            for (VAR17 = 0; VAR17 < VAR2->VAR21; VAR17 += 4)
            {
                VAR29[0] = VAR28 += VAR8->VAR27[VAR13[2] & 0xF];
                VAR29[1] = VAR28 += VAR8->VAR27[VAR13[2] >> 4];
                VAR29[2] = VAR28 += VAR8->VAR27[VAR13[0] & 0xF];
                VAR29[3] = VAR28 += VAR8->VAR27[VAR13[0] >> 4];
                VAR29 += 4;
                *VAR31++ = VAR13[3];
                *VAR32++ = VAR13[1];
                VAR13 += 4;
            }
        }
        else
        {
            FUN5(VAR14 - VAR13 >= VAR2->VAR21 / 2);
            VAR28 = VAR8->VAR28[VAR18 & 3] - VAR8->VAR27[VAR13[2] & 0xF];
            for (VAR17 = 0; VAR17 < VAR2->VAR21; VAR17 += 8)
            {
                VAR29[0] = VAR28 += VAR8->VAR27[VAR13[2] & 0xF];
                VAR29[1] = VAR28 += VAR8->VAR27[VAR13[2] >> 4];
                VAR29[2] = VAR28 += VAR8->VAR27[VAR13[3] & 0xF];
                VAR29[3] = VAR28 += VAR8->VAR27[VAR13[3] >> 4];
                VAR29[4] = VAR28 += VAR8->VAR27[VAR13[0] & 0xF];
                VAR29[5] = VAR28 += VAR8->VAR27[VAR13[0] >> 4];
                VAR29[6] = VAR28 += VAR8->VAR27[VAR13[1] & 0xF];
                VAR29[7] = VAR28 += VAR8->VAR27[VAR13[1] >> 4];
                VAR29 += 8;
                VAR13 += 4;
            }
        }
    }
    *VAR4 = 1;
    return VAR13 - VAR6->VAR3;
}