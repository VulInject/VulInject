int FUN1(VAR1* VAR2, const VAR3* VAR4, word32 VAR5)
{
int VAR6 = 0;


if ((VAR2 == NULL) || (VAR4 == NULL) || (VAR5 > VAR7) ||
(VAR5 == 0)) {
VAR6 = VAR8;
}


if ((VAR6 == 0) && (!VAR2->VAR9)) {
VAR6 = VAR10;
}

if ((VAR6 == 0) && (!VAR2->VAR11)) {
VAR6 = VAR12;
}

if (VAR6 == 0) {

if (VAR13
|| FUN2(VAR14)
|| FUN3(VAR14)
) {
VAR6 = FUN4(VAR2, VAR4, VAR5);
}
else
{
ALIGN32 byte VAR15[VAR7];

VAR6 = FUN5(VAR2, VAR15, VAR5);
if (VAR6 == 0) {

if (FUN6(VAR4, VAR15, VAR5) != 0) {
VAR6 = VAR16;
}
}
}
}


if (VAR6 == 0)
FUN7(VAR2);

return VAR6;
}