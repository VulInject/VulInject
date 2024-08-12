FUN1 (
void)
{
VAR1       *VAR2;
UINT32                  VAR3 = 0;
ACPI_PHYSICAL_ADDRESS   VAR4;
ACPI_STATUS             VAR5;
int                     VAR6;
UINT32                  VAR7;




for (VAR7 = 0; VAR7 < VAR8; VAR7++)
{
VAR5 = FUN2 (VAR7, &VAR2, &VAR3, &VAR4);
if (FUN3 (VAR5))
{


if (VAR5 == VAR9)
{
return (0);
}
else if (VAR7 == 0)
{
fprintf (VAR10, "",
FUN4 (VAR5));
return (-1);
}
else
{
fprintf (VAR10, "",
VAR7, FUN4 (VAR5));
continue;
}
}

VAR6 = FUN5 (VAR2, VAR3, VAR4);
FUN6 (VAR2);

if (VAR6)
{
break;
}
}



return (-1);
}