int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint64_t VAR9, VAR10;
    int64_t VAR11;
    int VAR12;
    void *VAR13;
    VAR9 = VAR3 >> VAR7->VAR14;
    if (VAR9 >= VAR7->VAR15)
    {
        *VAR5 = 0;
        return 0;
    }
    VAR11 = VAR7->VAR16[VAR9] & VAR17;
    if (!VAR11)
    {
        *VAR5 = 0;
        return 0;
    }
    if (FUN2(VAR7, VAR11))
    {
        FUN3(VAR2, true, -1, -1, "" VAR18 "" VAR18 "", VAR11, VAR9);
        return -VAR19;
    }
    VAR12 = FUN4(VAR2, VAR7->VAR20, VAR11, &VAR13);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    VAR10 = VAR3 & (VAR7->VAR21 - 1);
    *VAR5 = VAR7->FUN5(VAR13, VAR10);
    FUN6(VAR2, VAR7->VAR20, &VAR13);
    return 0;
}