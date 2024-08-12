static void FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long VAR4, unsigned long VAR5)
{
struct VAR6 *VAR7 = &VAR2->VAR8.VAR9;
struct VAR6 *VAR10 = FUN2(VAR2);
unsigned int VAR11;
bool VAR12;

if (FUN3(VAR10))
return;

VAR11 = FUN4();

VAR12 = FUN5(VAR10, VAR11) < VAR13;
if (FUN6(&VAR14)) {
unsigned long VAR15 = FUN7(&VAR2->VAR8.VAR16);


FUN8(VAR7);
FUN9(VAR11, VAR7);
FUN10(VAR7, VAR7, VAR10);

if (VAR12) {
FUN11(VAR10, VAR3, VAR4, VAR15);
} else if (VAR4 <= VAR5) {
FUN12(VAR3, VAR15);
} else {
FUN13(VAR15);
}
} else {
if (VAR12) {
FUN14(VAR10, VAR3, VAR4);
} else if (VAR4 <= VAR5) {
FUN15(VAR3);
} else {
FUN16();
}
}

FUN17();
}