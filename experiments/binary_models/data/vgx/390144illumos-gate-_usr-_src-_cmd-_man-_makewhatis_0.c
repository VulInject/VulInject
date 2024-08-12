static void
FUN1(struct VAR1 *VAR2, char *VAR3)
{
VAR4		*VAR5;
VAR6	*VAR7;
char		*VAR8;
int		VAR9 = VAR10;
size_t		VAR11;
char		*VAR12 = NULL;
size_t		VAR13 = 0;

FUN2(VAR14);
if ((VAR5 = fopen(VAR2->VAR15, "")) == NULL) {
FUN3("", VAR2->VAR15);
return;
}
while (FUN4(&VAR12, &VAR13, VAR5) > 0) {

if (FUN5(VAR12, """, 3) == 0)
continue;
switch (VAR9) {

case VAR10:
if (FUN6(VAR12, ""))
VAR9 = VAR16;
else if (FUN6(VAR12, ""))
VAR9 = VAR17;
continue;

case VAR16: {
char *VAR18;

if (FUN5(VAR12, "", 3) == 0 ||
FUN5(VAR12, "", 3) == 0)
break;
(void) FUN7(VAR12);
if (strcmp(VAR12, "") == 0)
continue;
VAR18 = VAR12;
if (FUN5(VAR18, "", 3) == 0) {
VAR18 += 3;
VAR18 = FUN8(VAR18);
}
FUN9(VAR18);
continue;
}

case VAR17:
(void) FUN7(VAR12);
if (FUN5(VAR12, "", 3) == 0) {
FUN10(VAR12);
continue;
} else {
if (strcmp(VAR12, "") == 0)
continue;
FUN11(VAR14, "", 2);
VAR9 = VAR19;
}


case VAR19:
if (FUN5(VAR12, "", 3) == 0)
break;
(void) FUN7(VAR12);
if (strcmp(VAR12, "") == 0)
continue;
FUN10(VAR12);
continue;
}
break;
}
(void) fclose(VAR5);
FUN12(VAR14, "");
VAR12 = FUN13(VAR14);

VAR8 = strstr(VAR12, "");
if (VAR8 == NULL) {
VAR8 = strchr(VAR12, '');
if (VAR8 == NULL)
return;
*VAR8++ = '';
} else {
*VAR8 = '';
VAR8 += 3;
}
VAR7 = FUN14();
FUN15(VAR7, VAR12);
FUN2(VAR20);
if (!FUN16(VAR7, VAR2->VAR21) &&
FUN17(VAR3, VAR7, VAR2->VAR22)) {

FUN18(VAR2->VAR21, VAR2->VAR22);
}
for (VAR11 = 0; VAR11 < VAR7->VAR23; VAR11++)
FUN18(VAR7->VAR24[VAR11], VAR2->VAR22);
FUN19(VAR7, 0);

FUN20(VAR20, 2);
while (FUN21(VAR20) < VAR25)
FUN11(VAR20, "", 1);
FUN11(VAR20, "", 3);
FUN22(VAR20, FUN8(VAR8));
(void) FUN23(VAR26, strdup(FUN13(VAR20)));
}