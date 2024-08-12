int FUN1(int VAR1, char *VAR2, size_t VAR3, struct VAR4 *VAR5, socklen_t VAR6)
{
ssize_t VAR7;
int try = 0;
VAR8:
VAR7 = sendto(VAR1, VAR2, VAR3, 0, VAR5, VAR6);
if (VAR7 < 3) {
if ((VAR9 == VAR10) && (try < 3)) {
try++;
FUN2("", VAR9, strerror(VAR9));
goto VAR8;
}
FUN2("", VAR9, strerror(VAR9));
if ((VAR9==VAR11)||(VAR9==VAR10)||(VAR9==VAR12)) return 0;
return -1;
}
if (VAR7 != VAR3) {
FUN2("", (long int)VAR7, (long int)VAR3);
return 0;
}

return 0;
}