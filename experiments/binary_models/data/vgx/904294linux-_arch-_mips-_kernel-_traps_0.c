static void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, const char *VAR5, bool VAR6)
{
const int VAR7 = 2 * sizeof(unsigned long);
unsigned long VAR8;
int VAR9;
unsigned long *VAR10 = (unsigned long *)VAR4->VAR4[29];

FUN2("", VAR5);
VAR9 = 0;
while ((unsigned long) VAR10 & (VAR11 - 1)) {
if (VAR9 && ((VAR9 % (64 / VAR7)) == 0)) {
FUN3("");
FUN2("", VAR5);
}
if (VAR9 > 39) {
FUN3("");
break;
}

if (FUN4(&VAR8, VAR10++, VAR6)) {
FUN3("");
break;
}

FUN3("", VAR7, VAR8);
VAR9++;
}
FUN3("");
FUN5(VAR2, VAR4, VAR5, VAR6);
}