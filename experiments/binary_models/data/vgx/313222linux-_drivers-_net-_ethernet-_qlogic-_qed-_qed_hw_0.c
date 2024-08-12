static int FUN1(struct VAR1 *VAR2)
{
u32 VAR3 = 10000, VAR4 = 0;
int VAR5 = 0;

FUN2();
while (*VAR2->VAR6.VAR7 != VAR8) {
FUN3(VAR9);
if (++VAR4 > VAR3) {
FUN4(VAR2->VAR10,
"",
*VAR2->VAR6.VAR7,
VAR8);
VAR5 = -VAR11;
break;
}


FUN2();
}

if (VAR5 == 0)
*VAR2->VAR6.VAR7 = 0;

return VAR5;
}