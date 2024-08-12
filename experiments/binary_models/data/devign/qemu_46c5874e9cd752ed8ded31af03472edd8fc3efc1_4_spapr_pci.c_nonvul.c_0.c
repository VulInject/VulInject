static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7)
{
    VAR8 *VAR9;
    if ((VAR5 != 1) && (VAR5 != 2) && (VAR5 != 4))
    {
        FUN2(VAR7, 0, VAR10);
        return;
    }
    VAR9 = FUN3(VAR2, VAR3, VAR4);
    VAR4 = FUN4(VAR4);
    if (!VAR9 || (VAR4 % VAR5) || (VAR4 >= FUN5(VAR9)))
    {
        FUN2(VAR7, 0, VAR10);
        return;
    }
    FUN6(VAR9, VAR4, FUN5(VAR9), VAR6, VAR5);
    FUN2(VAR7, 0, VAR11);
}