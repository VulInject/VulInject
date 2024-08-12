static int FUN1(VAR1 *VAR2) {
while (VAR2->VAR3 == '') {
FUN2 (VAR2);
if (VAR2->VAR3 == '') {
VAR2->VAR4->VAR5++;
FUN2 (VAR2);
} else if (VAR2->VAR3 == '') {
FUN2 (VAR2);
if (VAR2->VAR3 != '') {
goto VAR6;
}
VAR2->VAR4->VAR5++;
FUN2 (VAR2);
} else {
VAR6:
return 1;
}
}
return 0;
}