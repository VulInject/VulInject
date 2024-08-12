static int FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int64_t VAR7;
    uint64_t VAR8 = VAR3 >> VAR5->VAR9;
    uint32_t VAR10 = VAR8 & (VAR5->VAR11 - 1);
    void *VAR12;
    int VAR13;
    VAR7 = FUN2(VAR2, VAR3);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    assert(VAR3 != 0);
    VAR13 = FUN3(VAR2, VAR5->VAR14, VAR7, &VAR12);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    if (VAR5->FUN4(VAR12, VAR10) != 1)
    {
        FUN5(VAR2, true, -1, -1, ""
                                                  "" VAR15 ""
                                                  "" VAR15 "" VAR15,
                                VAR7, FUN6(VAR5, VAR3), VAR3, VAR5->FUN4(VAR12, VAR10));
        FUN7(VAR2, VAR5->VAR14, &VAR12);
        return -VAR16;
    }
    VAR5->FUN8(VAR12, VAR10, 0);
    FUN9(VAR2, VAR5->VAR14, VAR12);
    FUN7(VAR2, VAR5->VAR14, &VAR12);
    if (VAR8 < VAR5->VAR17)
    {
        VAR5->VAR17 = VAR8;
    }
    VAR12 = FUN10(VAR2, VAR5->VAR14, VAR3);
    if (VAR12)
    {
        FUN11(VAR2, VAR5->VAR14, VAR12);
    }
    FUN12(VAR2, VAR3, VAR5->VAR18);
    return 0;
}