VAR1
FUN1(acpi_handle VAR2, u32 VAR3, struct VAR4 *VAR5)
{
acpi_status VAR6;



if (VAR3 > VAR7) {
return (VAR8);
}

VAR6 = FUN2(VAR5);
if (FUN3(VAR6)) {
return (VAR6);
}


VAR6 = FUN4(VAR9);
if (FUN3(VAR6)) {
return (VAR6);
}

if (VAR3 == VAR10 ||
VAR3 == VAR11) {



VAR6 = FUN5(VAR2, VAR5,
VAR3 ==
VAR10 ? VAR12 :
VAR13);
} else {


VAR6 = FUN6(VAR2, VAR5);
}

(void)FUN7(VAR9);
return (VAR6);
}