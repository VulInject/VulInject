static void FUN1(void)
{
unsigned long VAR1, VAR2;
int VAR3;
const VAR4 *VAR5;
u8 VAR6;

VAR1 = FUN2();
VAR2 = FUN3(VAR1, "");
if (VAR2 == -VAR7) {
VAR8->VAR9 &= ~VAR10;
return;
}
VAR5 = FUN4(VAR2, "", &VAR3);
if (!VAR5) {
VAR8->VAR9 &= ~VAR10;
return;
}
if (VAR3 <= FUN5(VAR11)) {
VAR8->VAR9 &= ~VAR10;
return;
}


VAR6 = VAR5[FUN5(VAR11)] &
FUN6(VAR11);
if (VAR6 == FUN6(VAR12)) {

if (!FUN7()) {
FUN8("");
}
if (!(VAR5[FUN5(VAR13)] &
FUN6(VAR13))) {
FUN8("");
}

VAR8->VAR9 |= VAR10;
} else if (VAR6 == FUN6(VAR14)) {

VAR8->VAR9 &= ~VAR10;
}
}