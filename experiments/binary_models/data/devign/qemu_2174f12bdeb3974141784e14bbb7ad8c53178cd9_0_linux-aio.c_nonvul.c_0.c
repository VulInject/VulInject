VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6, int64_t VAR7, VAR8 *VAR9, int VAR10, VAR11 *VAR12, void *VAR13, int VAR14)
{
    struct VAR15 *VAR16;
    off_t VAR17 = VAR7 * VAR18;
    int VAR19;
    VAR16 = FUN2(&VAR20, VAR3, VAR12, VAR13);
    VAR16->VAR21 = VAR10 * VAR18;
    VAR16->VAR22 = VAR5;
    VAR16->VAR19 = -VAR23;
    VAR16->VAR24 = (VAR14 == VAR25);
    VAR16->VAR9 = VAR9;
    VAR19 = FUN3(VAR6, VAR16, VAR17, VAR14);
    if (VAR19 < 0)
    {
        FUN4(VAR16);
        return NULL;
    }
    return &VAR16->VAR26;
}