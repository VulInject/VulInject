static int FUN1(struct VAR1 *VAR2)
{
acpi_status VAR3;
int VAR4 = 0;
struct VAR5 *VAR6;

VAR7 = VAR2;
strcpy(FUN2(VAR2), "");

VAR8 = VAR2->VAR9;


VAR4 = FUN3(VAR2);

if (!VAR4 && !VAR2->VAR3.VAR10) {
FUN4("");
VAR4 = -VAR11;
goto VAR12;
}

VAR4 = FUN5();
if (VAR4)
goto VAR13;

if (VAR14) {
VAR3 = FUN6(VAR15,
VAR8, 1, VAR16,
NULL, NULL, NULL);
if (FUN7(VAR3)) {
FUN8("");
VAR4 = -VAR11;
goto VAR13;
}
}

VAR4 = FUN9(VAR2);
if (VAR4) {
FUN10("");
goto VAR17;
}

if (FUN11(VAR8, "")) {
int VAR18 = 1;
if (FUN12(VAR8, "", &VAR18, NULL))
FUN4("");
}

if (FUN11(VAR8, "")) {
FUN4("");

VAR4 = FUN13(VAR19);
if (!VAR4)
FUN14(VAR2, VAR19);
}

if (FUN15() == VAR20)
FUN16();


for (VAR6 = VAR21; VAR6->VAR22; ++VAR6) {

if (!VAR14 && VAR6->VAR14)
continue;


for (; VAR6->VAR23 && *VAR6->VAR23; ++VAR6->VAR23) {
if (FUN11(VAR8,
*VAR6->VAR23)) {
FUN4("",
VAR6->VAR22, *VAR6->VAR23);
VAR6->VAR24.VAR25.VAR26 |= VAR27;
break;
}
}


for (; VAR6->VAR28 && *VAR6->VAR28; ++VAR6->VAR28) {
if (FUN11(VAR8,
*VAR6->VAR28)) {
FUN4("",
VAR6->VAR22, *VAR6->VAR28);
VAR6->VAR24.VAR25.VAR26 |= VAR29;
break;
}
}

if (VAR6->VAR24.VAR25.VAR26 != 0) {
VAR4 =
FUN17(&VAR19->VAR30,
&VAR6->VAR24);
if (VAR4)
goto VAR31;
}
}

FUN18("");
return 0;

VAR31:
for (VAR6 = VAR21; VAR6->VAR22; ++VAR6) {
FUN19(&VAR19->VAR30, &VAR6->VAR24);
}
FUN20();
FUN21(VAR19);
FUN22(VAR19);

VAR17:
FUN23();

VAR13:
FUN24();

VAR12:
FUN25();
return VAR4;
}