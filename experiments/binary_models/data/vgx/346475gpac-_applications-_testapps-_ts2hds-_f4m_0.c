VAR1 *FUN1(char *VAR2)
{
VAR1 *VAR3 = FUN2(1, sizeof(VAR1));
char VAR4[VAR5];


VAR3->VAR6 = "VAR7:
VAR3->VAR2 = VAR2;
sprintf(VAR4, "", VAR3->VAR2);
VAR3->VAR8 = FUN3(VAR4, "");
if (!VAR3->VAR8) {
fprintf(VAR9, "", VAR4);
assert(0);
FUN4(VAR3);
return NULL;
}
VAR3->VAR10 = FUN5();


{
VAR11 *VAR12 = FUN2(1, sizeof(VAR11));
VAR12->VAR2 = "";
VAR12->VAR13 = 100;
sprintf(VAR4, "", VAR3->VAR2, VAR12->VAR2, VAR12->VAR13);
VAR12->VAR8 = FUN3(VAR4, "");
if (!VAR12->VAR8) {
fprintf(VAR9, "", VAR4);
assert(0);
FUN6(VAR3->VAR10);
FUN4(VAR12);
FUN4(VAR3);
return NULL;
}
FUN7(VAR3->VAR10, VAR12);
}

return VAR3;
}