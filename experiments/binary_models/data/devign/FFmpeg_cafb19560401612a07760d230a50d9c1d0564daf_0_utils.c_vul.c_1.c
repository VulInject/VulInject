static void FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10[VAR3];
    VAR11 *VAR12 = VAR2->VAR13->VAR14 ? VAR2->VAR13->VAR14 : VAR2->VAR13->VAR15;
    int64_t VAR16[VAR17 + 1];
    int64_t VAR18;
    int VAR19, VAR20;
    if (VAR9->VAR21 != VAR22 || VAR4 == VAR22 || VAR9->VAR23 == VAR22 || FUN2(VAR4))
        return;
    VAR20 = VAR9->VAR24->VAR25;
    VAR9->VAR21 = VAR4 - (VAR9->VAR23 - VAR26);
    VAR9->VAR23 = VAR4;
    VAR18 = VAR9->VAR21 - VAR26;
    for (VAR19 = 0; VAR19 < VAR17 + 1; VAR19++)
        VAR16[VAR19] = VAR22;
    if (FUN2(VAR5))
        VAR5 += VAR18;
    for (; VAR12; VAR12 = FUN3(VAR2, VAR9, VAR12))
    {
        if (VAR12->VAR7.VAR3 != VAR3)
            continue;
        if (FUN2(VAR12->VAR7.VAR5))
            VAR12->VAR7.VAR5 += VAR18;
        if (FUN2(VAR12->VAR7.VAR4))
            VAR12->VAR7.VAR4 += VAR18;
        if (VAR9->VAR27 == VAR22 && VAR12->VAR7.VAR5 != VAR22)
            VAR9->VAR27 = VAR12->VAR7.VAR5;
        if (VAR12->VAR7.VAR5 != VAR22 && VAR20 <= VAR17 && FUN4(VAR9))
        {
            VAR16[0] = VAR12->VAR7.VAR5;
            for (VAR19 = 0; VAR19 < VAR20 && VAR16[VAR19] > VAR16[VAR19 + 1]; VAR19++)
                FUN5(VAR28, VAR16[VAR19], VAR16[VAR19 + 1]);
            VAR12->VAR7.VAR4 = FUN6(VAR9, VAR16, VAR12->VAR7.VAR4);
        }
    }
    if (VAR9->VAR27 == VAR22)
        VAR9->VAR27 = VAR5;
}