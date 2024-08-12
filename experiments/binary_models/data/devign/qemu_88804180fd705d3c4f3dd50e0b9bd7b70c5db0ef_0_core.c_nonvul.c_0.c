void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, qemu_irq VAR6)
{
    VAR7 *VAR8;
    static int VAR9 = 1;
    int VAR10;
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        VAR8 = VAR2->VAR11 + VAR10;
        VAR8->VAR2 = VAR2;
        VAR8->VAR12 = VAR10;
        VAR8->VAR9 = VAR9++;
        VAR8->VAR13 = FUN2(VAR8->VAR14, VAR15 * 512 + 4);
        VAR8->VAR16 = FUN2(VAR8->VAR14, 512);
        VAR8->VAR17 = FUN3(VAR18, VAR19, VAR8);
        if (VAR10 == 0)
            FUN4(VAR8, VAR4);
        if (VAR10 == 1)
            FUN4(VAR8, VAR5);
    }
    VAR2->VAR6 = VAR6;
}