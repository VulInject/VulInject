void FUN1(void)
{
int VAR1 = 0;
if (FUN2("", &VAR1) == 1) {
if (VAR1) {
VAR2 = true;
} else {
VAR2 = false;
}
}

if (VAR2) {
VAR3 *VAR4 = FUN3("");
if (VAR4 && VAR4->VAR5) {
FUN4(VAR4->VAR5);
} else {
FUN4(VAR6);
}
}
}