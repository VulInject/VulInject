VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    VAR5 *VAR6 = &VAR3->VAR6;
    VAR7 *VAR8;
    hwaddr VAR9;
    ppc_hash_pte64_t VAR10;
    unsigned VAR11;
    if (VAR12 == 0)
    {
        return VAR4 & 0x0FFFFFFFFFFFFFFFULL;
    }
    VAR8 = FUN2(VAR3, VAR4);
    if (!VAR8)
    {
        return -1;
    }
    VAR9 = FUN3(VAR3, VAR8, VAR4, &VAR10);
    if (VAR9 == -1)
    {
        return -1;
    }
    VAR11 = FUN4(VAR8->VAR13, VAR10.VAR14, VAR10.VAR15);
    if (!VAR11)
    {
        return -1;
    }
    return FUN5(VAR10.VAR15 & VAR16, 0, VAR11, VAR4) & VAR17;
}