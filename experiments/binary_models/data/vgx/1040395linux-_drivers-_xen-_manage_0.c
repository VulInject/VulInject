static int FUN1(void)
{
int VAR1;
int VAR2;
char VAR3[VAR4];

VAR1 = FUN2(&VAR5);
if (VAR1) {
FUN3("");
return VAR1;
}


VAR1 = FUN2(&VAR6);
if (VAR1) {
FUN3("");
return VAR1;
}

for (VAR2 = 0; VAR2 < FUN4(VAR7); VAR2++) {
if (!VAR7[VAR2].VAR8)
continue;
snprintf(VAR3, VAR4, "",
VAR7[VAR2].VAR9);
VAR1 = FUN5(VAR10, "", VAR3, "", 1);
if (VAR1) {
FUN3("", VAR11,
VAR1, VAR3);
return VAR1;
}
}

return 0;
}