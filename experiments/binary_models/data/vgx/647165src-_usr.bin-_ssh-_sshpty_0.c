void
FUN1(struct VAR1 *VAR2, const char *VAR3)
{
struct VAR4 *VAR5;
gid_t VAR6;
mode_t VAR7;
struct stat VAR8;


VAR5 = FUN2("");
if (VAR5 == NULL)
FUN3("");
VAR6 = (VAR5 != NULL) ? VAR5->VAR9 : VAR2->VAR10;
VAR7 = (VAR5 != NULL) ? 0620 : 0600;


if (FUN4(VAR3, &VAR8) == -1)
FUN3("", VAR3,
strerror(VAR11));

if (VAR8.VAR12 != VAR2->VAR13 || VAR8.VAR14 != VAR6) {
if (chown(VAR3, VAR2->VAR13, VAR6) == -1) {
if (VAR11 == VAR15 &&
(VAR8.VAR12 == VAR2->VAR13 || VAR8.VAR12 == 0))
FUN5("",
VAR3, (VAR16)VAR2->VAR13, (VAR16)VAR6,
strerror(VAR11));
else
FUN3("",
VAR3, (VAR16)VAR2->VAR13, (VAR16)VAR6,
strerror(VAR11));
}
}

if ((VAR8.VAR17 & (VAR18|VAR19|VAR20)) != VAR7) {
if (chmod(VAR3, VAR7) == -1) {
if (VAR11 == VAR15 &&
(VAR8.VAR17 & (VAR21 | VAR22)) == 0)
FUN5("",
VAR3, (VAR16)VAR7, strerror(VAR11));
else
FUN3("",
VAR3, (VAR16)VAR7, strerror(VAR11));
}
}
}