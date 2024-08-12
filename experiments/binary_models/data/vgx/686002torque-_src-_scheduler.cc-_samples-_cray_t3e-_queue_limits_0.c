int
FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5)
{

int     VAR6;


VAR6 = VAR2->VAR7 & VAR8;



if (!VAR6 && (VAR4->VAR9 != VAR10) &&
(VAR2->VAR11 < VAR4->VAR9))
{
if (VAR5)
(void)sprintf(VAR5,
"",
VAR4->VAR12, FUN2(VAR4->VAR9));

return (0);
}

if (!VAR6 && (VAR4->VAR13 != VAR10) &&
(VAR2->VAR11 > VAR4->VAR13))
{
if (VAR5)
(void)sprintf(VAR5,
"", VAR4->VAR12,
FUN2(VAR4->VAR13));

return (0);
}

if (!VAR6 && (VAR4->VAR14 != VAR10) &&
(VAR2->VAR15 < VAR4->VAR14))
{
if (VAR5)
(void)sprintf(VAR5,
"", VAR4->VAR12,
VAR4->VAR14);

return (0);
}

if (!VAR6 && (VAR4->VAR16 != VAR10) &&
(VAR2->VAR15 > VAR4->VAR16))
{
if (VAR5)
(void)sprintf(VAR5, "",
VAR4->VAR12, VAR4->VAR16);

return (0);
}


return (1);
}

int
FUN3(VAR1 *VAR2)
{
VAR17 *VAR18;



if (VAR19)
{
for (VAR18 = VAR19; VAR18 != NULL; VAR18 = VAR18->VAR20)
{
if (FUN1(VAR2, VAR18->VAR4, NULL))
return (1);
}
}



return (0);
}


int
FUN4(VAR3 *VAR4, char *VAR5)
{



if (VAR4->VAR7 & VAR21)
{
if (VAR5)
sprintf(VAR5, "", VAR4->VAR12);

return (-1);
}


if (VAR4->VAR7 & VAR22)
{