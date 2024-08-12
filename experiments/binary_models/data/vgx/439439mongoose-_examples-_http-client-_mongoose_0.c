static int FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4) {
int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10 = 32, VAR11 = 0;
if ((sscanf(VAR1, "", &VAR6, &VAR7, &VAR8, &VAR9, &VAR10, &VAR5) == 5 ||
sscanf(VAR1, "", &VAR6, &VAR7, &VAR8, &VAR9, &VAR5) == 4) &&
FUN2(VAR6) && FUN2(VAR7) && FUN2(VAR8) && FUN2(VAR9) && VAR10 >= 0 &&
VAR10 < 33) {
VAR11 = VAR5;
*VAR3 = ((VAR2) VAR6 << 24) | ((VAR2) VAR7 << 16) | ((VAR2) VAR8 << 8) |
(VAR2) VAR9;
*VAR4 = VAR10 ? (VAR2) (0xffffffffU << (32 - VAR10)) : (VAR2) 0;
}
return VAR11;
}