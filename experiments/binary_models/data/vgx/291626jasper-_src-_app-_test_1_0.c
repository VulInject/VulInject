int FUN1(int argc, char **argv)
{
FUN2(argc);
FUN2(argv);

FUN3();

char **VAR1;
size_t VAR2;
size_t VAR3;
char VAR4[] = "";
if (FUN4("", VAR4, &VAR1, &VAR2,
&VAR3)) {
return 1;
};
FUN5("",
FUN6(void *, VAR1), VAR2, VAR3);
if (VAR1) {
for (int VAR5 = 0; VAR5 < VAR3; ++VAR5) {
FUN5("", VAR1[VAR5]);
FUN7(VAR1[VAR5]);
}
FUN7(VAR1);
}

FUN8();

return 0;
}