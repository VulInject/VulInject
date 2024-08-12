FUN1 (struct VAR1 *VAR1, VAR2 *VAR3, VAR2 *VAR4)
{
FUN2 (VAR1);
switch (FUN3 (VAR1))
{
case VAR5:
*VAR3 = FUN4 (VAR1);
*VAR4 = FUN5 (VAR1);
return 1;
case VAR6:
if (FUN6 (VAR1) > 0)
{

int VAR7;

*VAR3 = *VAR4 = FUN7 (VAR1, 0);
for (VAR7 = 0; VAR7 < FUN6 (VAR1); VAR7++)
{
if (FUN7 (VAR1, VAR7) < *VAR3)
*VAR3 = FUN7 (VAR1, VAR7);
if (FUN7 (VAR1, VAR7) > *VAR4)
*VAR4 = FUN7 (VAR1, VAR7);
}


if (*VAR3 >= 0)
{
FUN8 (VAR1) |= VAR8;
}
}
else
{
*VAR3 = 0;
*VAR4 = -1;
}
return 0;
case VAR9:
*VAR3 = 0;
*VAR4 = 1;
return 0;
case VAR10:
if (FUN9 (VAR1) > sizeof (VAR2))	
return -1;
if (!FUN10 (VAR1))
{
*VAR3 = -(1 << (FUN9 (VAR1) * VAR11 - 1));
*VAR4 = -*VAR3 - 1;
return 0;
}

case VAR12:
*VAR3 = 0;

*VAR4 = 1 << (FUN9 (VAR1) * VAR11 - 1);
*VAR4 = (*VAR4 - 1) | *VAR4;
return 0;
default:
return -1;
}
}