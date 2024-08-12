VAR1
FUN1(int VAR2)
{
switch (VAR2) {

case 2:		return 0x0;
case 4:		return 0x1;
case 11:	return 0x2;
case 22:	return 0x3;


case 12:	return 0xb;
case 18:	return 0xf;
case 24:	return 0xa;
case 36:	return 0xe;
case 48:	return 0x9;
case 72:	return 0xd;
case 96:	return 0x8;
case 108:	return 0xc;


default:	return 0xff;
}
}