static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR3 *VAR11;
    int VAR12;
    VAR4->VAR13->VAR14 = VAR9->VAR14;
    VAR4->VAR13->VAR15 = VAR9->VAR15;
    VAR11 = FUN2(VAR4, ~0);
    VAR9->VAR16[VAR17] = VAR4->VAR18 == VAR19 ? VAR20 : VAR4->VAR18 * FUN3(VAR2->VAR21);
    VAR9->VAR16[VAR22] = VAR4->VAR23 == -1 ? VAR20 : VAR4->VAR23;
    VAR9->VAR16[VAR24] = FUN4(VAR9->VAR25, VAR9->VAR16, NULL);
    VAR9->VAR16[VAR26] = FUN4(VAR9->VAR27, VAR9->VAR16, NULL);
    VAR9->VAR16[VAR24] = FUN4(VAR9->VAR25, VAR9->VAR16, NULL);
    FUN5(&VAR9->VAR28, VAR9->VAR16[VAR24]);
    FUN5(&VAR9->VAR29, VAR9->VAR16[VAR26]);
    if (VAR9->VAR28 < 0)
        VAR9->VAR28 = 0;
    if (VAR9->VAR29 < 0)
        VAR9->VAR29 = 0;
    if ((unsigned)VAR9->VAR28 + (unsigned)VAR9->VAR14 > VAR2->VAR14)
        VAR9->VAR28 = VAR2->VAR14 - VAR9->VAR14;
    if ((unsigned)VAR9->VAR29 + (unsigned)VAR9->VAR15 > VAR2->VAR15)
        VAR9->VAR29 = VAR2->VAR15 - VAR9->VAR15;
    VAR9->VAR28 &= ~((1 << VAR9->VAR30) - 1);
    VAR9->VAR29 &= ~((1 << VAR9->VAR31) - 1);
    FUN6(VAR6, VAR32, "", (int)VAR9->VAR16[VAR33], VAR9->VAR16[VAR17], VAR9->VAR28, VAR9->VAR29, VAR9->VAR28 + VAR9->VAR14, VAR9->VAR29 + VAR9->VAR15);
    VAR11->VAR34[0] += VAR9->VAR29 * VAR11->VAR35[0];
    VAR11->VAR34[0] += VAR9->VAR28 * VAR9->VAR36[0];
    if (!(VAR37[VAR2->VAR38].VAR39 & VAR40))
    {
        for (VAR12 = 1; VAR12 < 3; VAR12++)
        {
            if (VAR11->VAR34[VAR12])
            {
                VAR11->VAR34[VAR12] += (VAR9->VAR29 >> VAR9->VAR31) * VAR11->VAR35[VAR12];
                VAR11->VAR34[VAR12] += (VAR9->VAR28 * VAR9->VAR36[VAR12]) >> VAR9->VAR30;
            }
        }
    }
    if (VAR11->VAR34[3])
    {
        VAR11->VAR34[3] += VAR9->VAR29 * VAR11->VAR35[3];
        VAR11->VAR34[3] += VAR9->VAR28 * VAR9->VAR36[3];
    }
    FUN7(VAR2->VAR7->VAR41[0], VAR11);