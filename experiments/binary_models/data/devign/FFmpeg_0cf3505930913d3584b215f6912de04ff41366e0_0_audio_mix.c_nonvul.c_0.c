int FUN1(VAR1 *VAR2, const double *VAR3, int VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7 <= 0 || VAR2->VAR7 > VAR8 || VAR2->VAR9 <= 0 || VAR2->VAR9 > VAR8)
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return FUN3(VAR12);
    }
    if (VAR2->VAR3)
    {
        FUN4(VAR2->VAR3[0]);
        VAR2->VAR3 = NULL;
    }
    VAR2->VAR13##VAR14[0] = FUN5(VAR2->VAR9 * VAR2->VAR7 * sizeof(*VAR2->VAR13##VAR14[0]));
    if (!VAR2->VAR13##VAR14[0])
        return FUN3(VAR15);
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
    {
        if (VAR6 > 0)
            VAR2->VAR13##VAR14[VAR6] = VAR2->VAR13##VAR14[VAR6 - 1] + VAR2->VAR7;
        for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
        {
            double VAR16 = VAR3[VAR6 * VAR4 + VAR5];
            VAR2->VAR13##VAR14[VAR6][VAR5] = VAR17;
        }
    }
    VAR2->VAR3 = (void **)VAR2->VAR13##VAR14;
    switch (VAR2->VAR18)
    {
    case VAR19:
        FUN6(VAR20, FUN7(FUN8(256.0 * VAR16)))
        break;
    case VAR21:
        FUN6(VAR22, FUN9(FUN10(32768.0 * VAR16)))
        break;
    case VAR23:
        FUN6(VAR24, VAR16)
        break;
    default:
        FUN2(VAR2->VAR10, VAR11, "");
        return FUN3(VAR12);
    }
    return 0;
}