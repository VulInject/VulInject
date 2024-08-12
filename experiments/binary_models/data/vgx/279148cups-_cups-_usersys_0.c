const char *				
FUN1(const char *VAR1)	
{
HANDLE		VAR2;		
DWORD			VAR3;		
char			VAR4,		
*VAR5,	
*VAR6;	
DWORD			VAR7;	
VAR8	*VAR9 = FUN2();





if ((VAR2 = FUN3(VAR10)) == VAR11)
return (NULL);

if (!FUN4(VAR2, &VAR3))
return (NULL);

if (!FUN5(VAR2, 0))
return (NULL);



FUN6("", VAR1);
FUN7(VAR12);



VAR5 = VAR9->VAR13;
VAR6 = VAR9->VAR13 + sizeof(VAR9->VAR13) - 1;

while (FUN8(VAR2, &VAR4, 1, &VAR7, NULL))
{
if (VAR4 == 0x0A || VAR4 == 0x0D)
{


break;
}
else if (VAR4 == 0x08 || VAR4 == 0x7F)
{


if (VAR5 > VAR9->VAR13)
{
VAR5 --;
fputs("", VAR12);
}
else
FUN9(0x07);
}
else if (VAR4 == 0x15)
{


if (VAR5 > VAR9->VAR13)
{
while (VAR5 > VAR9->VAR13)
{
VAR5 --;
fputs("", VAR12);
}
}
else
FUN9(0x07);
}
else if (VAR4 == 0x03)
{


VAR5 = VAR9->VAR13;
break;
}
else if ((VAR4 & 255) < 0x20 || VAR5 >= VAR6)
FUN9(0x07);
else
{
*VAR5++ = VAR4;
FUN9(VAR14);
}

FUN7(VAR12);
}

FUN9('');
FUN7(VAR12);



FUN5(VAR2, VAR3);



if (VAR7 == 1 && VAR5 > VAR9->VAR13)
{
*VAR5 = '';
return (VAR9->VAR13);
}
else
{
memset(VAR9->VAR13, 0, sizeof(VAR9->VAR13));
return (NULL);
}

int			VAR2;		
struct termios	VAR15,	
VAR16;		
char			VAR4,		
*VAR5,	
*VAR6;	
ssize_t		VAR7;	
VAR8	*VAR9 = FUN2();





if ((VAR2 = open("", VAR17)) < 0)
return (NULL);

if (FUN10(VAR2, &VAR15))
{
close(VAR2);
return (NULL);
}

VAR16 = VAR15;
VAR16.VAR18 &= (VAR19)~(VAR20 | VAR21 | VAR22 | VAR23);
VAR16.VAR24[VAR25]  = 1;
VAR16.VAR24[VAR26] = 0;

if (FUN11(VAR2, VAR27, &VAR16))
{
close(VAR2);
return (NULL);
}



FUN6("", VAR1);
FUN7(VAR12);



VAR5 = VAR9->VAR13;
VAR6 = VAR9->VAR13 + sizeof(VAR9->VAR13) - 1;

while ((VAR7 = read(VAR2, &VAR4, 1)) == 1)
{
if (VAR4 == VAR16.VAR24[VAR28] ||
VAR4 == VAR16.VAR24[VAR29] ||
VAR4 == 0x0A || VAR4 == 0x0D)
{


break;
}
else if (VAR4 == VAR16.VAR24[VAR30] ||
VAR4 == 0x08 || VAR4 == 0x7F)
{


if (VAR5 > VAR9->VAR13)
{
VAR5 --;
fputs("", VAR12);
}
else
FUN9(0x07);
}
else if (VAR4 == VAR16.VAR24[VAR31])
{


if (VAR5 > VAR9->VAR13)
{
while (VAR5 > VAR9->VAR13)
{
VAR5 --;
fputs("", VAR12);
}
}
else
FUN9(0x07);
}
else if (VAR4 == VAR16.VAR24[VAR32] || VAR4 == VAR16.VAR24[VAR33] ||
VAR4 == VAR16.VAR24[VAR34])
{


VAR5 = VAR9->VAR13;
break;
}
else if ((VAR4 & 255) < 0x20 || VAR5 >= VAR6)
FUN9(0x07);
else
{
*VAR5++ = VAR4;
FUN9(VAR14);
}

FUN7(VAR12);
}

FUN9('');
FUN7(VAR12);



FUN11(VAR2, VAR27, &VAR15);
close(VAR2);



if (VAR7 == 1 && VAR5 > VAR9->VAR13)
{
*VAR5 = '';
return (VAR9->VAR13);
}
else
{
memset(VAR9->VAR13, 0, sizeof(VAR9->VAR13));
return (NULL);
}
}