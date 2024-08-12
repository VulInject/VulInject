static void FUN1(tb_page_addr_t VAR1, uintptr_t VAR2, void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR4 *VAR9 = NULL;
    VAR10 *VAR11 = VAR12;
    VAR13 *VAR14 = NULL;
    int VAR15 = 0;
    target_ulong VAR16 = 0;
    target_ulong VAR17 = 0;
    int VAR18 = 0;
    VAR1 &= VAR19;
    VAR7 = FUN2(VAR1 >> VAR20);
    if (!VAR7)
    {
        return;
    }
    VAR5 = VAR7->VAR21;
    if (VAR5 && VAR2 != 0)
    {
        VAR9 = FUN3(VAR2);
    }
    if (VAR11 != NULL)
    {
        VAR14 = VAR11->VAR22;
    }
    while (VAR5 != NULL)
    {
        VAR8 = (VAR23)VAR5 & 3;
        VAR5 = (VAR4 *)((VAR23)VAR5 & ~3);
        if (VAR9 == VAR5 && (VAR9->VAR24 & VAR25) != 1)
        {
            VAR15 = 1;
            FUN4(VAR9, VAR14, VAR2);
            FUN5(VAR14, &VAR16, &VAR17, &VAR18);
        }
        FUN6(VAR5, VAR1);
        VAR5 = VAR5->VAR26[VAR8];
    }
    VAR7->VAR21 = NULL;
    if (VAR15)
    {
        VAR11->VAR9 = NULL;
        FUN7(VAR14, VAR16, VAR17, VAR18, 1);
        FUN8(VAR14, VAR3);
    }
}