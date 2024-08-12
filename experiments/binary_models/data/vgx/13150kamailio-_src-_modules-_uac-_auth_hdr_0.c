int FUN1( VAR1 *VAR2, struct VAR3 *VAR4)
{
char *VAR5;
char *VAR6;
int  VAR7;
int VAR8;
str VAR9;
str VAR10;
int VAR11;

if (VAR2->VAR12==0 || *VAR2->VAR12==0 )
{
FUN2("");
goto VAR13;
}

memset( VAR4, 0, sizeof(struct VAR3));
VAR5 = VAR2->VAR12;
VAR6 = VAR2->VAR12 + VAR2->VAR14;


while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
if (VAR5+VAR15>=VAR6 )
goto VAR16;
if (FUN4(VAR5,VAR17,VAR15)!=0)
goto VAR16;
VAR5 += VAR15;
if (!FUN3((int)*VAR5))
goto VAR16;
VAR5++;
while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
if (VAR5==VAR6)
goto VAR16;

while (VAR5<VAR6)
{
VAR8 = VAR18;
VAR11 = 0;

VAR9.VAR12 = VAR5;
if (VAR5+4<VAR6)
{
VAR7 = FUN5( FUN6(VAR5) );
switch(VAR7)
{
FUN7( 0x7265616c, '', VAR19, 1); 
FUN7( 0x6e6f6e63, '', VAR20, 1); 
FUN7( 0x7374616c, '', VAR21, 0); 
FUN8( 0x646f6d62, '', '', VAR22, 1); 
FUN8( 0x6f706171, '', '', VAR23, 1); 
case 0x616c676f: 
if (VAR5+9<VAR6 && FUN5(FUN6(VAR5+4))==0x72697468
&& FUN9(*(VAR5+8))=='' )
{
VAR5+=9;
VAR8 = VAR24;
} else {
VAR5+=4;
}
break;
default:
if ((VAR7|0xff)==0x716f70ff) 
{
VAR8 = VAR25;
VAR5+=3;
}
}
} else if (VAR5+3<VAR6) {
VAR7 = FUN5( FUN10(VAR5) );
if (VAR7==0x716f70ff) 
{
VAR5+=3;
VAR8 = VAR25;
}
}


for( VAR7=0 ; VAR5<VAR6&&!FUN3((int)*VAR5)&&*VAR5!='' ; VAR7++,VAR5++  );
if (VAR5==VAR6)
goto VAR16;
if (VAR7!=0)
VAR8 = VAR18;
VAR9.VAR14 = VAR5-VAR9.VAR12;

while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
if (VAR5==VAR6 || *VAR5!='')
goto VAR16;
VAR5++;

while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
if (VAR5+1>=VAR6 || (VAR11 && *VAR5!=''))
goto VAR16;
if (!VAR11 && *VAR5=='')
VAR11 = 1;
if (VAR11)
{
VAR10.VAR12 = ++VAR5;
while (VAR5<VAR6 && *VAR5!='')
VAR5++;
if (VAR5==VAR6)
goto VAR13;
} else {
VAR10.VAR12 = VAR5;
while (VAR5<VAR6 && !FUN3((int)*VAR5) && *VAR5!='')
VAR5++;
}
VAR10.VAR14 = VAR5 - VAR10.VAR12;
if (VAR10.VAR14==0)
VAR10.VAR12 = 0;

VAR5 += VAR11;
while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
if (VAR5<VAR6 && *VAR5=='')
{
VAR5++;
while (VAR5<VAR6 && FUN3((int)*VAR5)) VAR5++;
}

FUN11(""%.*VAR12\"",
VAR9.VAR14,VAR9.VAR12,VAR10.VAR14,VAR10.VAR12,VAR8);


switch (VAR8)
{
case VAR25:
VAR4->VAR26 = VAR10;
if(VAR10.VAR14>=4 && !FUN12(VAR10.VAR12, "", 4))
VAR4->VAR27 |= VAR28;
break;
case VAR19:
VAR4->VAR29 = VAR10;
break;
case VAR20:
VAR4->VAR30 = VAR10;
break;
case VAR22:
VAR4->VAR31 = VAR10;
break;
case VAR23:
VAR4->VAR32 = VAR10;
break;
case VAR24:
if (VAR10.VAR14==3)
{
if ( FUN5(FUN10(VAR10.VAR12))==0x6d6435ff) 
VAR4->VAR27 |= VAR33;
} else {
FUN2(""%.*VAR12\"",VAR10.VAR14,VAR10.VAR12);
goto VAR13;
}
break;
case VAR21:
if (VAR10.VAR14==4 && FUN5(FUN6(VAR10.VAR12))==0x74727565) 
{
VAR4->VAR27 |= VAR34;
} else if ( !(VAR10.VAR14==5 && FUN9(VAR10.VAR12[4])=='' && 
FUN5(FUN6(VAR10.VAR12))==0x66616c73) )
{
FUN2(""%.*VAR12\"",VAR10.VAR14,VAR10.VAR12);
goto VAR13;
}
break;
default:
break;
}
}


if (VAR4->VAR30.VAR12==0 || VAR4->VAR29.VAR12==0)
{
FUN2("");
goto VAR13;
}

return 0;
VAR16:
FUN2("", VAR2->VAR14, VAR2->VAR12, (long)(VAR5-VAR2->VAR12));
VAR13:
return -1;
}