VAR1 *FUN1(target_phys_addr_t VAR2, int VAR3, qemu_irq VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    VAR1 *VAR9;
    int VAR10;
    VAR9 = FUN2(sizeof(VAR1));
    if (!VAR9)
        return NULL;
    VAR9->VAR4 = VAR4;
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR9->VAR5 = VAR5;
    VAR9->VAR11 = FUN3(VAR12, VAR13, VAR9);
    if (!VAR9->VAR11)
        return NULL;
    FUN4(VAR14, VAR9);
    FUN5(VAR9);
    FUN6("", VAR2, 2, VAR15, VAR16, VAR9);
    if (VAR8)
    {
        VAR10 = FUN7(0, VAR17, VAR18, VAR9);
        FUN8(VAR2, 8 << VAR3, VAR10);
    }
    VAR9->VAR7 = VAR7;
    FUN9(VAR7, VAR19, VAR20, VAR21, VAR9);
    return VAR9;
}