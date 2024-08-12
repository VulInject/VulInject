static int FUN1(struct VAR1 *VAR2)
{
union acpi_object VAR3[] = {
{VAR4},
{VAR4}
};
struct acpi_object_list VAR5 = { 2, VAR3 };
unsigned long long VAR6;
acpi_status VAR7;


if (VAR2->VAR8[0] < 0 || VAR2->VAR8[1] < 0)
return 0;


VAR3[0].VAR9.VAR10 = VAR2->VAR8[1];
VAR3[1].VAR9.VAR10 = VAR2->VAR8[0];

VAR7 = FUN2(VAR2->VAR11->VAR12, "",
&VAR5, &VAR6);
if (FUN3(VAR7)) {
FUN4((VAR13, VAR7, ""));
return -VAR14;
}


if (VAR6)
return -VAR14;

return 0;
}