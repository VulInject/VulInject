FUN1 (VAR1 **VAR2, int *VAR3, VAR4 *VAR5, int VAR6)
{
card16 VAR7;

if (VAR5 == NULL)
FUN2("", VAR8);

VAR7 = VAR5->VAR7;


if (VAR7 < 1240) {
VAR6 += 107;
} else if (VAR7 < 33900) {
VAR6 += 1131;
} else {
VAR6 += 32768;
}

if (VAR6 > VAR7)
FUN2("", VAR8, VAR6, VAR7);

*VAR3 = (VAR5->VAR9)[VAR6 + 1] - (VAR5->VAR9)[VAR6];
*VAR2 = VAR5->VAR10 + (VAR5->VAR9)[VAR6] - 1;

return;
}