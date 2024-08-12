int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9;
    if (VAR3 != VAR2->VAR7->VAR3 || VAR4 != VAR2->VAR7->VAR4)
    {
        FUN2(VAR2->VAR7, 1);
        VAR9 = FUN3(VAR2->VAR7, VAR3, VAR4);
        if (VAR9 < 0)
            return VAR9;
    }
    VAR2->VAR10 = (VAR2->VAR7->VAR11 + 15) / 16;
    VAR2->VAR12 = (VAR2->VAR7->VAR13 + 15) / 16;
    VAR2->VAR14 = VAR5 || VAR7->VAR15 == VAR16 && FUN4(VAR2->VAR17, VAR7->VAR18) > 1;
    if (!VAR2->VAR14)
    {
        VAR2->VAR19 = FUN5((VAR2->VAR10 + VAR2->VAR12 * 2 + 1) * sizeof(*VAR2->VAR20));
        VAR2->VAR21 = FUN5(VAR2->VAR10 * 4);
    }
    else
        VAR2->VAR19 = FUN5((VAR2->VAR10 + 2) * (VAR2->VAR12 + 2) * sizeof(*VAR2->VAR20));
    VAR2->VAR22 = FUN5(VAR2->VAR10 * sizeof(*VAR2->VAR22));
    VAR2->VAR23 = FUN5((VAR2->VAR10 + 1) * sizeof(*VAR2->VAR23));
    VAR2->VAR24 = FUN5(VAR25 * sizeof(VAR26));
    if (!VAR2->VAR19 || !VAR2->VAR22 || !VAR2->VAR23 || !VAR2->VAR24 || (!VAR2->VAR21 && !VAR2->VAR14))
    {
        FUN6(VAR2);
        return FUN7(VAR27);
    }
    for (VAR8 = 0; VAR8 < VAR25; VAR8++)
    {
        VAR2->VAR24[VAR8].VAR28 = FUN5(VAR2->VAR10 * sizeof(*VAR2->VAR24[0].VAR28));
        if (!VAR2->VAR24[VAR8].VAR28)
        {
            FUN6(VAR2);
            return FUN7(VAR27);
        }
        pthread_mutex_init(&VAR2->VAR24[VAR8].VAR29, NULL);
        pthread_cond_init(&VAR2->VAR24[VAR8].VAR30, NULL);
    }
    VAR2->VAR20 = VAR2->VAR19 + 1;
    return 0;
}