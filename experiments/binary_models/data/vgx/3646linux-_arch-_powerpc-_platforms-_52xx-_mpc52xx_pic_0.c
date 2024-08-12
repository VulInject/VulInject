static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
u32 VAR4, VAR5;
int VAR6 = FUN2(VAR2) & VAR7;
void *VAR8 = VAR9;

FUN3("", VAR10,
(int) FUN2(VAR2), VAR6, VAR3);

switch (VAR3) {
case VAR11: VAR5 = 0; break;
case VAR12: VAR5 = 1; VAR8 = VAR13; break;
case VAR14: VAR5 = 2; VAR8 = VAR13; break;
case VAR15: VAR5 = 3; break;
default:
VAR5 = 0;
}

VAR4 = FUN4(&VAR16->VAR17);
VAR4 &= ~(0x3 << (22 - (VAR6 * 2)));
VAR4 |= (VAR5 << (22 - (VAR6 * 2)));
FUN5(&VAR16->VAR17, VAR4);

FUN6(VAR2, VAR8);

return 0;
}

static struct irq_chip VAR18 = {
.VAR19 = "",
.VAR20 = VAR21,
.VAR22 = VAR23,
.VAR24 = VAR25,
.VAR26 = VAR27,
};