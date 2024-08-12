static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    uint64_t VAR15;
    if ((VAR6 != 8) || (VAR8 != 1))
    {
        goto VAR16;
    }
    VAR15 = ((VAR17)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    VAR11 = FUN3(VAR4, VAR15);
    if (!VAR11)
    {
        goto VAR16;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13->VAR18)
    {
        goto VAR16;
    }
    VAR14 = FUN2(VAR7, 7);
    switch (VAR14)
    {
    case VAR19:
    case VAR20:
        break;
    default:
        goto VAR16;
    }
    FUN5(VAR9, 0, VAR21);
    return;
VAR16:
    FUN5(VAR9, 0, VAR22);
}