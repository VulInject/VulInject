static long FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned long VAR4)
{
switch (VAR3) {
case VAR5:
return FUN2(VAR2->VAR6, FUN3(VAR4), 1);
case VAR7:
return FUN4(VAR2->VAR6, FUN3(VAR4));
case VAR8:
return FUN5(VAR2->VAR6);
case VAR9:
return FUN6(VAR2->VAR6, FUN3(VAR4));
default:
return -VAR10;
}
}


static int FUN7(struct VAR11 *VAR11, struct VAR1 *VAR2)
{
struct VAR12 *VAR13;
struct VAR14 *VAR1;
int VAR15 = 0;

VAR13 = FUN8(VAR11->VAR16, struct VAR12, VAR17);

FUN9(&VAR13->VAR18);

if (!VAR13->VAR19) {
VAR15 = -VAR20;
goto VAR21;
}

if (!FUN10(VAR13->VAR19, VAR22->VAR23->VAR24)) {
VAR15 = -VAR25;
goto VAR21;
}

VAR1 = FUN11(sizeof(*VAR1), VAR26);
if (!VAR1) {
VAR15 = -VAR27;
goto VAR21;
}

FUN12(&VAR1->mutex);
FUN13(&VAR1->VAR28);
FUN14(&VAR1->VAR29);
FUN14(&VAR1->VAR30);
FUN15(&VAR1->VAR31);

VAR1->VAR13 = VAR13;
VAR2->VAR6 = VAR1;

FUN16(&VAR1->VAR32, &VAR13->VAR33);

FUN17(VAR11, VAR2);
VAR21:
FUN18(&VAR13->VAR18);
return VAR15;
}