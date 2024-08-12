VAR1
FUN1(struct VAR2 *VAR3)
{
VAR1	*VAR4, *VAR5;
u_int	 VAR6 = 0;


VAR4 = (VAR1 *)&VAR3->VAR7;
VAR5 = (VAR1 *)VAR3 + VAR3->VAR8;
for (; VAR4 < VAR5; VAR4++) {

switch (*VAR4) {
case 0xff:
VAR6 += 8;
break;
case 0xfe:
VAR6 += 7;
goto VAR9;
case 0xfc:
VAR6 += 6;
goto VAR9;
case 0xf8:
VAR6 += 5;
goto VAR9;
case 0xf0:
VAR6 += 4;
goto VAR9;
case 0xe0:
VAR6 += 3;
goto VAR9;
case 0xc0:
VAR6 += 2;
goto VAR9;
case 0x80:
VAR6 += 1;
goto VAR9;
case 0x00:
goto VAR9;
default:
FUN2("");
}
}

VAR9:
if (VAR6 > sizeof(struct VAR10) * 8)
FUN2("", VAR11, VAR6);
return (VAR6);
}