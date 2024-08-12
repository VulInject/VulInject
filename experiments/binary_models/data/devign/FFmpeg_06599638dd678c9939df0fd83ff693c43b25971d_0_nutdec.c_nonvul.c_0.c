static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12, VAR13, VAR14;
    int64_t VAR15, VAR16;
    VAR17 *VAR18;
    VAR12 = FUN2(VAR2, &VAR15, &VAR13, VAR5);
    if (VAR12 < 0)
        return -1;
    VAR18 = &VAR2->VAR19[VAR13];
    if (VAR18->VAR20 & VAR21)
        VAR18->VAR22 = 0;
    VAR14 = VAR7->VAR23[VAR13]->VAR14;
    VAR16 = VAR7->VAR23[VAR13]->VAR16;
    if ((VAR14 >= VAR24 && !(VAR18->VAR20 & VAR21)) || (VAR14 >= VAR25 && VAR16 != VAR26 && VAR16 > VAR15) || VAR14 >= VAR27 || VAR18->VAR22)
    {
        FUN3(VAR10, VAR12);
        return 1;
    }
    FUN4(VAR10, VAR4, VAR12);
    VAR4->VAR28 = VAR13;
    if (VAR18->VAR20 & VAR21)
        VAR4->VAR29 |= VAR30;
    VAR4->VAR15 = VAR15;
    return 0;
}