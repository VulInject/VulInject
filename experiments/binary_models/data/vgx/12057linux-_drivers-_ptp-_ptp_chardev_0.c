int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
enum ptp_pin_function VAR4, unsigned int VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9 = NULL, *VAR10 = &VAR7->VAR11[VAR3];
unsigned int VAR12;


for (VAR12 = 0; VAR12 < VAR7->VAR13; VAR12++) {
if (VAR7->VAR11[VAR12].VAR4 == VAR4 &&
VAR7->VAR11[VAR12].VAR5 == VAR5) {
VAR9 = &VAR7->VAR11[VAR12];
break;
}
}
if (VAR9 && VAR12 == VAR3)
return 0;


switch (VAR4) {
case VAR14:
break;
case VAR15:
if (VAR5 >= VAR7->VAR16)
return -VAR17;
break;
case VAR18:
if (VAR5 >= VAR7->VAR19)
return -VAR17;
break;
case VAR20:
if (VAR5 != 0)
return -VAR17;
break;
default:
return -VAR17;
}

if (VAR7->FUN2(VAR7, VAR3, VAR4, VAR5)) {
FUN3("", VAR4, VAR5);
return -VAR21;
}


if (VAR9) {
FUN4(VAR7, VAR4, VAR5);
VAR9->VAR4 = VAR14;
VAR9->VAR5 = 0;
}
FUN4(VAR7, VAR10->VAR4, VAR10->VAR5);
VAR10->VAR4 = VAR4;
VAR10->VAR5 = VAR5;

return 0;
}