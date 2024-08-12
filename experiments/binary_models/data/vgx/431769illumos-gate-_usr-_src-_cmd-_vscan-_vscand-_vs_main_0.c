static int
FUN1(char *VAR1, uid_t VAR2, gid_t VAR3, mode_t VAR4)
{
int VAR5, VAR6 = 0;
struct stat VAR7;
char VAR8[VAR9];

if ((VAR5 = open(VAR1, VAR10 | VAR11, VAR4)) == -1) {
VAR6 = -1;
} else {
if (FUN2(VAR5, &VAR7) != 0) {
VAR6 = -1;
} else {
if ((VAR7.VAR12 & VAR13) != VAR4) {
if (FUN3(VAR5, VAR4) != 0)
VAR6 = -1;
}

if ((VAR7.VAR14 != VAR2) ||
(VAR7.VAR15 != VAR3)) {
if (FUN4(VAR5, VAR2, VAR3) != 0)
VAR6 = -1;
}
}

(void) close(VAR5);
}

if (VAR6 == -1) {
(void) snprintf(VAR8, VAR9, "",
FUN5(""), VAR1);
FUN6(VAR8);
}

return (VAR6);
}