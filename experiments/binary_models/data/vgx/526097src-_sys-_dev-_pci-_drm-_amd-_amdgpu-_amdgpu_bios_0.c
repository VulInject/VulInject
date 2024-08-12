static bool FUN1(struct VAR1 *VAR2)
{
int VAR3;
int VAR4 = 256 * 1024;
int VAR5;
struct VAR6 *VAR7 = NULL;
acpi_handle VAR8, VAR9;
acpi_status VAR10;
bool VAR11 = false;


if (VAR2->VAR12 & VAR13)
return false;

while ((VAR7 = FUN2(VAR14 << 8, VAR7)) != NULL) {
VAR8 = FUN3(&VAR7->VAR15);
if (!VAR8)
continue;

VAR10 = FUN4(VAR8, "", &VAR9);
if (FUN5(VAR10)) {
VAR11 = true;
break;
}
}

if (!VAR11) {
while ((VAR7 = FUN2(VAR16 << 8, VAR7)) != NULL) {
VAR8 = FUN3(&VAR7->VAR15);
if (!VAR8)
continue;

VAR10 = FUN4(VAR8, "", &VAR9);
if (FUN5(VAR10)) {
VAR11 = true;
break;
}
}
}
{
VAR7 = VAR2->VAR7;
VAR8 = FUN3(&VAR7->VAR15);

if (VAR8) {
VAR10 = FUN4(VAR8, "", &VAR9);
if (FUN5(VAR10)) {
VAR11 = true;
}
}
}

if (!VAR11)
return false;
FUN6(VAR7);

VAR2->VAR17 = FUN7(VAR4, VAR18);
if (!VAR2->VAR17) {
FUN8(VAR2->VAR15, "");
return false;
}

for (VAR5 = 0; VAR5 < VAR4 / VAR19; VAR5++) {
VAR3 = FUN9(VAR9,
VAR2->VAR17,
(VAR5 * VAR19),
VAR19);
if (VAR3 < VAR19)
break;
}

if (!FUN10(VAR2->VAR17, VAR4)) {
FUN11(VAR2->VAR17);
return false;
}
VAR2->VAR20 = VAR4;
return true;
}