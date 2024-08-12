static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (VAR2->VAR4 == VAR5) {

VAR3 = FUN2(VAR2, VAR6, 0x7FFF);
VAR3 = FUN3(VAR2, VAR7);
VAR3 = FUN2(VAR2, VAR6,
VAR8 |
VAR9);
} else {
VAR3 = FUN2(VAR2, VAR6, 0);
if (VAR3)
return VAR3;


VAR3 = FUN3(VAR2, VAR7);
}

return VAR3 < 0 ? VAR3 : 0;
}