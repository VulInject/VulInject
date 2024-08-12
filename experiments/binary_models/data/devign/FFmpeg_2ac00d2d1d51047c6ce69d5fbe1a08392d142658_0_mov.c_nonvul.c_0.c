static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    unsigned int VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    VAR9 = VAR7->VAR15;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR11 = FUN4(VAR4);
    FUN5(VAR2->VAR12, VAR16, "", VAR2->VAR12->VAR13 - 1, VAR11);
    if (!VAR11)
        return 0;
    if (VAR11 >= VAR17 / sizeof(*VAR9->VAR18))
        return VAR19;
    VAR9->VAR18 = FUN6(VAR11 * sizeof(*VAR9->VAR18));
    if (!VAR9->VAR18)
        return FUN7(VAR20);
    for (VAR10 = 0; VAR10 < VAR11 && !VAR4->VAR21; VAR10++)
    {
        VAR9->VAR18[VAR10].VAR22 = FUN4(VAR4);
        VAR9->VAR18[VAR10].VAR23 = FUN4(VAR4);
        VAR9->VAR18[VAR10].VAR24 = FUN4(VAR4);
        if (VAR9->VAR18[VAR10].VAR24 <= 0 || VAR9->VAR18[VAR10].VAR24 > VAR9->VAR25)
        {
            VAR9->VAR18[VAR10].VAR24 = 1;
            if (VAR2->VAR12->VAR26 & VAR27)
            {
                FUN5(VAR2->VAR12, VAR28, "");
                return VAR19;
            }
        }
    }
    VAR9->VAR29 = VAR10;
    if (VAR4->VAR21)
        return VAR30;
    return 0;
}