VAR1
FUN1(acpi_object_type VAR2,
acpi_handle VAR3,
u32 VAR4,
u32 VAR5,
acpi_walk_callback VAR6,
acpi_walk_callback VAR7,
void *VAR8, void **VAR9)
{
acpi_status VAR10;
acpi_status VAR11;
struct VAR12 *VAR13;
struct VAR12 *VAR14;
acpi_object_type VAR15;
u32 VAR16;
u8 VAR17 = VAR18;

FUN2(VAR19);



if (VAR3 == VAR20) {
VAR3 = VAR21;
if (!VAR3) {
FUN3(VAR22);
}
}



VAR14 = VAR3;
VAR13 = FUN4(VAR14, NULL);
VAR15 = VAR23;
VAR16 = 1;


while (VAR16 > 0 && VAR13) {
VAR10 = VAR24;



if (VAR2 != VAR23) {
VAR15 = VAR13->VAR2;
}


if ((VAR13->VAR5 & VAR25) &&
!(VAR5 & VAR26)) {
VAR10 = VAR27;
}



else if (VAR15 == VAR2) {

if (VAR5 & VAR28) {
VAR11 =
FUN5(VAR29);
if (FUN6(VAR11)) {
FUN3(VAR11);
}
}


if (!VAR17) {
if (VAR6) {
VAR10 =
FUN7(VAR13,
VAR16, VAR8,
VAR9);
}
} else {
if (VAR7) {
VAR10 =
FUN8(VAR13,
VAR16, VAR8,
VAR9);
}
}

if (VAR5 & VAR28) {
VAR11 =
FUN9(VAR29);
if (FUN6(VAR11)) {
FUN3(VAR11);
}
}

switch (VAR10) {
case VAR24:
case VAR27:


break;

case VAR30:



FUN3(VAR24);

default:



FUN3(VAR10);
}
}


if (!VAR17 &&
(VAR16 < VAR4) && (VAR10 != VAR27)) {
if (VAR13->VAR31) {



VAR16++;
VAR14 = VAR13;
VAR13 =
FUN4(VAR14, NULL);
continue;
}
}



if (!VAR17) {
VAR17 = VAR32;
continue;
}



VAR13 = FUN4(VAR14, VAR13);
if (VAR13) {
VAR17 = VAR18;
}



else {

VAR16--;
VAR13 = VAR14;
VAR14 = VAR14->VAR33;

VAR17 = VAR32;
}
}



FUN3(VAR24);
}