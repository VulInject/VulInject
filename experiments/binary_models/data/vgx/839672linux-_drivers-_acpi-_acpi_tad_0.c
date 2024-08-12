static VAR1 FUN1(struct VAR2 *VAR3, char *VAR4, u32 VAR5)
{
acpi_handle VAR6 = FUN2(VAR3);
union acpi_object VAR7[] = {
{ .VAR8 = VAR9, },
};
struct acpi_object_list VAR10 = {
.VAR11 = VAR7,
.VAR12 = FUN3(VAR7),
};
unsigned long long VAR13;
acpi_status VAR14;

VAR7[0].VAR15.VAR16 = VAR5;

FUN4(VAR3);

VAR14 = FUN5(VAR6, "", &VAR10, &VAR13);

FUN6(VAR3);

if (FUN7(VAR14))
return -VAR17;

return sprintf(VAR4, "", (VAR18)VAR13);
}