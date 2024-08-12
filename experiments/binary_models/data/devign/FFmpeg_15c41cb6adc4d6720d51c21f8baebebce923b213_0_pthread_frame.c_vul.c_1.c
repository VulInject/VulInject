void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR2->VAR8 ? (VAR7 *)VAR2->VAR8->VAR9 : NULL;
    if (!VAR8 || FUN2(&VAR8[VAR4], VAR10) >= VAR3)
        return;
    VAR6 = VAR2->VAR11[VAR4]->VAR12->VAR13;
    pthread_mutex_lock(&VAR6->VAR14);
    if (VAR2->VAR11[VAR4]->VAR15 & VAR16)
        FUN3(VAR2->VAR11[VAR4], VAR17, "", VAR3, VAR4, VAR8);
    while (FUN2(&VAR8[VAR4], VAR18) < VAR3)
        FUN4(&VAR6->VAR19, &VAR6->VAR14);
    pthread_mutex_unlock(&VAR6->VAR14);
}