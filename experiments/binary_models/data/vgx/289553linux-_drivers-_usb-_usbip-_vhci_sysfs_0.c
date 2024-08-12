static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
if (*VAR2 >= VAR4) {
FUN2("", *VAR2);
return 0;
}
*VAR2 = FUN3(*VAR2, VAR4);

if (*VAR3 >= VAR5) {
FUN2("", *VAR3);
return 0;
}
*VAR3 = FUN3(*VAR3, VAR5);

return 1;
}