int FUN1(VAR1 *VAR2, const char *VAR3) {
int VAR4;
regmatch_t VAR5[32];
char *VAR6[32] = {0};
size_t VAR7;

if ((VAR2 == NULL) || (VAR3 == NULL))
return -1;

if (VAR2->VAR8 & VAR9) {
VAR4 =
FUN2(&VAR2->VAR10, VAR3, FUN3(VAR5), VAR5,
0);

if (VAR4 == 0) {
FUN4("");
return 0;
}
}

VAR4 = FUN2(&VAR2->VAR11, VAR3, FUN3(VAR5), VAR5,
0);


if (VAR4 != 0)
return 0;

for (VAR7 = 0; VAR7 < FUN3(VAR6);
VAR7++) {
if ((VAR5[VAR7].VAR12 < 0) || (VAR5[VAR7].VAR13 < 0))
break;

VAR6[VAR7] = FUN5(VAR3, VAR5[VAR7].VAR12,
VAR5[VAR7].VAR13);
if (VAR6[VAR7] == NULL) {
VAR4 = -1;
break;
}
}

if (VAR4 != 0) {
FUN6("");
} else {
VAR4 = VAR2->FUN7(VAR3, VAR6, VAR7, VAR2->VAR14);
if (VAR4 != 0) {
FUN6("");
}
}

for (size_t VAR15 = 0; VAR15 < VAR7; VAR15++) {
FUN8(VAR6[VAR15]);
}

return VAR4;
}