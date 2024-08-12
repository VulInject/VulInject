static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, target_ulong VAR5, uint32_t VAR6, target_ulong VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    uint32_t VAR13, VAR14;
    if (VAR4 != 2)
    {
        FUN2(VAR7, 0, -3);
        return;
    }
    VAR13 = FUN3(VAR5, 0);
    VAR14 = FUN3(VAR5, 1);
    VAR12 = FUN4(VAR9, VAR13);
    if (!VAR12)
    {
        FUN2(VAR7, 0, -3);
        return;
    }
    if (VAR14)
    {
        VAR12->VAR15 |= VAR16;
    }
    else
    {
        VAR12->VAR15 &= ~VAR16;
    }
    FUN2(VAR7, 0, 0);
}