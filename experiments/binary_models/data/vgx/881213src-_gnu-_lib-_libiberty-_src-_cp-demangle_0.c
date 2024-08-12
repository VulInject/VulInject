FUN1 (struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5;
struct VAR4 *VAR6;
struct VAR4 **VAR7;
char VAR8;


VAR8 = FUN2 (VAR2);
if (VAR8 == '')
{
FUN3 (VAR2, 1);
VAR3 = 1;
}

VAR5 = NULL;
VAR6 = NULL;
VAR7 = &VAR6;
while (1)
{
struct VAR4 *VAR9;

VAR8 = FUN2 (VAR2);
if (VAR8 == '' || VAR8 == '')
break;
VAR9 = FUN4 (VAR2);
if (VAR9 == NULL)
return NULL;
if (VAR3)
{
VAR5 = VAR9;
VAR3 = 0;
}
else
{
*VAR7 = FUN5 (VAR2, VAR10, VAR9, NULL);
if (*VAR7 == NULL)
return NULL;
VAR7 = &FUN6 (*VAR7);
}
}


if (VAR6 == NULL)
return NULL;


if (FUN6 (VAR6) == NULL
&& FUN7 (VAR6)->VAR9 == VAR11
&& FUN7 (VAR6)->VAR12.VAR13.VAR9->VAR14 == VAR15)
{
VAR2->VAR16 -= FUN7 (VAR6)->VAR12.VAR13.VAR9->VAR17;
VAR6 = NULL;
}

return FUN5 (VAR2, VAR18, VAR5, VAR6);
}