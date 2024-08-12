void
FUN1(VAR1 *VAR2)
{
if (VAR2 == NULL) {
return;
}

if (VAR3) {
if (VAR2->VAR4) {
FUN2("",
VAR2, VAR2->VAR4, FUN3(VAR3) - 1);
FUN4(VAR3, VAR2->VAR4);

} else {
FUN2("",
VAR2, FUN3(VAR3) - 1);
FUN4(VAR3, VAR2->VAR5);
}
}

if (VAR2->VAR6) {
FUN5(VAR2->VAR6);
}

if (VAR2->VAR7) {
FUN6("", FUN7(VAR2->VAR7));
FUN8(VAR2->VAR7, VAR8);
}

free(VAR2->VAR5);
free(VAR2->VAR9);
free(VAR2->VAR10);
if (VAR2->VAR11) {
if (VAR2->VAR11->VAR12) {
FUN5(VAR2->VAR11->VAR12);
}
free(VAR2->VAR11->VAR13);
free(VAR2->VAR11);
}
free(VAR2);
}