int FUN1(VAR1 *VAR2, const double *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR5 = FUN2(VAR2->VAR9);
    VAR6 = FUN2(VAR2->VAR10);
    if (VAR5 < 0 || VAR5 > VAR11 || VAR6 < 0 || VAR6 > VAR11)
    {
        FUN3(VAR2, VAR12, "");
        return FUN4(VAR13);
    }
    if (VAR2->VAR14->VAR3)
        FUN5(VAR2->VAR14->VAR3);
    VAR2->VAR14->VAR15##VAR16[0] = FUN6(VAR6 * VAR5 * sizeof(*VAR2->VAR14->VAR15##VAR16[0]));
    if (!VAR2->VAR14->VAR15##VAR16[0])
        return FUN4(VAR17);
    for (VAR8 = 0; VAR8 < VAR6; VAR8++)
    {
        if (VAR8 > 0)
            VAR2->VAR14->VAR15##VAR16[VAR8] = VAR2->VAR14->VAR15##VAR16[VAR8 - 1] + VAR5;
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            double VAR18 = VAR3[VAR8 * VAR4 + VAR7];
            VAR2->VAR14->VAR15##VAR16[VAR8][VAR7] = VAR19;
        }
    }
    VAR2->VAR14->VAR3 = (void **)VAR2->VAR14->VAR15##VAR16;
    switch (VAR2->VAR20)
    {
    case VAR21:
        FUN7(VAR22, FUN8(FUN9(256.0 * VAR18)))
        break;
    case VAR23:
        FUN7(VAR24, FUN10(FUN11(32768.0 * VAR18)))
        break;
    case VAR25:
        FUN7(VAR26, VAR18)
        break;
    default:
        FUN3(VAR2, VAR12, "");
        return FUN4(VAR13);
    }
    return 0;
}