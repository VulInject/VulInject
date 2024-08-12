static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    int64_t VAR12;
    int VAR13 = 0;
    if (!VAR7->VAR14)
        return VAR15;
    if (VAR7->VAR16 && !VAR7->VAR17)
    {
        VAR9 = FUN2(VAR2, &VAR10);
        if (VAR9 < 0)
            return VAR9;
    }
    if (VAR7->VAR18)
        return FUN3(VAR2, VAR4, VAR5);
    VAR11 = FUN4(VAR2, VAR4, VAR5);
    while (VAR11 < 0)
    {
        uint64_t VAR19 = VAR2->VAR20 ? 0 : VAR7->VAR21;
        if (VAR11 == VAR22)
            break;
        if (VAR2->VAR20 && !VAR7->VAR23)
            break;
        if (!(VAR7->VAR24 && VAR7->VAR25 > 0 && VAR7->VAR21 < VAR7->VAR25) && !(VAR7->VAR26 && VAR11 == VAR15))
            break;
        if (VAR13 > VAR7->VAR27)
            return FUN5(VAR28);
        FUN6(VAR2, VAR29, "" VAR30 "", VAR7->VAR21, VAR13, FUN7(VAR11));
        VAR9 = FUN8(1000U * 1000 * VAR13, &VAR2->VAR31);
        if (VAR9 != FUN5(VAR32))
            return VAR9;
        VAR13 = 1 + 2 * VAR13;
        VAR12 = FUN9(VAR2, VAR19, VAR33, 1);
        if (VAR12 >= 0 && VAR12 != VAR19)
        {
            FUN6(VAR2, VAR34, "" VAR30 "", VAR19);
            return VAR11;
        }
        VAR11 = FUN4(VAR2, VAR4, VAR5);
    }
    return VAR11;
}