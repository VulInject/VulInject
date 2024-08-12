VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    uintptr_t VAR7 = (VAR8)VAR5;
    VAR9 *VAR10 = FUN2(VAR3->VAR11, &VAR7);
    VAR1 *VAR12;
    char VAR13[128];
    if (!VAR10)
    {
        VAR8 *VAR14 = FUN3(sizeof(*VAR14));
        *VAR14 = (VAR8)VAR5;
        VAR10 = FUN4(sizeof(VAR9) + sizeof(VAR1 *) * VAR15);
        VAR10->VAR5 = VAR5;
        FUN5(VAR3->VAR11, VAR14, VAR10);
    }
    VAR12 = VAR10->VAR16[VAR6];
    if (!VAR12)
    {
        snprintf(VAR13, sizeof(VAR13), "", VAR6);
        VAR10->VAR16[VAR6] = VAR12 = FUN4(sizeof(VAR1));
        VAR12->VAR5 = VAR5;
        VAR12->VAR6 = (VAR17)VAR6;
        VAR12->VAR18 = VAR3;
        VAR12->VAR19.VAR20 = 0;
        FUN6(&VAR12->VAR21, FUN7(VAR3), &VAR3->VAR22, "", VAR23);
        FUN8(&VAR12->VAR24, FUN7(VAR3), "", FUN9(), 0, FUN10(FUN9()));
        FUN11(&VAR12->VAR25, FUN7(VAR3), &VAR26, VAR3, "", VAR27);
        FUN12(&VAR12->VAR28, FUN7(VAR3), "", VAR23);
        FUN13(&VAR12->VAR28, VAR29, &VAR12->VAR25, 64);
        FUN14(&VAR12->VAR30, &VAR12->VAR28, VAR13);
        FUN13(&VAR12->VAR28, 0, &VAR12->VAR24, 1);
        FUN13(&VAR12->VAR28, 0, &VAR12->VAR21, 1);
        FUN15(VAR12);
    }
    return VAR12;
}