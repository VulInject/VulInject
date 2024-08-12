static double FUN1(VAR1 *VAR2, VAR3 *VAR4, double VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    const int VAR12 = VAR4->VAR13;
    const double VAR14 = VAR7->VAR15[VAR16];
    const double VAR17 = VAR7->VAR15[VAR7->VAR18];
    if (VAR12 == VAR19 && (VAR10->VAR20 > 0.0 || VAR7->VAR18 == VAR16))
        VAR5 = VAR14 * FUN2(VAR10->VAR20) + VAR10->VAR21;
    else if (VAR12 == VAR22 && VAR10->VAR23 > 0.0)
        VAR5 = VAR17 * VAR10->VAR23 + VAR10->VAR24;
    if (VAR7->VAR18 == VAR12 || VAR12 != VAR19)
    {
        double VAR25 = VAR7->VAR15[VAR12];
        const int VAR26 = VAR27 * VAR10->VAR28;
        if (VAR5 > VAR25 + VAR26)
            VAR5 = VAR25 + VAR26;
        else if (VAR5 < VAR25 - VAR26)
            VAR5 = VAR25 - VAR26;
    }
    VAR7->VAR15[VAR12] = VAR5;
    if (VAR12 != VAR22)
        VAR7->VAR18 = VAR12;
    return VAR5;