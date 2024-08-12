static VAR1 FUN1(int VAR2, int VAR3)
{
char VAR4[16384];
ssize_t VAR5 = read(VAR2, VAR4, sizeof(VAR4));
if (VAR5 < 0) {
if (VAR6 != VAR7 && VAR6 != VAR8)
FUN2("", strerror(VAR6));
return VAR5;
}
FUN3(1, VAR3, VAR4, VAR5, VAR9);
return VAR5;
}