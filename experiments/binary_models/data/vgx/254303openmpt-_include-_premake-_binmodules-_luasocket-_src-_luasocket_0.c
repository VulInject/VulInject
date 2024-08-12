static int FUN1(VAR1 *VAR2) {
if (FUN2()) {

FUN3(VAR2);
FUN4(VAR2, VAR3, 0);
FUN5(VAR2, "");
FUN6(VAR2, 1);
FUN7(VAR2, -3);

FUN5(VAR2, "");
FUN5(VAR2, VAR4);
FUN7(VAR2, -3);
return 1;
} else {
FUN5(VAR2, "");
FUN8(VAR2);
return 0;
}
}