void                    *VAR1);

static VAR2
FUN1 (
ACPI_HANDLE             VAR3,
VAR4             *VAR5,
VAR6     **VAR7);




static VAR2
FUN1 (
ACPI_HANDLE             VAR3,
VAR4             *VAR5,
VAR6     **VAR7)
{
ACPI_STATUS             VAR8;
VAR6     *VAR9;


FUN2 (VAR10);



if (!VAR3)
{
FUN3 (VAR11);
}

VAR9 = FUN4 (VAR3);
if (!VAR9)
{
FUN3 (VAR11);
}

if (VAR9->VAR12 != VAR13)
{
FUN3 (VAR14);
}


VAR8 = FUN5 (VAR5);
if (FUN6 (VAR8))
{
FUN3 (VAR8);
}

*VAR7 = VAR9;
FUN3 (VAR15);
}