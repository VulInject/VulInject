int FUN1(struct VAR1* VAR2)
{
char* VAR3;

if (!VAR2) {
FUN2("");
return -1;
}

if (VAR2->VAR4) {
fclose(VAR2->VAR4);
VAR2->VAR4 = 0;

VAR3 = FUN3(VAR2->VAR5);
if (VAR3 == 0) {
FUN2("");
return -1;
}

VAR2->VAR4 = fopen(VAR3, "");
FUN4(VAR3);

if (!VAR2->VAR4) {
FUN2("");
return -1;
}
}

return 0;
}