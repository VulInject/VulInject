static void
FUN1(VAR1 *VAR2)
{
fstack_t VAR3;
char *VAR4;
acf_t VAR5;

FUN2(VAR2);
FUN3(VAR2);
VAR3 = FUN4(VAR6);
if (VAR3) {
VAR5 = (VAR7)FUN4(VAR6);
FUN5(VAR2, VAR5);
} else if (VAR8 >= VAR9) {
FUN6(VAR10, "");
FUN7(VAR2);
} else {
VAR4 = FUN8(VAR2, NULL);
FUN6(VAR11, "", VAR4);
VAR12[VAR8++] = VAR4;
}
}