int FUN1(const unsigned char *VAR1, int VAR2, int VAR3,
VAR4 *VAR5)
{

if (VAR2 < 8 || VAR2 > 56) {
return VAR6;
}

if (VAR3 != 0 && VAR3 != 16) {
return VAR7;
}

return FUN2(VAR1, VAR2, NULL, 0, VAR5);
}