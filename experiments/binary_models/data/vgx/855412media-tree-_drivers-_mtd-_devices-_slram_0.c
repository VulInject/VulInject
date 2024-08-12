FUN1("", VAR1);


static int VAR2 FUN2(void)
{
char *VAR3;

char *VAR4;
char *VAR5;

if (!VAR6) {
FUN3("");
return(-VAR7);
}
while (VAR6) {
VAR3 = VAR4 = VAR5 = NULL;

if (!(VAR3 = FUN4(&VAR6, ""))) {
FUN3("");
break;
}
FUN5("", VAR3);
if ((!VAR6) || (!(VAR4 = FUN4(&VAR6, "")))) {
FUN3("");
}
FUN5("", VAR4);
if ((!VAR6) || (!(VAR5 = FUN4(&VAR6, "")))) {
FUN3("");
}
FUN5("", VAR5);
if (FUN6(VAR3, VAR4, VAR5) != 0) {
return(-VAR7);
}
}
int VAR8;
int VAR9;

for (VAR8 = 0; VAR8 < VAR10 && VAR6[VAR8];
VAR8++) {
}

if ((VAR8 % 3 != 0) || (VAR8 == 0)) {
FUN3("");
return(-VAR7);
}
for (VAR9 = 0; VAR9 < (VAR8 / 3); VAR9++) {
VAR3 = VAR6[VAR9 * 3];

if (FUN6(VAR3, VAR6[VAR9 * 3 + 1], VAR6[VAR9 * 3 + 2])!=0) {
return(-VAR7);
}

}

return(0);
}