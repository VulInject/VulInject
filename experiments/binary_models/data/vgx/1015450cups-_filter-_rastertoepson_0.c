void
FUN1(
const VAR1 *VAR2,	
int                      VAR3)	
{
unsigned	VAR4, VAR5,			
VAR6,		
VAR7;		
unsigned char *VAR8,		
*VAR9;			


VAR7 = VAR10 * VAR11;

if (VAR12[VAR3][0] != 0 ||
memcmp(VAR12[VAR3], VAR12[VAR3] + 1, VAR2->VAR13 * VAR10 - 1))
{


VAR4         = 0;
VAR6 = VAR2->VAR13 * VAR10;
VAR8   = VAR12[VAR3];

while (VAR6 >= VAR7 && VAR8[0] == 0 &&
memcmp(VAR8, VAR8 + 1, VAR7 - 1) == 0)
{
VAR4         ++;
VAR8   += VAR7;
VAR6 -= VAR7;
}



while (VAR6 >= VAR7 && VAR8[VAR6 - VAR7] == 0 &&
memcmp(VAR8 + VAR6 - VAR7,
VAR8 + VAR6 - VAR7 + 1, VAR7 - 1) == 0)
VAR6 -= VAR7;



if (VAR4 == 0)
FUN2('');
else
{
FUN2(0x1b);
FUN2('');
FUN2((int)(VAR4 & 255));
FUN2((int)(VAR4 >> 8));
}



FUN3("");			
switch (VAR2->VAR14[0])
{
case 60 : 
FUN2(0);
break;
case 120 : 
FUN2(1);
break;
case 180 : 
FUN2(39);
break;
case 240 : 
FUN2(3);
break;
case 360 : 
if (VAR2->VAR14[1] == 180)
{
if (VAR15 && VAR16 != 0)
FUN2(40);		
else
FUN2(41);		
}
else
{
if (VAR15 && VAR16 != 0)
FUN2(72);		
else
FUN2(73);		
}
break;
}

VAR5 = VAR6 / VAR10;
FUN2((int)(VAR5 & 255));
FUN2((int)(VAR5 / 256));



if (VAR2->VAR14[0] == 120 ||
VAR2->VAR14[0] == 240)
{


for (VAR5 = VAR6 / 2, VAR9 = VAR8; VAR5 > 0; VAR5 --, VAR9 += 2)
{
FUN2(*VAR9);
FUN2(0);
}

if (VAR6 & 1)
FUN2(*VAR9);



if (VAR4 == 0)
FUN2('');
else
{
FUN2(0x1b);
FUN2('');
FUN2((int)(VAR4 & 255));
FUN2((int)(VAR4 >> 8));
}

if (VAR2->VAR14[0] == 120)
FUN3("");		
else
FUN3("");		

VAR5 = (unsigned)VAR6 / VAR10;
FUN2((int)(VAR5 & 255));
FUN2((int)(VAR5 / 256));

for (VAR5 = VAR6 / 2, VAR9 = VAR8 + 1; VAR5 > 0; VAR5 --, VAR9 += 2)
{
FUN2(0);
FUN2(*VAR9);
}

if (VAR6 & 1)
FUN2(0);
}
else
FUN4(VAR8, VAR6);
}



FUN2('');

if (VAR15 && VAR3 == 1)
{
if (VAR2->VAR14[1] == 360)
FUN3("");
else
FUN3("");
}

FUN5(VAR17);



memset(VAR12[VAR3], 0, VAR2->VAR13 * VAR10);
}