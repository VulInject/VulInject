static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    target_ulong VAR10, VAR11, VAR12;
    VAR1 *VAR13;
    if (VAR6 != 3 || VAR8 != 1)
    {
        FUN2(VAR9, 0, VAR14);
        return;
    }
    VAR10 = FUN3(VAR7, 0);
    VAR11 = FUN3(VAR7, 1);
    VAR12 = FUN3(VAR7, 2);
    VAR13 = FUN4(VAR10);
    if (VAR13 != NULL)
    {
        VAR15 *VAR16 = FUN5(VAR13);
        VAR17 *VAR18 = &VAR13->VAR18;
        VAR19 *VAR20 = FUN6(VAR13);
        if (!VAR16->VAR21)
        {
            FUN2(VAR9, 0, VAR22);
            return;
        }
        FUN7(VAR16);
        VAR18->VAR23 = (1ULL << VAR24) | (1ULL << VAR25);
        VAR18->VAR26 = VAR11;
        VAR18->VAR27[3] = VAR12;
        VAR16->VAR21 = 0;
        FUN8(VAR13);
        FUN9(VAR13);
        FUN10(VAR16);
        FUN2(VAR9, 0, VAR28);
        return;
    }
    FUN2(VAR9, 0, VAR14);