static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = 0;
    uint32_t VAR6 = VAR4->VAR7;
    UHCI_TD VAR8;
    int VAR9;
    while (FUN2(VAR6))
    {
        FUN3(VAR2->VAR10, &VAR8, VAR6);
        if (!(VAR8.VAR11 & VAR12))
        {
            break;
        }
        if (FUN4(&VAR8) != VAR2->VAR13)
        {
            break;
        }
        FUN5(VAR6 & ~0xf, VAR8.VAR11, VAR8.VAR13);
        VAR9 = FUN6(VAR2->VAR10, VAR2, &VAR8, VAR6, &VAR5);
        if (VAR9 == VAR14)
        {
            break;
        }
        assert(VAR9 == VAR15);
        assert(VAR5 == 0);
        VAR6 = VAR8.VAR7;
    }
    FUN7(VAR2->VAR16->VAR17, VAR2->VAR16);
}