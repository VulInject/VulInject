int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint64_t VAR9, VAR10;
    int64_t VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR9 = VAR3 >> VAR7->VAR15;
    if (VAR9 >= VAR7->VAR16)
    {
        *VAR5 = 0;
        return 0;
    }
    VAR11 = VAR7->VAR17[VAR9] & VAR18;
    if (!VAR11)
    {
        *VAR5 = 0;
        return 0;
    }
    if (FUN2(VAR7, VAR11))
    {
        FUN3(VAR2, true, -1, -1, "" VAR19 "" VAR19 "", VAR11, VAR9);
        return -VAR20;
    }
    VAR12 = FUN4(VAR2, VAR7->VAR21, VAR11, (void **)&VAR14);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR10 = VAR3 & (VAR7->VAR22 - 1);
    *VAR5 = FUN5(VAR14[VAR10]);
    VAR12 = FUN6(VAR2, VAR7->VAR21, (void **)&VAR14);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    return 0;
}