static void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    target_ulong VAR4, VAR5;
    ram_addr_t VAR6;
    VAR7 *VAR8;
    VAR4 = FUN2(VAR2, VAR3);
    VAR8 = FUN3(VAR4 >> VAR9);
    if (!VAR8)
    {
        VAR5 = VAR10;
    }
    else
    {
        VAR5 = VAR8->VAR11;
    }
    VAR6 = (VAR5 & VAR12) | (VAR3 & ~VAR12);
    FUN4(VAR6, VAR6 + 1, 0);
}