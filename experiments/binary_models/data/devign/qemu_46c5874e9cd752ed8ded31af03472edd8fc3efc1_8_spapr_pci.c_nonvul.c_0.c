static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint64_t VAR14;
    int VAR15, VAR16;
    if ((VAR6 != 3) || (VAR8 != 4 && VAR8 != 5))
    {
        goto VAR17;
    }
    VAR14 = ((VAR18)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    VAR11 = FUN3(VAR4, VAR14);
    if (!VAR11)
    {
        goto VAR17;
    }
    VAR13 = FUN4(VAR11);
    if (!VAR13->VAR19)
    {
        goto VAR17;
    }
    VAR16 = VAR13->FUN5(VAR11, &VAR15);
    FUN6(VAR9, 0, VAR16);
    if (VAR16 != VAR20)
    {
        return;
    }
    FUN6(VAR9, 1, VAR15);
    FUN6(VAR9, 2, VAR21);
    FUN6(VAR9, 3, VAR22);
    if (VAR8 >= 5)
    {
        FUN6(VAR9, 4, VAR23);
    }
    return;
VAR17:
    FUN6(VAR9, 0, VAR24);
}