static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;
uint64_t VAR5;


VAR4 = 0;
for (VAR3 = 0; VAR3 < VAR6; ++VAR3) {
VAR5 = FUN2(VAR2, VAR7);
if (VAR5 & VAR8) {
VAR4 = 1;
break;
}
FUN3(20);
}
if (VAR3 >= VAR6) {
FUN4(VAR2, "", VAR3);
VAR4 = 0;
}
return VAR4;
}