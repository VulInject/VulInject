int
FUN1(int VAR1, union VAR2 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR4;
int VAR7 = FUN2(VAR3);
bus_size_t VAR8;
char VAR9;

switch (VAR7) {
case VAR10:
VAR8 = VAR3->VAR11.VAR12;
VAR9 = '';
break;
case VAR13:
VAR8 = VAR3->VAR14.VAR15;
VAR9 = '';
break;
case VAR16:

return 0;
default:
FUN3("",
FUN4(VAR6), VAR1, VAR7);
VAR6->VAR17 = 0;
return -1;
}

switch (VAR1) {
case 0:
VAR6->VAR18 = VAR8;
VAR6->VAR19 = 1;
VAR6->VAR17 = VAR9;
break;
case 1:
if (VAR6->VAR17 != VAR9) {
FUN3("",
FUN4(VAR6), VAR1, VAR7);
VAR6->VAR17 = 0;
return -1;
}
if (VAR8 <= VAR6->VAR18) {
VAR6->VAR17 = 0;
return -1;
}
VAR6->VAR19 = VAR8 - VAR6->VAR18;
break;
default:
FUN3("",
FUN4(VAR6), VAR1, VAR7, VAR6->VAR20);
VAR6->VAR17 = 0;
return -1;
}

return 0;
}