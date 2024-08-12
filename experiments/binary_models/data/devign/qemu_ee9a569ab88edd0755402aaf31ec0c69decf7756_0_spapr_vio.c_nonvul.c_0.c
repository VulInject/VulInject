static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11 = VAR4->VAR12;
    VAR13 *VAR14;
    uint32_t VAR15, VAR16;
    if (VAR6 != 2)
    {
        FUN2(VAR9, 0, VAR17);
        return;
    }
    VAR15 = FUN3(VAR7, 0);
    VAR16 = FUN3(VAR7, 1);
    VAR14 = FUN4(VAR11, VAR15);
    if (!VAR14)
    {
        FUN2(VAR9, 0, VAR17);
        return;
    }
    if (!VAR14->VAR18)
    {
        FUN2(VAR9, 0, VAR17);
        return;
    }
    FUN5(VAR14, !!VAR16);
    FUN2(VAR9, 0, VAR19);
}