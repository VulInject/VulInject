FUN1 (
char                    *VAR1,
VAR2                  *VAR3)
{
UINT64                  VAR4 = 0;
ACPI_STATUS             VAR5 = VAR6;




while (*VAR1)
{

if (!FUN2 ((int) *VAR1))
{
VAR5 = VAR7;
break;
}



VAR5 = FUN3 (&VAR4, 16, *VAR1);
if (FUN4 (VAR5))
{
VAR5 = VAR8;
break;
}

VAR1++;
}



*VAR3 = VAR4;
return (VAR5);
}