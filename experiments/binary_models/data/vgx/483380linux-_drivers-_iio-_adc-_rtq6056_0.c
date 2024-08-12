static int FUN1(struct VAR1 *VAR2,
int VAR3)
{
unsigned int VAR4;
int VAR5;

if (VAR3 <= 0) {
FUN2(VAR2->VAR6, "", VAR3);
return -VAR7;
}


VAR4 = 5120000 / VAR3;
VAR5 = FUN3(VAR2->VAR8, VAR9, VAR4);
if (VAR5)
return VAR5;

VAR2->VAR10 = VAR3;

return 0;
}