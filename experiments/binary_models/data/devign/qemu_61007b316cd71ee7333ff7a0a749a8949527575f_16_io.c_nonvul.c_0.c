VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10;
    VAR11 *VAR12;
    FUN2(VAR3, VAR4, VAR5, VAR8);
    VAR12 = FUN3(&VAR13, VAR3, VAR7, VAR8);
    VAR12->VAR14 = true;
    VAR12->VAR15.VAR16 = -VAR17;
    VAR12->VAR15.VAR18 = VAR4;
    VAR12->VAR15.VAR5 = VAR5;
    VAR10 = FUN4(VAR19);
    FUN5(VAR10, VAR12);
    FUN6(VAR12);
    return &VAR12->VAR20;
}