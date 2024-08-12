static void
FUN1(VAR1 *VAR2, const char *VAR3)
{
typedef union {
uint64_t VAR4;
uint16_t VAR5[4];
} VAR6;
VAR6 *VAR7 = (VAR6 *)VAR2;
int VAR8;

FUN2(&VAR9);
switch (VAR2->VAR10) {
case VAR11:
FUN3(VAR12, "");
break;
case VAR13:
FUN3(VAR12, "");
break;
case VAR14:
FUN3(VAR12, "");
break;
default:
FUN3(VAR12, "");
break;
}
FUN3(VAR12, "", VAR3);


for (VAR8 = VAR15; VAR8 > 0; VAR8 -= 8, ++VAR7) {
FUN3(VAR12, "", (VAR16)VAR7,
VAR7->VAR5[0], VAR7->VAR5[1], VAR7->VAR5[2], VAR7->VAR5[3]);
}
FUN4(&VAR9);
}