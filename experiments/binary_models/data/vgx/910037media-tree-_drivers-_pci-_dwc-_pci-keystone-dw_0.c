static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
u32 VAR11;

VAR6 = FUN2(VAR2);
VAR8 = (struct VAR7 *) FUN3(VAR6);
VAR10 = FUN4(VAR8);
VAR4 = FUN5(VAR10);
VAR11 = VAR2->VAR12 - FUN6(VAR8->VAR13, 0);


if (FUN7(VAR14)) {
if (VAR6->VAR15.VAR16)
FUN8(VAR2);
}

FUN9(VAR8, VAR11);
}

static struct irq_chip VAR17 = {
.VAR18 = "",
.VAR19 = VAR20,
.VAR21 = VAR22,
.VAR23 = VAR24,
};