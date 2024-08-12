static VAR1 FUN1(VAR2 *VAR3,const size_t VAR4,
unsigned char *VAR5,const size_t VAR6)
{
int
VAR7,
VAR8;

VAR9
VAR10,
VAR11;

unsigned char
*VAR12,
*VAR13;

VAR9
VAR14;

assert(VAR3 != (VAR2 *) NULL);
assert(VAR3->VAR15 == VAR16);
assert(VAR5 != (unsigned char *) NULL);
if (FUN2() != VAR17)
(void) FUN3(VAR18,FUN4(),"",VAR3->VAR19);
(void) memset(VAR5,0,VAR6*sizeof(*VAR5));
VAR7=0;
VAR11=0;
VAR12=VAR5;
VAR13=VAR5+VAR6;
for (VAR14=0; VAR14 < (VAR9) VAR3->VAR20; )
{
VAR1
VAR21;

if ((VAR12 < VAR5) || (VAR12 >= VAR13))
break;
VAR8=FUN5(VAR3);
if (VAR8 == VAR22)
break;
if (VAR8 > 0)
{

VAR8=(int) FUN6((VAR9) VAR8,(VAR9) (VAR13-VAR12));
VAR7=FUN5(VAR3);
if (VAR7 == VAR22)
break;
if (VAR4 == VAR23)
{
for (VAR10=0; VAR10 < (VAR9) VAR8; VAR10++)
*VAR12++=(unsigned char) VAR7;
}
else
{
for (VAR10=0; VAR10 < (VAR9) VAR8; VAR10++)
*VAR12++=(unsigned char) ((VAR10 & 0x01) != 0 ? (VAR7 & 0x0f) :
((VAR7 >> 4) & 0x0f));
}
VAR11+=VAR8;
}
else
{

VAR8=FUN5(VAR3);
if (VAR8 == VAR22)
break;
if (VAR8 == 0x01)
break;
switch (VAR8)
{
case 0x00:
{

VAR11=0;
VAR14++;
VAR12=VAR5+VAR14*VAR3->VAR24;
break;
}
case 0x02:
{

VAR7=FUN5(VAR3);
if (VAR7 == VAR22)
return(VAR17);
VAR11+=VAR7;
VAR7=FUN5(VAR3);
if (VAR7 == VAR22)
return(VAR17);
VAR14+=VAR7;
VAR12=VAR5+VAR14*VAR3->VAR24+VAR11;
break;
}
default:
{

VAR8=(int) FUN6((VAR9) VAR8,(VAR9) (VAR13-VAR12));
if (VAR8 < 0)
break;
if (VAR4 == VAR23)
for (VAR10=0; VAR10 < (VAR9) VAR8; VAR10++)
{
VAR7=FUN5(VAR3);
if (VAR7 == VAR22)
break;
*VAR12++=(unsigned char) VAR7;
}
else
for (VAR10=0; VAR10 < (VAR9) VAR8; VAR10++)
{
if ((VAR10 & 0x01) == 0)
{
VAR7=FUN5(VAR3);
if (VAR7 == VAR22)
break;
}
*VAR12++=(unsigned char)
((VAR10 & 0x01) != 0 ? (VAR7 & 0x0f) : ((VAR7 >> 4) & 0x0f));
}
if (VAR7 == VAR22)
break;
VAR11+=VAR8;

if (VAR4 == VAR23)
{
if ((VAR8 & 0x01) != 0)
if (FUN5(VAR3) == VAR22)
break;
}
else
if (((VAR8 & 0x03) == 1) || ((VAR8 & 0x03) == 2))
if (FUN5(VAR3) == VAR22)
break;
break;
}
}
}
VAR21=FUN7(VAR3,VAR25,(VAR26) VAR14,
VAR3->VAR20);
if (VAR21 == VAR17)
break;
}
(void) FUN5(VAR3);  
(void) FUN5(VAR3);
return((VAR13-VAR5) < (VAR9) VAR6 ? VAR17 : VAR27);
}