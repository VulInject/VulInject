static int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3;
int VAR4 = 0;

VAR3 = !(VAR2->VAR5 ||
VAR2->VAR6 ||
VAR2->VAR7 ||
(!VAR2->VAR8));
if (!VAR3 != !VAR2->VAR9) {
VAR2->VAR9 = VAR3;
VAR4 = !0;
}
if (VAR2->VAR9 && VAR2->VAR10) {
VAR2->VAR10 = 0;
VAR4 = !0;
}
return VAR4;
}