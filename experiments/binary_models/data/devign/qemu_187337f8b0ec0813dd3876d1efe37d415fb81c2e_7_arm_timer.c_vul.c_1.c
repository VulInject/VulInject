void FUN1(uint32_t VAR1, qemu_irq VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR5 = (VAR4 *)FUN2(sizeof(VAR4));
    VAR7 = FUN3(VAR8, VAR5, 2);
    VAR5->VAR1 = VAR1;
    VAR5->VAR2 = VAR2;
    VAR5->VAR9[0] = FUN4(1000000, VAR7[0]);
    VAR5->VAR9[1] = FUN4(1000000, VAR7[1]);
    VAR3 = FUN5(0, VAR10, VAR11, VAR5);
    FUN6(VAR1, 0x00000fff, VAR3);
}