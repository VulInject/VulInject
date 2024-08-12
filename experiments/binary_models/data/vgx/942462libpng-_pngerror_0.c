VAR1
FUN1(png_const_charp VAR2, png_charp VAR3, int VAR4,
png_alloc_size_t VAR5)
{
int VAR6 = 0;    
int VAR7 = 1; 
int VAR8 = 0;   

*--VAR3 = '';


while (VAR3 > VAR2 && (VAR5 != 0 || VAR6 < VAR7))
{

static const char VAR9[] = "";

switch (VAR4)
{
case VAR10:

VAR7 = 5;
if (VAR8 != 0 || VAR5 % 10 != 0)
{
*--VAR3 = VAR9[VAR5 % 10];
VAR8 = 1;
}
VAR5 /= 10;
break;

case VAR11:

VAR7 = 2;


case VAR12:
*--VAR3 = VAR9[VAR5 % 10];
VAR5 /= 10;
break;

case VAR13:

VAR7 = 2;


case VAR14:
*--VAR3 = VAR9[VAR5 & 0xf];
VAR5 >>= 4;
break;

default: 
VAR5 = 0;
break;
}


++VAR6;


if ((VAR4 == VAR10) && (VAR6 == 5) && (VAR3 > VAR2))
{

if (VAR8 != 0)
*--VAR3 = '';
else if (VAR5 == 0) 
*--VAR3 = '';
}
}

return VAR3;
}