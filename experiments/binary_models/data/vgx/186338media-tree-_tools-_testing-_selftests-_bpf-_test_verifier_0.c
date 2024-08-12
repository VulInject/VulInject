static int FUN1(void)
{
int VAR1, VAR2;

VAR1 = FUN2(VAR3, sizeof(int),
sizeof(int), 1, 0);
if (VAR1 < 0) {
FUN3("", strerror(VAR4));
return VAR1;
}

VAR2 = FUN4(VAR5,
sizeof(int), VAR1, 1, 0);
if (VAR2 < 0)
FUN3("",
strerror(VAR4));

close(VAR1);

return VAR2;
}