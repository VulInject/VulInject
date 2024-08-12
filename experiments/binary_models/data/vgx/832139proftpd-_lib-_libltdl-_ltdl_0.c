FUN1 (VAR1 *VAR2, const char *VAR3,
lt_dladvise VAR4, const VAR5 *VAR6)
{
lt_dlhandle	VAR7		= VAR8;
const char *	VAR9	= 0;
int		VAR10		= 0;

fprintf (VAR11, "",
VAR3 ? VAR3 : "",
VAR6 ? VAR6->VAR12 : "");

FUN2 (VAR9);


for (;VAR7; VAR7 = VAR7->VAR13)
{
if ((VAR7->VAR14.VAR3 == VAR3) 
|| (VAR7->VAR14.VAR3 && VAR3
&& FUN3 (VAR7->VAR14.VAR3, VAR3)))
{
break;
}
}

if (VAR7)
{
++VAR7->VAR14.VAR15;
*VAR2 = VAR7;
goto VAR16;
}

VAR7 = *VAR2;
if (VAR3)
{



VAR7->VAR14.VAR3 = FUN4 (VAR3);
if (!VAR7->VAR14.VAR3)
{
++VAR10;
goto VAR16;
}
}
else
{
VAR7->VAR14.VAR3 = 0;
}

{
lt_dlloader VAR17 = FUN5 (0);
const VAR5 *VAR18;

do
{
if (VAR6)
VAR18 = VAR6;
else
VAR18 = FUN6 (VAR17);

fprintf (VAR11, "",
(VAR18 && VAR18->VAR12) ? VAR18->VAR12 : "",
VAR3 ? VAR3 : "");
VAR7->VAR19 = (*VAR18->VAR20) (VAR18->VAR21,
VAR3, VAR4);
fprintf (VAR11, "",
VAR7->VAR19 ? "" : "");

if (VAR7->VAR19 != 0)
{
if (VAR4)
{
VAR7->VAR14.VAR22  = VAR4->VAR22;
VAR7->VAR14.VAR23 = VAR4->VAR23;
VAR7->VAR14.VAR24  = VAR4->VAR24;
}
break;
}
}
while (!VAR6 && (VAR17 = FUN5 (VAR17)));


if ((VAR6 && !VAR7->VAR19)
|| (!VAR6 && !VAR17))
{
FUN7 (VAR7->VAR14.VAR3);
++VAR10;
goto VAR16;
}

VAR7->VAR6 = VAR18;
}

FUN8 (VAR9);

VAR16:
return VAR10;
}