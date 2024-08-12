VAR1 *FUN1(VAR2 *VAR3, int VAR4, uint32_t VAR5, qemu_irq VAR6, qemu_irq VAR7, int VAR8, VAR9 *VAR10, VAR11 **VAR12)
{
    VAR11 *VAR13;
    VAR14 *VAR15;
    VAR13 = FUN2(FUN3(VAR3, VAR4, VAR16));
    FUN4(VAR13, "", VAR5);
    if (VAR12)
    {
        *VAR12 = VAR13;
    }
    VAR15 = FUN5(VAR13);
    VAR15->VAR17 = VAR6;
    VAR15->VAR7 = VAR7;
    VAR15->VAR8 = VAR8;
    if (FUN6())
    {
        VAR15->VAR18 = false;
    }
    FUN7(VAR13);
    return VAR15->VAR19.VAR20;
}