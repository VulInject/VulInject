static bool FUN1(tb_page_addr_t VAR1, uintptr_t VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    VAR3 *VAR8 = NULL;
    VAR9 *VAR10 = VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14 = 0;
    target_ulong VAR15 = 0;
    target_ulong VAR16 = 0;
    uint32_t VAR17 = 0;
    FUN2();
    VAR1 &= VAR18;
    VAR6 = FUN3(VAR1 >> VAR19);
    if (!VAR6)
    {
        return false;
    }
    FUN4();
    VAR4 = VAR6->VAR20;
    if (VAR4 && VAR2 != 0)
    {
        VAR8 = FUN5(VAR2);
    }
    if (VAR10 != NULL)
    {
        VAR13 = VAR10->VAR21;
    }
    while (VAR4 != NULL)
    {
        VAR7 = (VAR22)VAR4 & 3;
        VAR4 = (VAR3 *)((VAR22)VAR4 & ~3);
        if (VAR8 == VAR4 && (VAR8->VAR23 & VAR24) != 1)
        {
            VAR14 = 1;
            FUN6(VAR10, VAR8, VAR2);
            FUN7(VAR13, &VAR15, &VAR16, &VAR17);
        }
        FUN8(VAR4, VAR1);
        VAR4 = VAR4->VAR25[VAR7];
    }
    VAR6->VAR20 = NULL;
    if (VAR14)
    {
        VAR10->VAR26 = 1 | FUN9();
        return true;
    }
    FUN10();
    return false;
}