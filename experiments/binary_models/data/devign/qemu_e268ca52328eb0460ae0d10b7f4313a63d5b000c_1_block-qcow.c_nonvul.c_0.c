static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12 = VAR3->VAR10;
    VAR13 *VAR14;
    VAR12->VAR15 = -1;
    VAR14 = FUN2(VAR3, VAR9, VAR10);
    if (!VAR14)
        return NULL;
    VAR14->VAR16 = NULL;
    VAR14->VAR4 = VAR4;
    VAR14->VAR6 = VAR6;
    if (VAR6->VAR17 > 1)
    {
        VAR14->VAR18 = VAR14->VAR19 = FUN3(VAR3, VAR6->VAR20);
        FUN4(VAR6, VAR14->VAR18);
    }
    else
    {
        VAR14->VAR18 = (VAR21 *)VAR6->VAR22->VAR23;
    }
    VAR14->VAR7 = VAR7;
    VAR14->VAR24 = 0;
    FUN5(VAR14, 0);
    return &VAR14->VAR25;
}