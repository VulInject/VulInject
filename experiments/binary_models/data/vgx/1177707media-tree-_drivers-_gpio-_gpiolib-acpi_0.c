static struct VAR1 *FUN1(struct VAR2 *VAR3,
const char *VAR4, int VAR5,
struct VAR6 *VAR7)
{
struct acpi_gpio_lookup VAR8;
int VAR9;

if (!VAR3)
return FUN2(-VAR10);

memset(&VAR8, 0, sizeof(VAR8));
VAR8.VAR5 = VAR5;

if (VAR4) {
FUN3(&VAR3->VAR11, "", VAR4);

VAR9 = FUN4(FUN5(VAR3),
VAR4, VAR5, &VAR8);
if (VAR9)
return FUN2(VAR9);

FUN3(&VAR3->VAR11, "",
FUN6(&VAR8.VAR3->VAR11), VAR8.VAR5,
VAR8.VAR12, VAR8.VAR13);
} else {
FUN3(&VAR3->VAR11, "", VAR5);
VAR8.VAR3 = VAR3;
}

VAR9 = FUN7(&VAR8, VAR7);
return VAR9 ? FUN2(VAR9) : VAR8.VAR14;
}