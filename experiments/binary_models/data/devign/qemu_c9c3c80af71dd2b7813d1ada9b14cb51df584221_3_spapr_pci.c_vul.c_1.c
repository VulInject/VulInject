static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, target_ulong VAR5, uint32_t VAR6, target_ulong VAR7)
{
    uint32_t VAR8, VAR9, VAR10;
    VAR11 *VAR12 = FUN2(VAR2, 0, FUN3(VAR5, 0));
    if (!VAR12)
    {
        FUN4(VAR7, 0, -1);
        return;
    }
    VAR9 = FUN3(VAR5, 1);
    VAR10 = FUN5(FUN3(VAR5, 0));
    VAR8 = FUN6(VAR12, VAR10, VAR9);
    FUN4(VAR7, 0, 0);
    FUN4(VAR7, 1, VAR8);
}