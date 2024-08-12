VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, pci_set_irq_fn VAR5, pci_map_irq_fn VAR6, VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR1 *VAR11;
    static int VAR12 = 0;
    VAR11 = FUN2(VAR1, FUN3(&VAR13, VAR3, VAR4));
    VAR11->VAR5 = VAR5;
    VAR11->VAR6 = VAR6;
    VAR11->VAR14 = VAR8;
    VAR11->VAR9 = VAR9;
    VAR11->VAR10 = VAR10;
    VAR11->VAR15 = FUN4(VAR10 * sizeof(VAR11->VAR15[0]));
    VAR11->VAR16 = VAR17;
    VAR17 = VAR11;
    FUN5("", VAR12++, 1, VAR18, VAR19, VAR11);
    FUN6(VAR20, VAR11);
    return VAR11;
}