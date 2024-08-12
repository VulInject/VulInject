static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN4(VAR9, 1);
    int VAR11;
    int VAR12 = 0;
    int VAR13 = FUN5(VAR2);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    VAR8 = FUN6(&VAR4->VAR14);
    FUN7(VAR8, 0, VAR6->VAR15[VAR12++]);
    if (VAR4->VAR16)
    {
        FUN8(&VAR4->VAR17, 0x40000, VAR4->VAR16);
    }
    for (VAR11 = 0; VAR11 < FUN9(VAR6->VAR18); VAR11++)
    {
        qemu_irq VAR19 = VAR6->VAR15[VAR12++];
        qemu_irq VAR20 = VAR6->VAR15[VAR12++];
        VAR13 = FUN10(VAR4, &VAR6->VAR18[VAR11], VAR19, VAR20, 0x16 + (VAR11 * 4));
        if (VAR13 < 0)
        {
            return VAR13;
        }
    }
    FUN11(VAR10, FUN12(VAR4), &VAR21, NULL, "", 0x1000);
    FUN8(&VAR4->VAR17, 0x15000, VAR10);
    return 0;
}