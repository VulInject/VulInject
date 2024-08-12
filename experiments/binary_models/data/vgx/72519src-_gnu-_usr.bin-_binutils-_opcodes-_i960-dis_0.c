FUN1 (bfd_vma VAR1, struct VAR2 *VAR3)
{
unsigned int VAR4, VAR5 = 0xdeadbeef;
bfd_byte VAR6[8];
int VAR7;

VAR8 = VAR3;
VAR9 = VAR8->VAR9;



VAR7 = (*VAR8->VAR10) (VAR1, (VAR11 *) VAR6, 4, VAR8);
if (VAR7 != 0)
{
(*VAR8->VAR12) (VAR7, VAR1, VAR8);
return -1;
}

VAR4 = FUN2 (VAR6);


switch ( (VAR4 >> 28) & 0xf )
{
default:
break;
case 0x8:
case 0x9:
case 0xa:
case 0xb:
case 0xc:

VAR7 = (*VAR8->VAR10)
(VAR1 + 4, (VAR11 *) (VAR6 + 4), 4, VAR8);
if (VAR7 != 0)
{
(*VAR8->VAR12) (VAR7, VAR1, VAR8);
return -1;
}
VAR5 = FUN2 (VAR6 + 4);
break;
}

return FUN3( VAR1, VAR4, VAR5 );
}




struct VAR13 {
char *VAR14;
short VAR15;
};

struct VAR16 {
int VAR17;
char *VAR14;
short VAR15;
};