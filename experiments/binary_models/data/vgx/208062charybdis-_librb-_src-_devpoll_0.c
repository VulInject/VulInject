static void
FUN1(VAR1 *VAR2, short VAR3, VAR4 * VAR5)
{
int VAR6 = 0;
int VAR7 = FUN2(VAR2);
int VAR8 = VAR9[VAR7];
VAR4 *VAR10;
VAR9[VAR7] = 0;
switch (VAR3)
{
case VAR11:
VAR10 = VAR2->VAR12;
if(VAR5)
VAR9[VAR7] |= VAR13;
else
VAR9[VAR7] &= ~VAR13;
if(VAR2->VAR14)
VAR9[VAR7] |= VAR15;
break;
case VAR16:
VAR10 = VAR2->VAR14;
if(VAR5)
VAR9[VAR7] |= VAR15;
else
VAR9[VAR7] &= ~VAR15;
if(VAR2->VAR12)
VAR9[VAR7] |= VAR13;
break;
default:
return;
break;
}

if(VAR10 == NULL && VAR5 != NULL)
VAR6++;
else if(VAR10 != NULL && VAR5 == NULL)
VAR6++;
if(VAR8 != VAR9[VAR7])
VAR6++;
if(VAR6)
{

if(VAR9[VAR7])
{
FUN3(VAR7, VAR17);
FUN3(VAR7, VAR9[VAR7]);
}
else
FUN3(VAR7, VAR17);
}
}