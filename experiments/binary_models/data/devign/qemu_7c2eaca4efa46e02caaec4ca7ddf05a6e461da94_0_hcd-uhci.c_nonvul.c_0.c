static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = 0;
    uint32_t VAR6 = VAR4->VAR7;
    uint32_t VAR8 = FUN2(VAR4);
    UHCI_TD VAR9;
    int VAR10;
    VAR9.VAR11 = VAR4->VAR11;
    while (FUN3(VAR6) && !(VAR9.VAR11 & VAR12))
    {
        FUN4(&VAR2->VAR13, VAR6 & ~0xf, &VAR9, sizeof(VAR9));
        FUN5(&VAR9.VAR7);
        FUN5(&VAR9.VAR11);
        FUN5(&VAR9.VAR8);
        FUN5(&VAR9.VAR14);
        if (!(VAR9.VAR11 & VAR15))
        {
            break;
        }
        if (FUN2(&VAR9) != VAR8)
        {
            break;
        }
        FUN6(VAR6 & ~0xf, VAR9.VAR11, VAR9.VAR8);
        VAR10 = FUN7(VAR2, VAR6, &VAR9, &VAR5, true);
        if (VAR10 == VAR16)
        {
            break;
        }
        assert(VAR10 == VAR17);
        assert(VAR5 == 0);
        VAR6 = VAR9.VAR7;
    }
}