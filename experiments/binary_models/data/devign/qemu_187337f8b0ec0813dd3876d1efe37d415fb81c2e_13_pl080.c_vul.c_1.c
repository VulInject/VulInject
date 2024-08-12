void *FUN1(uint32_t VAR1, qemu_irq VAR2, int VAR3)
{
    int VAR4;
    VAR5 *VAR6;
    VAR6 = (VAR5 *)FUN2(sizeof(VAR5));
    VAR4 = FUN3(0, VAR7, VAR8, VAR6);
    FUN4(VAR1, 0x00000fff, VAR4);
    VAR6->VAR1 = VAR1;
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    return VAR6;
}