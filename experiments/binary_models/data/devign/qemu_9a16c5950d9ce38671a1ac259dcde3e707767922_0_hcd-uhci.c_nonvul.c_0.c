static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR4, VAR5, VAR4);
    VAR7 *VAR8 = VAR6->VAR9->VAR10;
    if (VAR6->VAR11)
    {
        UHCI_TD VAR12;
        uint32_t VAR13 = VAR6->VAR12;
        uint32_t VAR14 = 0, VAR15;
        FUN3(&VAR8->VAR16, VAR13 & ~0xf, &VAR12, sizeof(VAR12));
        FUN4(&VAR12.VAR13);
        FUN4(&VAR12.VAR17);
        FUN4(&VAR12.VAR18);
        FUN4(&VAR12.VAR19);
        FUN5(VAR6);
        FUN6(VAR8, &VAR12, VAR6, &VAR14);
        VAR8->VAR20 |= VAR14;
        VAR15 = FUN7(VAR12.VAR17);
        FUN8(&VAR8->VAR16, (VAR13 & ~0xf) + 4, &VAR15, sizeof(VAR15));
        FUN9(VAR6);
    }
    else
    {
        VAR6->VAR21 = 1;
        if (VAR8->VAR22 < 1280)
        {
            FUN10(VAR8->VAR23);
        }
    }
}