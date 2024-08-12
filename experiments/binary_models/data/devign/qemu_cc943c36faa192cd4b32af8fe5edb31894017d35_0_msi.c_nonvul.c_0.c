void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    uint16_t VAR4 = FUN2(VAR2->VAR5 + FUN3(VAR2));
    bool VAR6 = VAR4 & VAR7;
    unsigned int VAR8 = FUN4(VAR4);
    MSIMessage VAR9;
    assert(VAR3 < VAR8);
    if (FUN5(VAR2, VAR3))
    {
        assert(VAR4 & VAR10);
        FUN6(VAR2->VAR5 + FUN7(VAR2, VAR6), 1U << VAR3);
        FUN8(VAR2, "", VAR3);
        return;
    }
    VAR9 = FUN9(VAR2, VAR3);
    FUN8(VAR2, ""
                        "" VAR11 "" VAR12 "",
                   VAR3, VAR9.VAR13, VAR9.VAR14);
    FUN10(&VAR2->VAR15, VAR9.VAR13, VAR9.VAR14);
}