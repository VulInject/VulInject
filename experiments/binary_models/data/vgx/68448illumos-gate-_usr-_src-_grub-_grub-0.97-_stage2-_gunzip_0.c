FUN1 (unsigned *VAR1,	
unsigned VAR2,		
unsigned VAR3,		
VAR4 * VAR5,		
VAR4 * VAR6,		
struct VAR7 **VAR8,	
int *VAR9)		
{
unsigned VAR10;			
unsigned VAR11[VAR12 + 1];		
unsigned VAR13;			
int VAR14;			
int VAR15;			
register unsigned VAR16;		
register unsigned VAR17;		
register int VAR18;		
int VAR19;			
register unsigned *VAR20;		
register struct VAR7 *VAR21;	
struct huft VAR22;		
struct VAR7 *VAR23[VAR12];		
unsigned VAR24[VAR25];		
register int VAR26;		
unsigned VAR27[VAR12 + 1];		
unsigned *VAR28;			
int VAR29;			
unsigned VAR30;			


memset ((char *) VAR11, 0, sizeof (VAR11));
VAR20 = VAR1;
VAR16 = VAR2;
do
{
VAR11[*VAR20]++;			
VAR20++;			
}
while (--VAR16);
if (VAR11[0] == VAR2)		
{
*VAR8 = (struct VAR7 *) NULL;
*VAR9 = 0;
return 0;
}


VAR19 = *VAR9;
for (VAR17 = 1; VAR17 <= VAR12; VAR17++)
if (VAR11[VAR17])
break;
VAR18 = VAR17;			
if ((unsigned) VAR19 < VAR17)
VAR19 = VAR17;
for (VAR16 = VAR12; VAR16; VAR16--)
if (VAR11[VAR16])
break;
VAR14 = VAR16;			
if ((unsigned) VAR19 > VAR16)
VAR19 = VAR16;
*VAR9 = VAR19;


for (VAR29 = 1 << VAR17; VAR17 < VAR16; VAR17++, VAR29 <<= 1)
if ((VAR29 -= VAR11[VAR17]) < 0)
return 2;			
if ((VAR29 -= VAR11[VAR16]) < 0)
return 2;
VAR11[VAR16] += VAR29;


VAR27[1] = VAR17 = 0;
VAR20 = VAR11 + 1;
VAR28 = VAR27 + 2;
while (--VAR16)
{				
*VAR28++ = (VAR17 += *VAR20++);
}


VAR20 = VAR1;
VAR16 = 0;
do
{
if ((VAR17 = *VAR20++) != 0)
VAR24[VAR27[VAR17]++] = VAR16;
}
while (++VAR16 < VAR2);


VAR27[0] = VAR16 = 0;			
VAR20 = VAR24;			
VAR15 = -1;			
VAR26 = -VAR19;			
VAR23[0] = (struct VAR7 *) NULL;	
VAR21 = (struct VAR7 *) NULL;	
VAR30 = 0;			


for (; VAR18 <= VAR14; VAR18++)
{
VAR10 = VAR11[VAR18];
while (VAR10--)
{


while (VAR18 > VAR26 + VAR19)
{
VAR15++;
VAR26 += VAR19;		


VAR30 = (VAR30 = VAR14 - VAR26) > (unsigned) VAR19 ? VAR19 : VAR30;	
if ((VAR13 = 1 << (VAR17 = VAR18 - VAR26)) > VAR10 + 1)	
{		
VAR13 -= VAR10 + 1;	
VAR28 = VAR11 + VAR18;
while (++VAR17 < VAR30)	
{
if ((VAR13 <<= 1) <= *++VAR28)
break;	
VAR13 -= *VAR28;	
}
}
VAR30 = 1 << VAR17;	


VAR21 = (struct VAR7 *) FUN2 ((VAR30 + 1) * sizeof (struct VAR7));

VAR31 += VAR30 + 1;	
*VAR8 = VAR21 + 1;	
*(VAR8 = &(VAR21->VAR24.VAR8)) = (struct VAR7 *) NULL;
VAR23[VAR15] = ++VAR21;	


if (VAR15)
{
VAR27[VAR15] = VAR16;	
VAR22.VAR1 = (VAR32) VAR19;	
VAR22.VAR6 = (VAR32) (16 + VAR17);		
VAR22.VAR24.VAR8 = VAR21;	
VAR17 = VAR16 >> (VAR26 - VAR19);	
VAR23[VAR15 - 1][VAR17] = VAR22;	
}
}


VAR22.VAR1 = (VAR32) (VAR18 - VAR26);
if (VAR20 >= VAR24 + VAR2)
VAR22.VAR6 = 99;		
else if (*VAR20 < VAR3)
{
VAR22.VAR6 = (VAR32) (*VAR20 < 256 ? 16 : 15);		
VAR22.VAR24.VAR2 = (VAR4) (*VAR20);	
VAR20++;		
}
else
{
VAR22.VAR6 = (VAR32) VAR6[*VAR20 - VAR3];	
VAR22.VAR24.VAR2 = VAR5[*VAR20++ - VAR3];
}


VAR13 = 1 << (VAR18 - VAR26);
for (VAR17 = VAR16 >> VAR26; VAR17 < VAR30; VAR17 += VAR13)
VAR21[VAR17] = VAR22;


for (VAR17 = 1 << (VAR18 - 1); VAR16 & VAR17; VAR17 >>= 1)
VAR16 ^= VAR17;
VAR16 ^= VAR17;


while ((VAR16 & ((1 << VAR26) - 1)) != VAR27[VAR15])
{
VAR15--;		
VAR26 -= VAR19;
}
}
}


return VAR29 != 0 && VAR14 != 1;
}




