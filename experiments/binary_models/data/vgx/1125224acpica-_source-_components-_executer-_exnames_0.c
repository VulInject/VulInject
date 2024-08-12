FUN1 (
UINT32                  VAR1,
UINT32                  VAR2)
{
char                    *VAR3;
char                    *VAR4;
UINT32                   VAR5;

FUN2 (VAR6);



if (VAR1 == VAR7)
{


VAR5 = 1 + (VAR8 * VAR2) + 2 + 1;
}
else
{
VAR5 = VAR1 + (VAR8 * VAR2) + 2 + 1;
}


VAR4 = FUN3 (VAR5);
if (!VAR4)
{
FUN4 ((VAR9,
"", VAR5));
FUN5 (NULL);
}

VAR3 = VAR4;



if (VAR1 == VAR7)
{
*VAR3++ = VAR10;
}
else
{
while (VAR1--)
{
*VAR3++ = VAR11;
}
}




if (VAR2 > 2)
{


*VAR3++ = VAR12;
*VAR3++ = (char) VAR2;
}
else if (2 == VAR2)
{


*VAR3++ = VAR13;
}


*VAR3 = 0;

FUN5 (VAR4);
}