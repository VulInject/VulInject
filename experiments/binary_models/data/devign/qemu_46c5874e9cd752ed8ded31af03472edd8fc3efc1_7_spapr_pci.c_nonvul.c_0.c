static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    uint32_t VAR16, VAR17;
    uint64_t VAR18;
    if ((VAR6 != 4) || (VAR8 != 2))
    {
        goto VAR19;
    }
    VAR18 = ((VAR20)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    VAR11 = FUN3(VAR4, VAR18);
    if (!VAR11)
    {
        goto VAR19;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13->VAR21)
    {
        goto VAR19;
    }
    VAR17 = FUN2(VAR7, 3);
    switch (VAR17)
    {
    case VAR22:
        VAR16 = FUN2(VAR7, 0);
        VAR15 = FUN5(VAR4, VAR18, VAR16);
        if (!VAR15)
        {
            goto VAR19;
        }
        FUN6(VAR9, 1, (FUN7(VAR15->VAR23) << 16) + 1);
        break;
    case VAR24:
        FUN6(VAR9, 1, VAR25);
        break;
    default:
        goto VAR19;
    }
    FUN6(VAR9, 0, VAR26);
    return;
VAR19:
    FUN6(VAR9, 0, VAR27);
}