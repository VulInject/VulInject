static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10 = FUN2(VAR7, 0);
    uint64_t VAR11 = ((VAR12)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    unsigned int VAR13 = -1, VAR14 = FUN2(VAR7, 3);
    VAR15 *VAR16 = NULL;
    VAR17 *VAR18 = NULL;
    VAR19 *VAR20;
    VAR16 = FUN3(VAR4, VAR11);
    if (VAR16)
    {
        VAR18 = FUN4(VAR4, VAR11, VAR10);
    }
    if (!VAR16 || !VAR18)
    {
        FUN5(VAR9, 0, VAR21);
        return;
    }
    VAR20 = (VAR19 *)FUN6(VAR16->VAR20, &VAR10);
    if (!VAR20 || !VAR20->VAR22 || !VAR20->VAR23 || (VAR14 >= VAR20->VAR23))
    {
        FUN7("", VAR10);
        FUN5(VAR9, 0, VAR24);
        return;
    }
    VAR13 = VAR20->VAR22 + VAR14;
    FUN8(VAR14, VAR13);
    FUN5(VAR9, 0, VAR25);
    FUN5(VAR9, 1, VAR13);
    FUN5(VAR9, 2, 1);
}