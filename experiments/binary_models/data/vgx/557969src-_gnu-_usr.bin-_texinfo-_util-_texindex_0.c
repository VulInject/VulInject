FUN1 (struct VAR1 *VAR1, char *VAR2, long int VAR3,
long int VAR4, char *VAR5, long int VAR6, long int VAR7)
{
if (VAR8->VAR9)
{
if (VAR4 > VAR7)
return 1;
else
return -1;
}
if (VAR1->VAR10)
{
long VAR11 = FUN2 (VAR2, VAR3) - FUN2 (VAR5, VAR6);
if (VAR11 > 0)
return 1;
if (VAR11 < 0)
return -1;
return 0;
}
else
{
char *VAR12 = VAR2;
char *VAR13 = VAR5;
char *VAR14 = VAR2 + VAR3;
char *VAR15 = VAR5 + VAR6;

while (1)
{
int VAR16, VAR17;

if (VAR12 == VAR14)
VAR16 = 0;
else
VAR16 = *VAR12++;
if (VAR13 == VAR15)
VAR17 = 0;
else
VAR17 = *VAR13++;

if (VAR18[VAR16] != VAR18[VAR17])
return VAR18[VAR16] - VAR18[VAR17];
if (!VAR16)
break;
}


VAR12 = VAR2;
VAR13 = VAR5;
while (1)
{
int VAR16, VAR17;

if (VAR12 == VAR14)
VAR16 = 0;
else
VAR16 = *VAR12++;
if (VAR13 == VAR15)
VAR17 = 0;
else
VAR17 = *VAR13++;

if (VAR16 != VAR17)

return VAR17 - VAR16;
if (!VAR16)
break;
}

return 0;
}
}