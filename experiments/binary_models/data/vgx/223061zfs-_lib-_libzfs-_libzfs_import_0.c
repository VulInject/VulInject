void
FUN1(VAR1 *VAR2)
{
vdev_dev_strs_t VAR3;
char *VAR4, *VAR5, *VAR6;
uint64_t VAR7 = 0;
char *VAR8, *VAR9;


VAR4 = getenv("");
if (VAR4 && (FUN2(VAR4, NULL, 0) > 0 ||
!FUN3(VAR4, "", 3) || !FUN3(VAR4, "", 2))) {
(void) FUN4(VAR2, VAR10);
(void) FUN4(VAR2, VAR11);
return;
}

if (FUN5(VAR2, VAR12, &VAR5) != 0 ||
strcmp(VAR5, VAR13) != 0) {
return;
}
if (FUN5(VAR2, VAR14, &VAR6) != 0)
return;
(void) FUN6(VAR2, VAR15, &VAR7);


if (FUN7(VAR6, &VAR3, (VAR16)VAR7) == 0) {
(void) FUN8(VAR2, VAR10, VAR3.VAR17);
if (VAR3.VAR18[0] != '') {
(void) FUN8(VAR2, VAR11,
VAR3.VAR18);
}


VAR8 = FUN9(VAR6);
VAR9 = FUN10(VAR8);
if (VAR9)
FUN8(VAR2, VAR19,
VAR9);
else
FUN4(VAR2, VAR19);

free(VAR8);
free(VAR9);
} else {

(void) FUN4(VAR2, VAR10);
(void) FUN4(VAR2, VAR11);
(void) FUN4(VAR2, VAR19);
}
}