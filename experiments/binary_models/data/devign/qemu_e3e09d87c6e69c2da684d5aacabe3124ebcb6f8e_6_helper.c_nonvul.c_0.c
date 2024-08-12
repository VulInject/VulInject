VAR1 FUN1(VAR2 *VAR3, vaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = &VAR6->VAR8;
    target_ulong VAR9;
    int VAR10;
    uint64_t VAR11 = VAR8->VAR12.VAR13 & VAR14;
    if (!(VAR8->VAR12.VAR13 & VAR15))
    {
        VAR4 &= 0x7fffffff;
    }
    FUN3(VAR8, VAR4, 2, VAR11, &VAR9, &VAR10, false);
    return VAR9;
}