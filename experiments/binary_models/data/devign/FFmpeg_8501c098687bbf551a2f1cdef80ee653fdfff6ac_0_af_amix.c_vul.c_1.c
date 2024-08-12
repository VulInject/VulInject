static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR5->VAR9;
    VAR10 *VAR11, *VAR12;
    int VAR13;
    FUN2(VAR8, VAR3);
    VAR11 = FUN3(VAR2, VAR14, VAR3);
    if (!VAR11)
        return FUN4(VAR15);
    VAR12 = FUN3(VAR2, VAR14, VAR3);
    if (!VAR12)
        return FUN4(VAR15);
    for (VAR13 = 0; VAR13 < VAR8->VAR16; VAR13++)
    {
        if (VAR8->VAR17[VAR13] == VAR18)
        {
            int VAR19, VAR20, VAR21;
            FUN5(VAR8->VAR22[VAR13], (void **)VAR12->VAR23, VAR3);
            VAR19 = VAR8->VAR24 ? VAR8->VAR25 : 1;
            VAR20 = VAR3 * (VAR8->VAR24 ? 1 : VAR8->VAR25);
            VAR20 = FUN6(VAR20, 16);
            for (VAR21 = 0; VAR21 < VAR19; VAR21++)
            {
                VAR8->VAR26.FUN7((float *)VAR11->VAR23[VAR21], (float *)VAR12->VAR23[VAR21], VAR8->VAR27[VAR13], VAR20);
            }
        }
    }
    FUN8(VAR12);
    VAR11->VAR28 = VAR8->VAR29;
    if (VAR8->VAR29 != VAR30)
        VAR8->VAR29 += VAR3;
    return FUN9(VAR2, VAR11);
}