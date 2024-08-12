static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    const VAR7 *VAR8 = FUN2(VAR2->VAR9);
    int VAR10;
    VAR4->VAR11 = VAR8->VAR12;
    VAR4->VAR13 = VAR8->VAR14;
    VAR4->VAR15 = VAR8->VAR16[0].VAR17 + 1;
    VAR4->VAR18 = FUN3(VAR2->VAR19 * sizeof(*VAR4->VAR18));
    if (!VAR4->VAR18)
        return FUN4(VAR20);
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        VAR4->VAR21[VAR10] = FUN5(VAR4->VAR22[VAR10], VAR4->VAR15);
        if (!VAR4->VAR21[VAR10])
            return FUN4(VAR20);
    }
    if (VAR23)
        FUN6(VAR4);
    return 0;