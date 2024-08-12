int FUN1(const VAR1 *VAR2, unsigned char *VAR3, size_t VAR4)
{
int VAR5 = VAR6;
unsigned char VAR7[VAR8];
size_t VAR9 = 0;

if ((VAR5 = FUN2(VAR2, VAR7,
sizeof(VAR7))) < 0) {
return VAR5;
}

if ((VAR5 = FUN3(VAR10, VAR11,
VAR7 + sizeof(VAR7) - VAR5,
VAR5, VAR3, VAR4, &VAR9)) != 0) {
return VAR5;
}

return 0;
}