static unsigned VAR33, VAR34;

static int
FUN3 (void)
{
register unsigned VAR6;		
unsigned VAR2, VAR5;		
unsigned VAR26;			
struct VAR7 *VAR8;		
unsigned VAR35, VAR36;		
register ulg VAR1;		
register unsigned VAR18;		


VAR5 = VAR34;
VAR2 = VAR33;
VAR1 = VAR37;			
VAR18 = VAR38;
VAR26 = VAR39;			


VAR35 = VAR40[VAR41];		
VAR36 = VAR40[VAR42];
for (;;)			
{
if (!VAR43)
{
FUN4 ((unsigned) VAR41);
if ((VAR6 = (VAR8 = VAR44 + ((unsigned) VAR1 & VAR35))->VAR6) > 16)
do
{
if (VAR6 == 99)
{
VAR45 = VAR46;
return 0;
}
FUN5 (VAR8->VAR1);
VAR6 -= 16;
FUN4 (VAR6);
}
while ((VAR6 = (VAR8 = VAR8->VAR24.VAR8 + ((unsigned) VAR1 & VAR40[VAR6]))->VAR6) > 16);
FUN5 (VAR8->VAR1);

if (VAR6 == 16)		
{
VAR47[VAR26++] = (VAR32) VAR8->VAR24.VAR2;
if (VAR26 == VAR48)
break;
}
else

{

if (VAR6 == 15)
{
VAR49 = 0;
break;
}


FUN4 (VAR6);
VAR2 = VAR8->VAR24.VAR2 + ((unsigned) VAR1 & VAR40[VAR6]);
FUN5 (VAR6);


FUN4 ((unsigned) VAR42);
if ((VAR6 = (VAR8 = VAR50 + ((unsigned) VAR1 & VAR36))->VAR6) > 16)
do
{
if (VAR6 == 99)
{
VAR45 = VAR46;
return 0;
}
FUN5 (VAR8->VAR1);
VAR6 -= 16;
FUN4 (VAR6);
}
while ((VAR6 = (VAR8 = VAR8->VAR24.VAR8 + ((unsigned) VAR1 & VAR40[VAR6]))->VAR6)
> 16);
FUN5 (VAR8->VAR1);
FUN4 (VAR6);
VAR5 = VAR26 - VAR8->VAR24.VAR2 - ((unsigned) VAR1 & VAR40[VAR6]);
FUN5 (VAR6);
VAR43++;
}
}

if (VAR43)
{

do
{
VAR2 -= (VAR6 = (VAR6 = VAR48 - ((VAR5 &= VAR48 - 1) > VAR26 ? VAR5 : VAR26)) > VAR2 ? VAR2
: VAR6);
if (VAR26 - VAR5 >= VAR6)
{
memmove (VAR47 + VAR26, VAR47 + VAR5, VAR6);
VAR26 += VAR6;
VAR5 += VAR6;
}
else

{
while (VAR6--)
VAR47[VAR26++] = VAR47[VAR5++];
}
if (VAR26 == VAR48)
break;
}
while (VAR2);

if (!VAR2)
VAR43--;


if (VAR26 == VAR48)
break;
}
}


VAR34 = VAR5;
VAR33 = VAR2;
VAR39 = VAR26;			
VAR37 = VAR1;			
VAR38 = VAR18;

return !VAR49;
}