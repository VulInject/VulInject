static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint32_t VAR14;
    uint64_t VAR15;
    int VAR16;
    if ((VAR6 != 4) || (VAR8 != 1))
    {
        goto VAR17;
    }
    VAR15 = ((VAR18)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    VAR14 = FUN2(VAR7, 3);
    VAR11 = FUN3(VAR4, VAR15);
    if (!VAR11)
    {
        goto VAR17;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13->VAR19)
    {
        goto VAR17;
    }
    VAR16 = VAR13->FUN5(VAR11, VAR14);
    FUN6(VAR9, 0, VAR16);
    return;
VAR17:
    FUN6(VAR9, 0, VAR20);
}