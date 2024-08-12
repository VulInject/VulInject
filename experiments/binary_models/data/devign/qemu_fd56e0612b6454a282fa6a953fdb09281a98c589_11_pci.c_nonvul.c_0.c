static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR4;
    const VAR8 *VAR9;
    char VAR10[64];
    VAR11 *VAR12;
    int VAR13, class;
    class = FUN2(VAR7->VAR14 + VAR15);
    VAR9 = VAR16;
    while (VAR9->VAR9 && class != VAR9->class)
        VAR9++;
    if (VAR9->VAR9)
    {
        snprintf(VAR10, sizeof(VAR10), "", VAR9->VAR9);
    }
    else
    {
        snprintf(VAR10, sizeof(VAR10), "", class);
    }
    FUN3(VAR2, ""
                        "",
                   VAR5, "", VAR10, FUN4(VAR7), FUN5(VAR7->VAR17), FUN6(VAR7->VAR17), FUN2(VAR7->VAR14 + VAR18), FUN2(VAR7->VAR14 + VAR19), FUN2(VAR7->VAR14 + VAR20), FUN2(VAR7->VAR14 + VAR21));
    for (VAR13 = 0; VAR13 < VAR22; VAR13++)
    {
        VAR12 = &VAR7->VAR23[VAR13];
        if (!VAR12->VAR24)
            continue;
        FUN3(VAR2, "" VAR25 "" VAR25 "", VAR5, "", VAR13, VAR12->VAR26 & VAR27 ? "" : "", VAR12->VAR28, VAR12->VAR28 + VAR12->VAR24 - 1);
    }
}