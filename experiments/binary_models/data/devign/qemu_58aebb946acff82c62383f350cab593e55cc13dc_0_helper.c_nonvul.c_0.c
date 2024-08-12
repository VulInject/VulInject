int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    struct cris_mmu_result VAR7;
    int VAR8, VAR9;
    int VAR10 = -1;
    target_ulong VAR11;
    FUN2(FUN3("", VAR12, VAR3, VAR2->VAR13, VAR4));
    VAR9 = FUN4(&VAR7, VAR2, VAR3 & VAR14, VAR4, VAR5, 0);
    if (VAR9)
    {
        if (VAR2->VAR15 == VAR16)
            FUN5(VAR2, ""
                           "",
                      VAR3, VAR4);
        VAR2->VAR17[VAR18] = VAR3;
        VAR2->VAR15 = VAR16;
        VAR2->VAR19 = VAR7.VAR20;
        VAR10 = 1;
    }
    else
    {
        VAR11 = VAR7.VAR11 & ~0x80000000;
        VAR8 = VAR7.VAR8;
        FUN6(VAR2, VAR3 & VAR14, VAR11, VAR8, VAR5, VAR21);
        VAR10 = 0;
    }
    if (VAR10 > 0)
        FUN7(""
              "",
              VAR12, VAR10, VAR2->VAR22, VAR3, VAR7.VAR11, VAR6, VAR7.VAR20, VAR2->VAR13);
    return VAR10;
}