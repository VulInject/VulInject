int
FUN1(VAR1 *VAR2, VAR3 * VAR4)
{
VAR5 *VAR6;
int VAR7;


if(!FUN2(VAR2))
{
VAR8 *VAR9;
int VAR10 = 0, VAR11;
int VAR12;
static struct rb_iovec VAR13[VAR14];

memset(VAR13, 0, sizeof(VAR13));

if(VAR4->VAR15.VAR16 == NULL)
{

VAR17 = VAR18;
return -1;
}

VAR9 = VAR4->VAR15.VAR16;

VAR6 = VAR9->VAR19;
if(!VAR6->VAR20)
{
VAR17 = VAR18;
return -1;

}

VAR13[VAR10].VAR21 = VAR6->VAR22 + VAR4->VAR23;
VAR13[VAR10++].VAR24 = VAR6->VAR25 - VAR4->VAR23;
VAR9 = VAR9->VAR26;

do
{
if(VAR9 == NULL)
break;

VAR6 = VAR9->VAR19;
if(!VAR6->VAR20)
break;

VAR13[VAR10].VAR21 = VAR6->VAR22;
VAR13[VAR10].VAR24 = VAR6->VAR25;
VAR9 = VAR9->VAR26;

}
while(++VAR10 < VAR14);

if(VAR10 == 0)
{
VAR17 = VAR18;
return -1;
}

VAR12 = VAR7 = FUN3(VAR2, VAR13, VAR10);
if(VAR7 <= 0)
return VAR7;

VAR9 = VAR4->VAR15.VAR16;

for(VAR11 = 0; VAR11 < VAR10; VAR11++)
{
VAR6 = VAR9->VAR19;

if(VAR12 >= VAR6->VAR25 - VAR4->VAR23)
{
VAR12 -= VAR6->VAR25 - VAR4->VAR23;
VAR9 = VAR9->VAR26;
FUN4(VAR4, VAR6, VAR4->VAR15.VAR16);
VAR4->VAR23 = 0;
}
else
{
VAR4->VAR23 += VAR12;
break;
}
}

return VAR7;
}




if(VAR4->VAR15.VAR16 == NULL)
{

VAR17 = VAR18;
return -1;
}

VAR6 = VAR4->VAR15.VAR16->VAR19;


if(!VAR6->VAR20)
{
VAR17 = VAR18;
return -1;
}


VAR7 = FUN5(VAR2, VAR6->VAR22 + VAR4->VAR23, VAR6->VAR25 - VAR4->VAR23);

if(VAR7 <= 0)
return VAR7;


VAR4->VAR23 += VAR7;


if(VAR4->VAR23 == VAR6->VAR25)
{
VAR4->VAR23 = 0;
FUN6(VAR4->VAR25 >= 0);
FUN4(VAR4, VAR6, VAR4->VAR15.VAR16);
}


return VAR7;
}