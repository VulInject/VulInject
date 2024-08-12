static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR6 *VAR9 = VAR4->VAR8;
    VAR10 **VAR11;
    int VAR12;
    VAR11 = FUN2(VAR9->VAR13, sizeof(*VAR9->VAR13) * (VAR7->VAR14 + VAR9->VAR14));
    if (!VAR11)
        return FUN3(VAR15);
    VAR9->VAR13 = VAR11;
    for (VAR12 = 0; VAR12 < VAR7->VAR14; VAR12++)
    {
        VAR10 *VAR16 = VAR7->VAR13[VAR12], *VAR17;
        int64_t VAR18 = (VAR4->VAR18 == VAR19) ? 0 : VAR4->VAR18;
        int64_t VAR20 = FUN4(VAR18 - VAR2->VAR21, VAR22, VAR16->VAR23);
        int64_t VAR24 = (VAR4->VAR25 == VAR26) ? VAR26 : FUN4(VAR4->VAR25, VAR22, VAR16->VAR23);
        if (VAR16->VAR27 < VAR20)
            continue;
        if (VAR24 != VAR26 && VAR16->VAR28 > VAR24 + VAR20)
            break;
        VAR17 = FUN5(sizeof(VAR10));
        if (!VAR17)
            return FUN3(VAR15);
        VAR17->VAR29 = VAR16->VAR29;
        VAR17->VAR23 = VAR16->VAR23;
        VAR17->VAR28 = FUN6(0, VAR16->VAR28 - VAR20);
        VAR17->VAR27 = FUN7(VAR24, VAR16->VAR27 - VAR20);
        if (VAR5)
            FUN8(&VAR17->VAR30, VAR16->VAR30, 0);
        VAR9->VAR13[VAR9->VAR14++] = VAR17;
    }
    return 0;
}