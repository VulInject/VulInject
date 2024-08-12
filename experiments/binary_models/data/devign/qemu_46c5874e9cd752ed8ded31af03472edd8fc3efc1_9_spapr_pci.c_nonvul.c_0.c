static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint64_t VAR14;
    int VAR15;
    if ((VAR6 != 3) || (VAR8 != 1))
    {
        goto VAR16;
    }
    VAR14 = ((VAR17)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    VAR11 = FUN3(VAR4, VAR14);
    if (!VAR11)
    {
        goto VAR16;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13->VAR18)
    {
        goto VAR16;
    }
    VAR15 = VAR13->FUN5(VAR11);
    FUN6(VAR9, 0, VAR15);
    return;
VAR16:
    FUN6(VAR9, 0, VAR19);
}