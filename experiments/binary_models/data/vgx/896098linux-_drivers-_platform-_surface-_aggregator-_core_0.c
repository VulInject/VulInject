static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;



FUN3(FUN4(VAR4));

VAR5 = FUN5(VAR4);
if (VAR5)
FUN6(VAR4, "", VAR5);

FUN7(VAR4);
return 0;
}

static const struct dev_pm_ops VAR6 = {
.VAR7  = VAR8,
.VAR9 = VAR10,
.VAR11  = VAR12,
.VAR13   = VAR14,
.VAR15   = VAR16,
.VAR17     = VAR18,
.VAR19 = VAR20,
.VAR21  = VAR22,
};


static const struct dev_pm_ops VAR6 = { };





static const struct acpi_gpio_params VAR23 = { 0, 0, false };
static const struct acpi_gpio_params VAR24     = { 1, 0, false };

static const struct acpi_gpio_mapping VAR25[] = {
{ "", &VAR23, 1 },
{ "",     &VAR24,     1 },
{ },
};