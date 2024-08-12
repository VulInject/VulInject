static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR14 *VAR15;
    int VAR16, VAR17 = 0;
    if ((VAR16 = FUN2(VAR2, VAR4, VAR18 + VAR19)) < 0)
        return VAR16;
    VAR15 = (const VAR14 *)VAR6->VAR20[0];
    for (VAR8 = 0; VAR8 < VAR21; VAR8++)
    {
        for (VAR10 = 0; VAR10 < VAR12->VAR22 + 1; VAR10++)
        {
            VAR17 = VAR12->VAR23[VAR10];
            if (VAR17 >= 0)
            {
                for (VAR9 = 0; VAR9 < 32; VAR9++)
                {
                    VAR12->VAR24[VAR9] = VAR15[VAR2->VAR25 * (32 * VAR8 + VAR9) + VAR10] << 16;
                }
                FUN3(VAR12, VAR12->VAR24, &VAR12->VAR26[VAR8][VAR17][0], VAR17);
            }
        }
    }
    if (VAR12->VAR27)
    {
        for (VAR8 = 0; VAR8 < VAR21 / 2; VAR8++)
        {
            for (VAR9 = 0; VAR9 < VAR28; VAR9++)
                VAR12->VAR24[VAR9] = VAR15[VAR2->VAR25 * (VAR28 * VAR8 + VAR9) + VAR12->VAR29] << 16;
            VAR12->VAR30[VAR8] = FUN4(VAR12, VAR12->VAR24);
        }
    }
    FUN5(VAR12, VAR12->VAR26, VAR4->VAR20);
    VAR4->VAR31 = VAR12->VAR32;
    *VAR7 = 1;
    return 0;
}