int FUN1(int argc, char* argv[])
{
UINT32 VAR1;
UINT32 VAR2;
const char* VAR3;
VAR4* VAR5;

FUN2(argc);
FUN2(argv);

VAR3 = VAR6;
VAR1 = strlen(VAR3) + 1;
VAR2 = VAR1 +
(VAR7 - (VAR1 % VAR7));
FUN3("" VAR8 "" VAR8 "", VAR1, VAR2);
VAR5 = (VAR4*)malloc(VAR2);
if (!VAR5)
{
FUN3("");
return -1;
}
CopyMemory(VAR5, VAR3, VAR1);
FUN4(&VAR5[VAR1], (VAR2 - VAR1));
FUN5(VAR9);

if (!FUN6(VAR5, VAR2, VAR10))
{
FUN3("");
return -1;
}

FUN3("" VAR8 "" VAR8 "", VAR3,
VAR1, VAR2);
FUN7("", VAR11, VAR5, VAR2);

if (!FUN8(VAR5, VAR2, VAR10))
{
FUN3("");
return -1;
}

FUN3("", VAR5);
FUN9(VAR5, VAR2);
free(VAR5);
return 0;
}