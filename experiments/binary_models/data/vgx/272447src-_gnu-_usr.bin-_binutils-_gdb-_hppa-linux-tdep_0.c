FUN1 (CORE_ADDR VAR1)
{
unsigned int VAR2[VAR3];
int VAR4 = 0;
int try;

static int VAR5[] = { 0, 4*4, 5*4 };

static int VAR6[] = { 4*4, 10*4, 10*4 };
CORE_ADDR VAR7;


VAR7 = FUN2 (VAR1, 64);



for (try = 0; try < FUN3 (VAR5); try++)
{
if (FUN4 (VAR7 + VAR5[try], VAR8, VAR2))
{
VAR4 = VAR6[try];
break;
}
}

if (VAR4 == 0)
{
if (FUN4 (VAR1, VAR8, VAR2))
{

try = 2;
VAR7 = VAR1 - VAR5[try];
}
else
{
return 0;
}
}


return VAR7 + VAR6[try] + 128 + 24;
}