static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    uint32_t VAR10, VAR11, VAR12, VAR13;
    uint64_t VAR14;
    VAR15 *VAR16;
    struct VAR17 *VAR18;
    int VAR19;
    if ((VAR6 < 6) || (VAR6 > 7) || VAR8 != 1)
    {
        FUN2(VAR9, 0, VAR20);
        return;
    }
    VAR14 = FUN3(VAR7, 1);
    VAR10 = FUN3(VAR7, 2);
    VAR11 = FUN3(VAR7, 4);
    VAR12 = FUN3(VAR7, 5);
    if (VAR6 == 7)
    {
        VAR14 |= (VAR21)FUN3(VAR7, 6) << 32;
    }
    VAR16 = FUN4(VAR10, true);
    if (!VAR16)
    {
        goto VAR22;
    }
    VAR18 = VAR16->VAR23;
    VAR13 = FUN5(VAR18->VAR24) + sizeof(*VAR18);
    if (VAR13 < VAR12)
    {
        VAR12 = VAR13;
    }
    FUN6(VAR11, VAR16->VAR23, VAR12);
    FUN2(VAR9, 0, VAR25);
    FUN7(VAR16->VAR23);
    FUN7(VAR16);
    for (VAR19 = 0; VAR19 < VAR26; VAR19++)
    {
        if (FUN8(FUN9(VAR19), true))
        {
            const VAR27 *VAR28 = FUN10(VAR4->VAR29, VAR19);
            FUN11(VAR28->VAR30);
            FUN12(FUN13(VAR4->VAR31, VAR28->VAR32));
        }
    }
    return;
VAR22:
    FUN2(VAR9, 0, VAR33);
}