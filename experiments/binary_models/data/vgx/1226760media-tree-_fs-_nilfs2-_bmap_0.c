VAR1 FUN1(const struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
unsigned long VAR6 = FUN3(VAR5);
unsigned long VAR7 = VAR3->VAR8->VAR9 / VAR6;

return VAR7 * VAR6 +
(VAR3->VAR8->VAR9 % VAR10) *
(VAR6 / VAR10);
}

static struct lock_class_key VAR11;
static struct lock_class_key VAR12;


int FUN4(struct VAR2 *VAR3, struct VAR13 *VAR14)
{
if (VAR14 == NULL)
memset(VAR3->VAR15.VAR16, 0, VAR17);
else
memcpy(VAR3->VAR15.VAR16, VAR14->VAR18, VAR17);

FUN5(&VAR3->VAR19);
VAR3->VAR20 = 0;
VAR3->VAR8 = &FUN6(VAR3)->VAR21;
switch (VAR3->VAR8->VAR9) {
case VAR22:
VAR3->VAR23 = VAR24;
VAR3->VAR25 = 0;
VAR3->VAR26 = VAR27;
FUN7(&VAR3->VAR19, &VAR11);
break;
case VAR28:
case VAR29:
VAR3->VAR23 = VAR30;
VAR3->VAR25 = 0;
VAR3->VAR26 = VAR31;
FUN7(&VAR3->VAR19, &VAR12);
break;
case VAR32:
FUN7(&VAR3->VAR19, &VAR12);

default:
VAR3->VAR23 = VAR33;
VAR3->VAR25 = 0;
VAR3->VAR26 = VAR31;
break;
}

return (VAR3->VAR15.VAR34 & VAR35) ?
FUN8(VAR3) : FUN9(VAR3);
}