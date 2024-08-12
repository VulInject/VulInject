void FUN1(void);
void FUN2(void);

void FUN3(void) FUN4((VAR1));

void
FUN3(void)
{
struct sigaction	VAR2, VAR3;
sigset_t		VAR4;
static int VAR5 = 0;

if (VAR5)
return;
VAR5 = 1;

VAR6 = 0;

FUN5(&VAR7);
FUN6(&VAR7, VAR8);
FUN6(&VAR7, VAR9);
FUN6(&VAR7, VAR10);
FUN6(&VAR7, VAR11);
FUN6(&VAR7, VAR12);

memset(&VAR3, 0, sizeof(VAR3));
VAR3.VAR13 = VAR14;
VAR3.VAR15 = VAR7;

FUN7(VAR16, &VAR3.VAR15, &VAR4);
FUN8(VAR8, &VAR3, &VAR2);

if (FUN9(VAR17, 1) == 0) {
FUN10();
VAR6 |= VAR18;
if (FUN9(VAR17, 1) == 0) {
FUN2();
VAR6 |= VAR19 | VAR20;
} else if (FUN9(VAR17, 1) == 0) {
FUN11();
VAR6 |= VAR20;
}
if (FUN9(VAR17, 1) == 0) {
FUN12();
VAR6 |= VAR21;
}
if (FUN9(VAR17, 1) == 0) {
FUN1();
VAR6 |= VAR22;
}
}

FUN8 (VAR8, &VAR2, NULL);
FUN7(VAR16, &VAR4, NULL);
}