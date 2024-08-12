static int FUN1(char *VAR1, const struct VAR2 *VAR3,
struct VAR4 *VAR5, bool VAR6,
bool VAR7)
{
int VAR8 = 0;
unsigned long VAR9;

if (strcmp(VAR1, "") == 0) {
if (VAR6)
VAR5->VAR10 = VAR3->VAR11[VAR12];
else
VAR8 = -VAR13;
} else if (FUN2(VAR1, "", 5) == 0) {
if (VAR1[5] == '') {
if (strcmp(VAR3->VAR14, VAR15))
return -VAR13;

if (VAR7)
VAR5->VAR10 = VAR16;
else
VAR5->VAR10 = VAR17;
} else if (FUN3(VAR1[5])) {
VAR8 = FUN4(VAR1 + 5, 10, &VAR9);
if (VAR8 || (VAR7 && VAR9 > VAR18))
VAR8 = -VAR13;
else {
VAR5->VAR10 = VAR3->VAR11[VAR19];
VAR5->VAR20 = (void *)VAR9;
}
} else
VAR8 = -VAR13;
} else if (strcmp(VAR1, "") == 0) {
if (strcmp(VAR3->VAR14, "") != 0 &&
strcmp(VAR3->VAR14, "") != 0)
return -VAR13;
VAR5->VAR10 = VAR3->VAR11[VAR21];
} else
VAR8 = -VAR13;

return VAR8;
}