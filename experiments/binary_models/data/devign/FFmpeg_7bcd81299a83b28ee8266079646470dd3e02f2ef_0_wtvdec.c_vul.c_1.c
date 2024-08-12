static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[0];
    int64_t VAR14;
    int VAR15;
    if ((VAR5 & VAR16) || (VAR5 & VAR17))
        return FUN2(VAR18);
    VAR14 = VAR4;
    if (VAR7->VAR19 != VAR20)
        VAR14 -= VAR7->VAR19;
    VAR15 = FUN3(VAR7->VAR21, VAR7->VAR22, VAR14, VAR5);
    if (VAR15 < 0)
    {
        if (VAR7->VAR23 == VAR20 || VAR4 < VAR7->VAR23)
            FUN4(VAR10, 0, VAR24);
        else if (VAR12->VAR25 != VAR20 && VAR14 > VAR12->VAR25 && VAR7->VAR22)
            FUN4(VAR10, VAR7->VAR21[VAR7->VAR22 - 1].VAR26, VAR24);
        if (FUN5(VAR2, VAR27, VAR4, 0) < 0)
            return FUN2(VAR28);
        return 0;
    }
    VAR7->VAR29 = VAR7->VAR21[VAR15].VAR30;
    if (VAR7->VAR19 != VAR20)
        VAR7->VAR29 += VAR7->VAR19;
    VAR7->VAR23 = VAR7->VAR29;
    FUN4(VAR10, VAR7->VAR21[VAR15].VAR26, VAR24);
    return 0;
}