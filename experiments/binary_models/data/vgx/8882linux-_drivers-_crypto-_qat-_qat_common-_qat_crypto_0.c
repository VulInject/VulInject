struct VAR1 *FUN1(int VAR2)
{
struct VAR3 *VAR4 = NULL, *VAR5;
struct VAR1 *VAR6 = NULL, *VAR7;
unsigned long VAR8 = ~0;

FUN2(VAR5, FUN3(), VAR9) {
unsigned long VAR10;

if ((VAR2 == FUN4(&FUN5(VAR5)) ||
FUN4(&FUN5(VAR5)) < 0) &&
FUN6(VAR5) &&
!FUN7(&VAR5->VAR11)) {
VAR10 = FUN8(&VAR5->VAR12);
if (VAR8 > VAR10) {
VAR4 = VAR5;
VAR8 = VAR10;
}
}
}

if (!VAR4) {
FUN9("", VAR2);

FUN2(VAR5, FUN3(), VAR9) {
if (FUN6(VAR5) &&
!FUN7(&VAR5->VAR11)) {
VAR4 = VAR5;
break;
}
}
}

if (!VAR4)
return NULL;

VAR8 = ~0;
FUN2(VAR7, &VAR4->VAR11, VAR9) {
unsigned long VAR10;

VAR10 = FUN8(&VAR7->VAR13);
if (VAR8 > VAR10) {
VAR6 = VAR7;
VAR8 = VAR10;
}
}
if (VAR6) {
if (FUN10(VAR4)) {
FUN11(&FUN5(VAR4), "");
return NULL;
}
FUN12(&VAR6->VAR13);
}
return VAR6;
}