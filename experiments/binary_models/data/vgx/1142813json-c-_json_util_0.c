int FUN1(const char *VAR1, struct VAR2 *VAR3, int VAR4)
{
int VAR5, VAR6;
int VAR7;

if (!VAR3)
{
FUN2("");
return -1;
}

if ((VAR5 = open(VAR1, VAR8 | VAR9 | VAR10, 0644)) < 0)
{
FUN2("",
VAR1, strerror(VAR11));
return -1;
}
VAR6 = FUN3(VAR5, VAR3, VAR4, VAR1);
VAR7 = VAR11;
close(VAR5);
VAR11 = VAR7;
return VAR6;
}