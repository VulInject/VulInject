static int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4,
VAR5 *VAR6)
{
unsigned long VAR7;
u8 VAR8;
int VAR9;

VAR8 = VAR2->VAR10 & 0xff;
for (VAR9 = 0; VAR9 < FUN2(VAR11); VAR9++) {
if (VAR8 == VAR11[VAR9]) {
*VAR6 = VAR9 + 1;
break;
}
}

if (VAR9 == FUN2(VAR11))
return -VAR12;

VAR7 = VAR2->VAR10;
VAR7 &= 0xff00;
*VAR4 = VAR7;

return 0;
}