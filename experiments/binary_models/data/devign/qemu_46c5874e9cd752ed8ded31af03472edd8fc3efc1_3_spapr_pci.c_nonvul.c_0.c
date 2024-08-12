static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4, uint32_t VAR5, target_ulong VAR6)
{
    VAR7 *VAR8;
    uint32_t VAR9;
    if ((VAR5 != 1) && (VAR5 != 2) && (VAR5 != 4))
    {
        FUN2(VAR6, 0, VAR10);
        return;
    }
    VAR8 = FUN3(VAR2, VAR3, VAR4);
    VAR4 = FUN4(VAR4);
    if (!VAR8 || (VAR4 % VAR5) || (VAR4 >= FUN5(VAR8)))
    {
        FUN2(VAR6, 0, VAR10);
        return;
    }
    VAR9 = FUN6(VAR8, VAR4, FUN5(VAR8), VAR5);
    FUN2(VAR6, 0, VAR11);
    FUN2(VAR6, 1, VAR9);
}