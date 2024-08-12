void FUN1(target_phys_addr_t VAR1, int VAR2, int VAR3, qemu_irq VAR4)
{
    VAR5 *VAR6 = (VAR5 *)FUN2(sizeof(VAR5));
    FUN3(VAR6, VAR2, VAR3, VAR4, VAR7, "");
    VAR6->VAR8 = VAR1;
    FUN4(VAR6->VAR8, 0xfff, VAR6->VAR9);
}