int FUN1(struct VAR1 *VAR2, bool VAR3)
{
acpi_handle VAR4 = FUN2(&VAR2->VAR2);

if (!VAR4 || !FUN3(VAR4, ""))
return -VAR5;

if (VAR3)
return 0;

if (FUN4(FUN5(VAR4, "", NULL, NULL))) {
FUN6(VAR2, "");
return -VAR5;
}

return 0;
}