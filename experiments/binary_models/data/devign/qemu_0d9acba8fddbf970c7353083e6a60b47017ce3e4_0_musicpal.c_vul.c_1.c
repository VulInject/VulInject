static VAR1 *FUN1(qemu_irq VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR1 *VAR7;
    int VAR8;
    VAR4 = FUN2();
    if (!VAR4)
    {
        FUN3(VAR9, "");
        return NULL;
    }
    VAR6 = FUN4(sizeof(VAR5));
    VAR6->VAR2 = VAR2;
    VAR7 = FUN4(sizeof(VAR1));
    VAR7->VAR10 = FUN5();
    VAR7->VAR11 = -1;
    VAR6->VAR12 = FUN6(VAR7->VAR10, VAR4);
    if (!VAR6->VAR12)
        return NULL;
    FUN7(VAR6->VAR12, VAR13);
    FUN8(VAR6->VAR12, VAR14, VAR6);
    VAR8 = FUN9(0, VAR15, VAR16, VAR6);
    FUN10(VAR17, VAR18, VAR8);
    FUN11(VAR19, VAR6);
    return VAR7;
}