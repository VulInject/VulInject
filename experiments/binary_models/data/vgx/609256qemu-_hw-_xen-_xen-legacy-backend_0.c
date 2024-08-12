static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

if (VAR2->VAR4 != VAR5  &&
VAR2->VAR4 != VAR6) {
if (VAR2->VAR7->VAR8 & VAR9) {
FUN2(VAR2, 2, "");
} else {
FUN2(VAR2, 2, "");
return -1;
}
}

if (VAR2->VAR7->VAR8 & VAR10) {
VAR2->VAR11 = FUN3(NULL, 0);
if (VAR2->VAR11 == NULL) {
FUN2(NULL, 0, "");
return -1;
}
} else {
VAR2->VAR11 = NULL;
}

if (VAR2->VAR7->VAR12) {
VAR3 = VAR2->VAR7->FUN4(VAR2);
}
if (VAR3 != 0) {
FUN2(VAR2, 0, "");
return VAR3;
}

FUN5(VAR2, VAR6);
return 0;
}