static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6[5], int VAR7, int VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = &VAR2->VAR10[VAR10];
    VAR5 **VAR13 = VAR2->VAR14[VAR9]->VAR15[VAR10];
    int VAR16 = VAR4->VAR17.VAR18[VAR9][0];
    int VAR19 = VAR4->VAR17.VAR18[VAR9][1];
    int VAR20, VAR21, VAR22, VAR23, VAR24 = 0;
    if (VAR10)
    {
        VAR16 >>= VAR2->VAR25;
        VAR19 >>= VAR2->VAR26;
    }
    VAR20 = VAR16 & ~(-1 << VAR2->VAR27);
    VAR21 = VAR19 & ~(-1 << VAR2->VAR27);
    VAR16 >>= VAR2->VAR27;
    VAR19 >>= VAR2->VAR27;
    VAR20 <<= 3 - VAR2->VAR27;
    VAR21 <<= 3 - VAR2->VAR27;
    VAR7 += VAR16;
    VAR8 += VAR19;
    VAR23 = (VAR20 | VAR21) & 1;
    if (!((VAR20 | VAR21) & 3))
    {
        VAR24 = 1;
        VAR6[0] = VAR13[(VAR21 >> 1) + (VAR20 >> 2)] + VAR8 * VAR12->VAR28 + VAR7;
    }
    else
    {
        VAR24 = 4;
        for (VAR22 = 0; VAR22 < 4; VAR22++)
            VAR6[VAR22] = VAR13[VAR22] + VAR8 * VAR12->VAR28 + VAR7;
        if (VAR20 > 4)
        {
            VAR6[0] += 1;
            VAR6[2] += 1;
            VAR7++;
        }
        if (VAR21 > 4)
        {
            VAR6[0] += VAR12->VAR28;
            VAR6[1] += VAR12->VAR28;
            VAR8++;
        }
        if (!VAR23)
        {
            if (!(VAR20 & 3))
            {
                VAR6[!VAR20] = VAR6[2 + !!VAR20];
                VAR24 = 2;
            }
            else if (!(VAR21 & 3))
            {
                VAR6[0] = VAR6[(VAR21 >> 1)];
                VAR6[1] = VAR6[(VAR21 >> 1) + 1];
                VAR24 = 2;
            }
        }
        else
        {
            if (VAR20 > 4)
            {
                FUN2(const VAR5 *, VAR6[0], VAR6[1]);
                FUN2(const VAR5 *, VAR6[2], VAR6[3]);
            }
            if (VAR21 > 4)
            {
                FUN2(const VAR5 *, VAR6[0], VAR6[2]);
                FUN2(const VAR5 *, VAR6[1], VAR6[3]);
            }
            VAR6[4] = VAR29[VAR21 & 3][VAR20 & 3];
        }
    }
    if ((unsigned)VAR7 > FUN3(VAR12->VAR30 + VAR31 / 2 - VAR12->VAR32, 0) || (unsigned)VAR8 > FUN3(VAR12->VAR33 + VAR31 / 2 - VAR12->VAR34, 0))
    {
        for (VAR22 = 0; VAR22 < VAR24; VAR22++)
        {
            FUN4(VAR2->VAR35[VAR22], VAR6[VAR22], VAR12->VAR28, VAR12->VAR32, VAR12->VAR34, VAR7, VAR8, VAR12->VAR30 + VAR31 / 2, VAR12->VAR33 + VAR31 / 2);
            VAR6[VAR22] = VAR2->VAR35[VAR22];
        }
    }
    return (VAR24 >> 1) + VAR23;
}