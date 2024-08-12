FUN1 (const char *VAR1, const char *VAR2)
{
char VAR3[32];
char VAR4[32];
char *VAR5;
char *VAR6;


if (FUN2 (VAR2[0]) == ''
&& FUN2 (VAR2[1]) == ''
&& FUN2 (VAR2[2]) == ''
&& VAR2[3] == '')
{
if (FUN2 (VAR1[0]) == ''
&& FUN2 (VAR1[1]) == ''
&& FUN2 (VAR1[2]) == ''
&& VAR1[3] == '')
{
if (strcmp (VAR2 + 4, "") == 0)
{
if (FUN3 (VAR1 + 4, "") == 0)
return VAR7;
if (FUN3 (VAR1 + 4, "") == 0)
return VAR8;
if (FUN3 (VAR1 + 4, "") == 0)
return VAR9;
if (FUN3 (VAR1 + 4, "") == 0)
return VAR10;
}
else if (strcmp (VAR1 + 4, "") == 0)
{
if (FUN3 (VAR2 + 4, "") == 0)
return VAR11;
if (FUN3 (VAR2 + 4, "") == 0)
return VAR12;
if (FUN3 (VAR2 + 4, "") == 0)
return VAR13;
if (FUN3 (VAR2 + 4, "") == 0)
return VAR14;
}
}
}




{
iconv_t VAR15 = FUN4 (VAR1, VAR2);
if (VAR15 != (VAR16)(-1))
return VAR15;
}


{
const char *VAR17 = VAR2;
char *VAR18 = VAR3;
while ((*VAR18 = FUN2 (*VAR17)) != '')
{
VAR17++;
VAR18++;
if (VAR18 == &VAR3[FUN5 (VAR3)])
{
VAR19 = VAR20;
return (VAR16)(-1);
}
}
VAR5 = VAR18;
}

{
const char *VAR17 = VAR1;
char *VAR18 = VAR4;
while ((*VAR18 = FUN2 (*VAR17)) != '')
{
VAR17++;
VAR18++;
if (VAR18 == &VAR4[FUN5 (VAR4)])
{
VAR19 = VAR20;
return (VAR16)(-1);
}
}
VAR6 = VAR18;
}


{
const struct VAR21 *VAR22 =
FUN6 (VAR3, VAR5 - VAR3);

VAR2 = (VAR22 != NULL ? VAR22->VAR23 : VAR3);
}
{
const struct VAR21 *VAR22 =
FUN6 (VAR4, VAR6 - VAR4);

VAR1 = (VAR22 != NULL ? VAR22->VAR23 : VAR4);
}
VAR2 = VAR3;
VAR1 = VAR4;

return FUN4 (VAR1, VAR2);
}