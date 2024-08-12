int FUN1(char *VAR1,
const char *VAR2,
int VAR3)
{
VAR4 *VAR5;
int VAR6;
int VAR7 = 0;

if (VAR3) {
return VAR7;
}
if (VAR2 != NULL) {
VAR6 = FUN2(VAR1);
if ((VAR6 >= 0) && (VAR6 < VAR8)) {

if (!(VAR6 & (VAR9 | VAR10))) {
VAR6 &= VAR11;
if ((VAR5 = FUN3(VAR2)) != 0) {
if (VAR3)
VAR12[VAR6 + 1] = VAR5->VAR13;
else
VAR14[VAR6 + 1] = (VAR15) VAR5->VAR13;

VAR7 = (VAR6 ? VAR6 : (int) FUN4(VAR5->VAR13));
}
}
}
}
return VAR7;
}