VAR1 FUN1(struct VAR2 *VAR3, u16 VAR4,
u8 VAR5)
{
u16 VAR6 = VAR5;


switch (FUN2(VAR3->VAR7)) {
case 1:
break;
case 2:
VAR6 += VAR8;
break;
case 3:
VAR6 += VAR9;
break;
}

if (VAR4 > VAR6)
VAR4 -= VAR6;
else
VAR4 = 0;

return FUN3(VAR1, VAR4, VAR10);
}