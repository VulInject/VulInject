static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, qemu_irq VAR7, enum ohci_type VAR8, const char *VAR9, uint32_t VAR10)
{
    int VAR11;
    if (VAR12 == 0)
    {
        VAR12 = FUN2();
        VAR13 = FUN3(1, FUN2(), VAR14 / 1000);
        VAR12 = FUN3(1, FUN2(), 1000);
        if (FUN2() >= VAR14)
        {
            VAR13 = FUN3(1, FUN2(), VAR14);
        }
        else
        {
            VAR13 = 1;
        }
        FUN4("" VAR15 "" VAR15 "", VAR12, VAR13);
    }
    VAR2->VAR16 = FUN5(VAR17, VAR18, VAR2);
    VAR2->VAR10 = VAR10;
    VAR2->VAR9 = VAR9;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    FUN6(&VAR2->VAR19, VAR4);
    VAR2->VAR5 = VAR5;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        FUN7(&VAR2->VAR19, &VAR2->VAR20[VAR11].VAR21, VAR2, VAR11, VAR22);
    }
    VAR2->VAR23 = 0;
    FUN8(VAR24, VAR2);
}