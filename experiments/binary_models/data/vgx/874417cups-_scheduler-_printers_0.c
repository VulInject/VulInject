int					
FUN1(
VAR1 *VAR2,			
const char      *VAR3,		
VAR4 *VAR5)		
{
int	VAR6;				


VAR2->VAR7 = 0;



if (VAR3)
{


const char	*VAR8;			


while (*VAR3 && VAR2->VAR7 < 4)
{
if ((VAR8 = strchr(VAR3, '')) == NULL)
VAR8 = VAR3 + strlen(VAR3);

if ((VAR8 - VAR3) == 4 && !FUN2(VAR3, "", 4))
{
if (VAR2->VAR7 != 0 || *VAR8)
return (0);

VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;

return (1);
}
else if ((VAR8 - VAR3) == 9 && !FUN2(VAR3, "", 9))
{
if (VAR2->VAR7 != 0 || *VAR8)
return (0);

VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;



if (VAR2->VAR10)
{
FUN3(VAR2, 1);
VAR2->VAR10 = 0;
}
}
else if ((VAR8 - VAR3) == 6 && !FUN2(VAR3, "", 6))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else if ((VAR8 - VAR3) == 8 && !FUN2(VAR3, "", 8))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else if ((VAR8 - VAR3) == 8 && !FUN2(VAR3, "", 8))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else
return (0);

VAR3 = (*VAR8) ? VAR8 + 1 : VAR8;
}

if (VAR2->VAR7 == 0)
{
VAR2->VAR9[0]  = "";
VAR2->VAR7 = 1;
}



if (VAR2->VAR7 > 1 ||
strcmp(VAR2->VAR9[0], ""))
VAR2->VAR11 |= VAR12;
else
VAR2->VAR11 &= (VAR13)~VAR12;

return (1);
}



if (!VAR5 || VAR5->VAR14 > 4)
return (0);

for (VAR6 = 0; VAR6 < VAR5->VAR14; VAR6 ++)
{
if (!strcmp(VAR5->VAR3[VAR6].VAR15.VAR16, ""))
{
if (VAR2->VAR7 != 0 || VAR5->VAR14 != 1)
return (0);

VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;

return (1);
}
else if (!strcmp(VAR5->VAR3[VAR6].VAR15.VAR16, ""))
{
if (VAR2->VAR7 != 0 || VAR5->VAR14 != 1)
return (0);

VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;



if (VAR2->VAR10)
{
FUN3(VAR2, 1);
VAR2->VAR10 = 0;
}

return (1);
}
else if (!strcmp(VAR5->VAR3[VAR6].VAR15.VAR16, ""))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else if (!strcmp(VAR5->VAR3[VAR6].VAR15.VAR16, ""))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else if (!strcmp(VAR5->VAR3[VAR6].VAR15.VAR16, ""))
{
VAR2->VAR9[VAR2->VAR7] = "";
VAR2->VAR7 ++;
}
else
return (0);
}

return (1);
}