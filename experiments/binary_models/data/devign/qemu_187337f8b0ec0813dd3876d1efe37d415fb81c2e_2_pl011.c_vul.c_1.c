void FUN1(uint32_t VAR1, qemu_irq VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR7 = (VAR6 *)FUN2(sizeof(VAR6));
    VAR5 = FUN3(0, VAR8, VAR9, VAR7);
    FUN4(VAR1, 0x00000fff, VAR5);
    VAR7->VAR1 = VAR1;
    VAR7->VAR2 = VAR2;
    VAR7->VAR4 = VAR4;
    VAR7->VAR10 = 1;
    VAR7->VAR11 = 0x12;
    VAR7->VAR12 = 0x300;
    VAR7->VAR13 = 0x90;
    if (VAR4)
    {
        FUN5(VAR4, VAR14, VAR15, VAR16, VAR7);
    }
}