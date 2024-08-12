static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint32_t VAR14, VAR15;
    uint64_t VAR16;
    int VAR17;
    if ((VAR6 != 4) || (VAR8 != 1))
    {
        goto VAR18;
    }
    VAR16 = FUN2(VAR7, 1);
    VAR14 = FUN3(VAR7, 0);
    VAR15 = FUN3(VAR7, 3);
    VAR11 = FUN4(VAR4, VAR16);
    if (!VAR11)
    {
        goto VAR18;
    }
    VAR13 = FUN5(VAR11);
    if (!VAR13->VAR19)
    {
        goto VAR18;
    }
    VAR17 = VAR13->FUN6(VAR11, VAR14, VAR15);
    FUN7(VAR9, 0, VAR17);
    return;
VAR18:
    FUN7(VAR9, 0, VAR20);
}