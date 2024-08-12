void FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
int VAR4 = FUN2();

if (FUN3(VAR4, VAR2->VAR5) != 0) {
unsigned long VAR6;
unsigned long VAR7, VAR8;
int VAR9;

VAR3 &= (VAR10 << 1);
FUN4(VAR7);
VAR8 = FUN5();
FUN6();
if (VAR11) {
VAR6 = FUN7();
FUN8(VAR3);
FUN9(FUN10(VAR4, VAR2->VAR5));
} else {
FUN8(VAR3 | FUN10(VAR4, VAR2->VAR5));
}
FUN11();
FUN12();
FUN13();
VAR9 = FUN14();
FUN15(0);
FUN16(0);
if (VAR9 < 0)
goto VAR12;

FUN8(FUN17(VAR9));
FUN11();
FUN18();
FUN19();

VAR12:
FUN8(VAR8);
if (VAR11)
FUN9(VAR6);
FUN20();
FUN21(VAR2);
FUN22(VAR7);
}
}