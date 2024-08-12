static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint32_t VAR14, VAR15;
    uint64_t VAR16;
    if ((VAR6 != 4) || (VAR8 != 2))
    {
        goto VAR17;
    }
    VAR16 = FUN2(VAR7, 1);
    VAR11 = FUN3(VAR4, VAR16);
    if (!VAR11)
    {
        goto VAR17;
    }
    if (!FUN4(VAR11))
    {
        goto VAR17;
    }
    VAR15 = FUN5(VAR7, 3);
    switch (VAR15)
    {
    case VAR18:
        VAR14 = FUN5(VAR7, 0);
        VAR13 = FUN6(VAR4, VAR16, VAR14);
        if (!VAR13)
        {
            goto VAR17;
        }
        FUN7(VAR9, 1, (FUN8(FUN9(VAR13)) << 16) + 1);
        break;
    case VAR19:
        FUN7(VAR9, 1, VAR20);
        break;
    default:
        goto VAR17;
    }
    FUN7(VAR9, 0, VAR21);
    return;
VAR17:
    FUN7(VAR9, 0, VAR22);
}