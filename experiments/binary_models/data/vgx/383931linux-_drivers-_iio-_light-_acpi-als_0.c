static int FUN1(struct VAR1 *VAR2, char *VAR3, VAR4 *VAR5)
{
unsigned long long VAR6;
acpi_status VAR7;

VAR7 = FUN2(VAR2->VAR8->VAR9, VAR3, NULL,
&VAR6);

if (FUN3(VAR7)) {
FUN4(VAR2->VAR8->VAR9, VAR3, VAR7);
return -VAR10;
}

*VAR5 = VAR6;

return 0;
}