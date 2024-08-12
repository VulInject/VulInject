static int
FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR1 = FUN2(VAR2);

FUN3((VAR1->VAR6 & VAR7) != 0);
if (VAR1->VAR6 & VAR7) {
*VAR4 = VAR1->VAR4;
} else {
return VAR8;
}
return 0;
}