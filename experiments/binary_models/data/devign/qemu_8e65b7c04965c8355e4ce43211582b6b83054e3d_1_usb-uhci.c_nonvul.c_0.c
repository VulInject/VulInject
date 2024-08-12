static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = (VAR6 *)VAR2;
    FUN2("", VAR7->VAR8, VAR7->VAR9);
    if (VAR7->VAR10)
    {
        UHCI_TD VAR8;
        uint32_t VAR11 = VAR7->VAR8;
        uint32_t VAR12 = 0, VAR13;
        int VAR14;
        FUN3(VAR11 & ~0xf, (VAR15 *)&VAR8, sizeof(VAR8));
        FUN4(&VAR8.VAR11);
        FUN4(&VAR8.VAR16);
        FUN4(&VAR8.VAR9);
        FUN4(&VAR8.VAR17);
        FUN5(VAR5, VAR7);
        VAR14 = FUN6(VAR5, &VAR8, VAR7, &VAR12);
        VAR5->VAR18 |= VAR12;
        VAR13 = FUN7(VAR8.VAR16);
        FUN8((VAR11 & ~0xf) + 4, (const VAR15 *)&VAR13, sizeof(VAR13));
        FUN9(VAR5, VAR7);
    }
    else
    {
        VAR7->VAR19 = 1;
        FUN10(VAR5);
    }
}