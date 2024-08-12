static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10 = FUN2(VAR7, 0);
    uint64_t VAR11 = ((VAR12)FUN2(VAR7, 1) << 32) | FUN2(VAR7, 2);
    unsigned int VAR13 = -1, VAR14 = FUN2(VAR7, 3);
    int VAR15;
    VAR16 *VAR17 = NULL;
    VAR17 = FUN3(VAR4, VAR11);
    if (!VAR17)
    {
        FUN4(VAR9, 0, VAR18);
        return;
    }
    VAR15 = FUN5(VAR17, VAR10, false);
    if (VAR15 < 0)
    {
        FUN6("", -1, VAR10);
        FUN4(VAR9, 0, VAR19);
        return;
    }
    VAR13 = VAR17->VAR20[VAR15].VAR21 + VAR14;
    FUN7(VAR14, VAR13);
    FUN4(VAR9, 0, VAR22);
    FUN4(VAR9, 1, VAR13);
    FUN4(VAR9, 2, 1);
}