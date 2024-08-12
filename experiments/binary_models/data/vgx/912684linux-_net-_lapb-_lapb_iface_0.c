static int FUN1(struct VAR1 *this, unsigned long VAR2,
void *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3);
struct VAR6 *VAR7;

if (!FUN3(FUN4(VAR5), &VAR8))
return VAR9;

if (VAR5->VAR10 != VAR11)
return VAR9;

VAR7 = FUN5(VAR5);
if (!VAR7)
return VAR9;

FUN6(&VAR7->VAR12);

switch (VAR2) {
case VAR13:
FUN7(0, "", VAR5, VAR5->VAR14);

if (FUN8(VAR5)) {
FUN7(0, "", VAR5,
VAR5->VAR14);
if (VAR7->VAR15 & VAR16) {
FUN9(VAR7);
} else {
if (VAR7->VAR17 == VAR18) {
VAR7->VAR17 = VAR19;
FUN10(VAR7);
}
}
}
break;
case VAR20:
if (FUN8(VAR5))
FUN11(VAR7);
break;
case VAR21:
FUN7(0, "", VAR5, VAR5->VAR14);
FUN7(0, "", VAR5, VAR7->VAR17);
FUN12(VAR7);
VAR7->VAR17 = VAR18;
VAR7->VAR22   = 0;
FUN13(VAR7);
FUN14(VAR7);
break;
case VAR23:
if (FUN8(VAR5)) {
FUN7(0, "", VAR5,
VAR5->VAR14);
if (VAR7->VAR15 & VAR16) {
FUN9(VAR7);
} else {
if (VAR7->VAR17 == VAR18) {
VAR7->VAR17 = VAR19;
FUN10(VAR7);
}
}
} else {
FUN7(0, "", VAR5, VAR5->VAR14);
FUN7(0, "", VAR5, VAR7->VAR17);
FUN12(VAR7);
VAR7->VAR17 = VAR18;
VAR7->VAR22   = 0;
FUN13(VAR7);
FUN14(VAR7);
}
break;
}

FUN15(&VAR7->VAR12);
FUN16(VAR7);
return VAR9;
}

static struct notifier_block VAR24 = {
.VAR25 = VAR26,
};