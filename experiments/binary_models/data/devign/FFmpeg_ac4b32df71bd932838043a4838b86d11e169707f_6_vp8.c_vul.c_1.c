void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, uint8_t VAR9[9], uint8_t VAR10[9])
{
    int VAR11, VAR12, VAR13, VAR14 = 0, VAR15 = 3;
    int VAR16, VAR17, VAR18 = 0;
    int VAR19 = VAR8->VAR19;
    int VAR20 = 0;
    if (VAR8->VAR21 != VAR22 && VAR8->VAR21 != VAR23)
    {
        VAR16 = VAR9[8] + VAR10[8];
        VAR17 = FUN2(VAR6, VAR4->VAR20, VAR2->VAR24->VAR25[1], 0, VAR16, VAR2->VAR26[VAR19].VAR27);
        VAR10[8] = VAR9[8] = !!VAR17;
        if (VAR17)
        {
            VAR18 += VAR17;
            VAR20 = 1;
            if (VAR17 == 1)
                VAR2->VAR28.FUN3(VAR4->VAR29, VAR4->VAR20);
            else
                VAR2->VAR28.FUN4(VAR4->VAR29, VAR4->VAR20);
        }
        VAR14 = 1;
        VAR15 = 0;
    }
    for (VAR13 = 0; VAR13 < 4; VAR13++)
        for (VAR12 = 0; VAR12 < 4; VAR12++)
        {
            VAR16 = VAR10[VAR13] + VAR9[VAR12];
            VAR17 = FUN2(VAR6, VAR4->VAR29[VAR13][VAR12], VAR2->VAR24->VAR25[VAR15], VAR14, VAR16, VAR2->VAR26[VAR19].VAR30);
            VAR4->VAR31[VAR13][VAR12] = VAR17 + VAR20;
            VAR9[VAR12] = VAR10[VAR13] = !!VAR17;
            VAR18 += VAR17;
        }
    for (VAR11 = 4; VAR11 < 6; VAR11++)
        for (VAR13 = 0; VAR13 < 2; VAR13++)
            for (VAR12 = 0; VAR12 < 2; VAR12++)
            {
                VAR16 = VAR10[VAR11 + 2 * VAR13] + VAR9[VAR11 + 2 * VAR12];
                VAR17 = FUN2(VAR6, VAR4->VAR29[VAR11][(VAR13 << 1) + VAR12], VAR2->VAR24->VAR25[2], 0, VAR16, VAR2->VAR26[VAR19].VAR32);
                VAR4->VAR31[VAR11][(VAR13 << 1) + VAR12] = VAR17;
                VAR9[VAR11 + 2 * VAR12] = VAR10[VAR11 + 2 * VAR13] = !!VAR17;
                VAR18 += VAR17;
            }
    if (!VAR18)
        VAR8->VAR33 = 1;
}