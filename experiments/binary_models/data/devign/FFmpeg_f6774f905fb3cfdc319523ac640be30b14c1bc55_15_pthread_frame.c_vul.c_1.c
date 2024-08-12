void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12, *VAR13;
    FF_DISABLE_DEPRECATION_WARNINGS int VAR14 = !(VAR2->VAR15 & VAR16) || VAR2->VAR17 || (!VAR2->VAR18 && VAR2->VAR19 == VAR20);
    FF_ENABLE_DEPRECATION_WARNINGS if (!VAR4->VAR4->VAR21[0]) return;
    if (VAR2->VAR22 & VAR23)
        FUN2(VAR2, VAR24, "", VAR4);
    FUN3(&VAR4->VAR25);
    VAR4->VAR26 = NULL;
    if (VAR14)
    {
        FUN4(VAR4->VAR4);
        return;
    }
    VAR10 = VAR6->VAR27;
    pthread_mutex_lock(&VAR10->VAR28);
    if (VAR6->VAR29 + 1 >= VAR30 / sizeof(*VAR6->VAR31))
        goto VAR32;
    VAR13 = FUN5(VAR6->VAR31, &VAR6->VAR33, (VAR6->VAR29 + 1) * sizeof(*VAR6->VAR31));
    if (!VAR13)
        goto VAR32;
    VAR6->VAR31 = VAR13;
    VAR12 = &VAR6->VAR31[VAR6->VAR29];
    FUN6(VAR12, VAR4->VAR4);
    VAR6->VAR29++;
VAR32:
    pthread_mutex_unlock(&VAR10->VAR28);
}