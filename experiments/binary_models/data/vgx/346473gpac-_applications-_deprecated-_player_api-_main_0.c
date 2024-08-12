static VAR1 FUN1(int argc, char **argv)
{
int VAR2;
GF_User VAR3;
VAR4 *VAR5;
VAR6 *VAR7;
VAR7 = FUN2("", NULL);
VAR3.VAR8 = FUN3(NULL, VAR7);
VAR3.VAR9 = VAR7;
VAR3.VAR10 = VAR11;
VAR5 = FUN4(&VAR3);
if (!VAR5)
return VAR12;

for (VAR2=1; VAR2<argc; ++VAR2) {
Bool VAR13 = FUN5(VAR5, argv[VAR2]);
if (VAR13 == VAR12) {
fprintf(VAR14, ""%VAR15\"", VAR2, argv[VAR2]);
return VAR12;
}
}

FUN6(VAR5);
FUN7(VAR5);
FUN8(VAR3.VAR8);
FUN9(VAR7);

return VAR16;
}