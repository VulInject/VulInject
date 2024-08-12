void
FUN1(void)
{
if (VAR1 != VAR2) {
write(1, VAR2, VAR1 - VAR2);
if (VAR3)
fwrite(VAR2, 1, VAR1-VAR2, VAR3);
VAR1 = VAR2;
}
}