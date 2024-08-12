static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6, int VAR7[4], int VAR8, int VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18 = 0;
    const VAR19 *VAR20;
    int VAR21 = FUN2(VAR11);
    int VAR22, VAR23;
    int VAR24, VAR25;
    VAR19 *VAR26;
    if (VAR10 < VAR27)
    {
        VAR26 = VAR13->VAR28[VAR10];
    }
    else
    {
        VAR26 = VAR13->VAR29;
        for (VAR15 = 0; VAR15 < 64; VAR15++)
            VAR26[VAR15] = VAR13->VAR30->VAR10[VAR15] * VAR10;
    }
    for (VAR15 = 0; VAR15 < VAR13->VAR31; VAR15++)
    {
        VAR25 = (VAR15 == 1 || VAR15 == 2);
        VAR24 = VAR21 + 2;
        if (VAR25)
            VAR24 += VAR13->VAR32 - 3;
        if (!VAR25 || VAR13->VAR32 == VAR33)
        {
            VAR16 = VAR8 << 4;
            VAR17 = VAR9 << 4;
            VAR22 = 4;
            VAR23 = VAR2->VAR34;
        }
        else
        {
            VAR16 = VAR8 << 3;
            VAR17 = VAR9 << 4;
            VAR22 = 2;
            VAR23 = VAR2->VAR34 >> 1;
        }
        VAR20 = (const VAR19 *)(VAR4->VAR35[VAR15] + VAR17 * VAR4->VAR36[VAR15]) + VAR16;
        FUN3(VAR13, VAR20, VAR4->VAR36[VAR15], VAR16, VAR17, VAR23, VAR2->VAR37, VAR13->VAR38[0], VAR11, VAR22);
        VAR7[VAR15] = FUN4(VAR13, VAR6, VAR20, VAR4->VAR36[VAR15], VAR11, VAR13->VAR38[0], VAR22, VAR24, VAR26);
        VAR18 += VAR7[VAR15];
    }
    return VAR18;
}