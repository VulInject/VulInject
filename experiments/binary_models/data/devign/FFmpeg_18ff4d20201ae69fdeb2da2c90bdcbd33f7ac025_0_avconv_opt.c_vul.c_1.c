static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR6 *VAR9 = VAR4->VAR8;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR7->VAR11; VAR10++)
    {
        VAR12 *VAR13 = VAR7->VAR14[VAR10], *VAR15;
        int64_t VAR16 = FUN2(VAR4->VAR17 - VAR2->VAR18, VAR19, VAR13->VAR20);
        int64_t VAR21 = (VAR4->VAR22 == VAR23) ? VAR23 : FUN2(VAR4->VAR22, VAR19, VAR13->VAR20);
        if (VAR13->VAR24 < VAR16)
            continue;
        if (VAR21 != VAR23 && VAR13->VAR25 > VAR21 + VAR16)
            break;
        VAR15 = FUN3(sizeof(VAR12));
        if (!VAR15)
            return FUN4(VAR26);
        VAR15->VAR27 = VAR13->VAR27;
        VAR15->VAR20 = VAR13->VAR20;
        VAR15->VAR25 = FUN5(0, VAR13->VAR25 - VAR16);
        VAR15->VAR24 = FUN6(VAR21, VAR13->VAR24 - VAR16);
        if (VAR5)
            FUN7(&VAR15->VAR28, VAR13->VAR28, 0);
        VAR9->VAR11++;
        VAR9->VAR14 = FUN8(VAR9->VAR14, sizeof(VAR12) * VAR9->VAR11);
        if (!VAR9->VAR14)
            return FUN4(VAR26);
        VAR9->VAR14[VAR9->VAR11 - 1] = VAR15;
    }
    return 0;
}