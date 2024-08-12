VAR1
FUN1(struct VAR2 *VAR3, u32 VAR4)
{
struct VAR5 *VAR6;
acpi_status VAR7 = VAR8;
u32 VAR9;
u32 VAR10;

FUN2();



VAR6 = VAR3->VAR11;
if (!VAR6) {
return (VAR12);
}



VAR7 = FUN3(&VAR9, &VAR6->VAR13);
if (FUN4(VAR7)) {
return (VAR7);
}



VAR10 = FUN5(VAR3);
switch (VAR4) {
case VAR14:



if (!(VAR10 & VAR6->VAR9)) {
return (VAR15);
}



case VAR16:

FUN6(VAR9, VAR10);
break;

case VAR17:

FUN7(VAR9, VAR10);
break;

default:

FUN8((VAR18, "", VAR4));
return (VAR15);
}

if (!(VAR10 & VAR6->VAR19)) {



VAR7 =
FUN9(VAR9,
&VAR6->VAR13);
}
return (VAR7);
}