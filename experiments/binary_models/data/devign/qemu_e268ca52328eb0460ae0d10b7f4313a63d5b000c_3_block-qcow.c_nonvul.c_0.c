static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12;
    VAR12 = FUN2(VAR3, VAR9, VAR10);
    if (!VAR12)
        return NULL;
    VAR12->VAR13 = NULL;
    VAR12->VAR4 = VAR4;
    VAR12->VAR6 = VAR6;
    if (VAR6->VAR14 > 1)
        VAR12->VAR15 = VAR12->VAR16 = FUN3(VAR3, VAR6->VAR17);
    else
        VAR12->VAR15 = (VAR18 *)VAR6->VAR19->VAR20;
    VAR12->VAR7 = VAR7;
    VAR12->VAR21 = 0;
    VAR12->VAR22 = 0;
    FUN4(VAR12, 0);
    return &VAR12->VAR23;
}