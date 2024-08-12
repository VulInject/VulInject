static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10, int VAR11)
{
    VAR1 *VAR12;
    VAR12 = FUN2(&VAR13, VAR3, VAR9, VAR10);
    if (!VAR12)
        return NULL;
    VAR12->VAR14 = NULL;
    VAR12->VAR4 = VAR4;
    VAR12->VAR6 = VAR6;
    if (VAR6->VAR15 > 1)
    {
        VAR12->VAR16 = VAR12->VAR17 = FUN3(VAR3, VAR6->VAR18);
        if (VAR11)
            FUN4(VAR6, VAR12->VAR16);
    }
    else
    {
        VAR12->VAR16 = (VAR19 *)VAR6->VAR20->VAR21;
    }
    VAR12->VAR7 = VAR7;
    VAR12->VAR22 = 0;
    VAR12->VAR23 = 0;
    VAR12->VAR24.VAR25 = 0;
    FUN5(&VAR12->VAR24.VAR26);
    return VAR12;
}