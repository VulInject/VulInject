static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
unsigned int VAR6;
u8 VAR7;
int VAR8;

switch (VAR3) {
case 0 ... 2:
VAR7 = VAR9;
VAR6 = 2;
break;

case 3 ... 16:
VAR7 = VAR10;
VAR6 = 16;
break;

case 17 ... 64:
VAR7 = VAR11;
VAR6 = 64;
break;

default:
VAR7 = VAR12;
VAR6 = 128;
break;
}

VAR8 = FUN3(VAR5->VAR13, VAR14,
VAR15, 0x1);
if (VAR8 < 0)
return VAR8;

VAR8 = FUN3(VAR5->VAR13, VAR16,
VAR17, VAR7);
if (VAR8 < 0)
return VAR8;

VAR2->VAR3 = VAR6;

return 0;
}