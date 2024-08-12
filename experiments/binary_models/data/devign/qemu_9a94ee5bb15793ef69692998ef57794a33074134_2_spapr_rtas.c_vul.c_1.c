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
        if (!VAR16->VAR19)
        {
            FUN2(VAR9, 0, VAR20);
            return;
        }
        FUN6(VAR16);
        VAR18->VAR21 = (1ULL << VAR22) | (1ULL << VAR23);
        VAR18->VAR24[VAR25] |= VAR26->VAR27;
        VAR18->VAR28 = VAR11;
        VAR18->VAR29[3] = VAR12;
        VAR16->VAR19 = 0;
        FUN7(VAR13);
        FUN8(VAR13);
        FUN9(VAR16);
        FUN2(VAR9, 0, VAR30);
        return;
    }
    FUN2(VAR9, 0, VAR14);