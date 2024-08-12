static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, target_ulong VAR5, uint32_t VAR6, target_ulong VAR7)
{
    uint32_t VAR8, VAR9, VAR10;
    uint64_t VAR11 = ((VAR12)FUN2(VAR5, 1) << 32) | FUN2(VAR5, 2);
    VAR13 *VAR14 = FUN3(VAR2, VAR11, FUN2(VAR5, 0));
    if (!VAR14)
    {
        FUN4(VAR7, 0, -1);
        return;
    }
    VAR8 = FUN2(VAR5, 4);
    VAR9 = FUN2(VAR5, 3);
    VAR10 = FUN5(FUN2(VAR5, 0));
    FUN6(VAR14, VAR10, VAR8, VAR9);
    FUN4(VAR7, 0, 0);
}