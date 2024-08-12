VAR1 *FUN1(VAR2 *VAR3, qemu_irq VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)FUN2(VAR3, 0, sizeof(struct VAR5));
    VAR6->VAR7.VAR8 = VAR9;
    VAR6->VAR7.recv = VAR10;
    VAR6->VAR7.send = VAR11;
    VAR6->VAR4 = VAR4;
    VAR6->VAR12.VAR13 = FUN3(VAR14, VAR15, VAR6);
    VAR6->VAR16 = FUN4(VAR17, VAR6, 3);
    VAR6->VAR18 = FUN4(VAR19, VAR6, 1)[0];
    FUN5(&VAR6->VAR7);
    FUN6("", -1, 0, VAR20, VAR21, VAR6);
    return &VAR6->VAR7;
}