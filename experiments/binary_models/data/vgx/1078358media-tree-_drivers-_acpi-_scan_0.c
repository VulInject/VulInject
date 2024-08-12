static void FUN1(struct VAR1 *VAR2)
{
unsigned long long VAR3 = 0;
acpi_status VAR4;
struct VAR1 *VAR5 = VAR2->VAR5;

if (VAR5 && VAR5->VAR6.VAR7) {

VAR2->VAR6.VAR7 = 1;
VAR3 = VAR5->VAR6.VAR8;
} else {
VAR4 = FUN2(VAR2->VAR9, "",
NULL, &VAR3);
if (FUN3(VAR4))
VAR2->VAR6.VAR7 = 1;
else if (!FUN4(VAR10))

VAR3 = 1;
else
FUN5(VAR2->VAR9,
"");
}

VAR2->VAR6.VAR8 = VAR3;
}