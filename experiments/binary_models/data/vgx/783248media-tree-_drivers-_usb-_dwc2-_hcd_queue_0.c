static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5;
s16 VAR6;

VAR5 = 0;

if (VAR4->VAR7 == VAR8 || VAR4->VAR9) {

VAR6 = 100 - VAR4->VAR10;
} else {

VAR6 = 900 - VAR4->VAR10;
}

if (VAR2->VAR11 > VAR6) {
FUN2(VAR2->VAR12,
"",
VAR13, VAR2->VAR11, VAR4->VAR10);
VAR5 = -VAR14;
}

return VAR5;
}