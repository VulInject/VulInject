void FUN1(VAR1 *VAR2, int VAR3, hwaddr VAR4, int VAR5);
void FUN2(VAR1 *VAR2, hwaddr VAR4, VAR6 *VAR7);
void FUN3(VAR1 *VAR2, VAR6 *VAR7);
VAR6 *FUN4(VAR1 *VAR2);
VAR8 *FUN5(const char *VAR9, hwaddr VAR4, ...);
VAR8 *FUN6(const char *VAR9, hwaddr VAR4, ...);
static inline VAR8 *FUN7(const char *VAR9, hwaddr VAR4, qemu_irq VAR10) { return FUN5(VAR9, VAR4, VAR10, NULL); }