struct VAR1 *FUN1(target_phys_addr_t VAR2, qemu_irq VAR3, uint32_t VAR4)
{
    int VAR5;
    struct VAR1 *VAR6 = (struct VAR1 *)FUN2(FUN3(), 0, sizeof(struct VAR1));
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    VAR6->VAR7.VAR8 = VAR9;
    VAR6->VAR7.recv = VAR10;
    VAR6->VAR7.send = VAR11;
    VAR6->VAR12 = FUN3();
    VAR5 = FUN4(0, VAR13, VAR14, VAR6);
    FUN5(VAR6->VAR2 & ~VAR4, VAR4, VAR5);
    FUN6("", VAR2, 0, VAR15, VAR16, VAR6);
    return VAR6;
}