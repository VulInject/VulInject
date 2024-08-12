int FUN1(VAR1 *VAR2,
VAR3 *VAR4,
VAR3 *VAR5,
VAR6 **VAR7)
{
int VAR8;

FUN2(VAR2, VAR4, VAR5);
VAR8 = FUN3(VAR5, VAR4, VAR7);
if (VAR8 < 0) {
FUN4(VAR2);
return -1;
}

FUN5(VAR2, VAR8);
if (FUN6(VAR2, VAR8, VAR7) < 0) {
close(VAR8);
return -1;
}

return 0;
}