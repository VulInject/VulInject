int FUN1(const struct VAR1 *VAR2)
{
static struct oidset VAR3;
static int VAR4;

if (!VAR4) {
if (FUN2()) {
FUN3(VAR5,
&VAR3,
VAR6 |
VAR7);
}
VAR4 = 1;
}
return FUN4(&VAR3, VAR2);
}