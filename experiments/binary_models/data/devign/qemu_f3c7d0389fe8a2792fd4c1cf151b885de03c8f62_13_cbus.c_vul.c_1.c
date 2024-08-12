VAR1 *FUN1(qemu_irq VAR2)
{
    VAR3 *VAR4 = (VAR3 *)FUN2(sizeof(*VAR4));
    VAR4->VAR5 = VAR2;
    VAR4->VAR6.VAR7 = FUN3(VAR8, VAR4, 1)[0];
    VAR4->VAR6.VAR2 = FUN3(VAR9, VAR4, 1)[0];
    VAR4->VAR6.VAR10 = FUN3(VAR11, VAR4, 1)[0];
    VAR4->VAR10 = 1;
    VAR4->VAR7 = 0;
    VAR4->VAR2 = 0;
    return &VAR4->VAR6;
}