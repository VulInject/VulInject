static int FUN1(struct VAR1 * VAR2,
struct VAR3 * VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = VAR6->VAR8;

int VAR9, VAR10 = VAR2->VAR11;
int VAR12, VAR13;

VAR12 = VAR4->VAR14.VAR15.VAR14[0];
if (VAR12 < 0)
VAR12 = 0;
if (VAR12 > 20)
VAR12 = 20;
VAR13 = VAR4->VAR14.VAR15.VAR14[1];
if (VAR13 < 0)
VAR13 = 0;
if (VAR13 > 20)
VAR13 = 20;
FUN3(&VAR6->VAR16);
VAR9 = 0;
if (VAR6->VAR17[VAR10][0] != VAR12) {
VAR9 = 1;
VAR13 = VAR12;
}
if (VAR6->VAR17[VAR10][1] != VAR13) {
VAR9 = 1;
VAR12 = VAR13;
}
if (VAR9) {
switch (VAR8->VAR18->VAR19) {
case VAR20:
switch (VAR10) {
case VAR21:
VAR12 = 20;
break;
case VAR22:
FUN4(VAR23,  0x10,
(VAR12 > 10) ? 0x00 : 0x10);
break;
case VAR24:
FUN4(VAR23,  0x20,
(VAR12 > 10) ? 0x00 : 0x20);
break;
}
break;
case VAR25:
case VAR26:
switch (VAR10) {
case VAR21:
VAR12 = 20;
break;
case VAR22:
FUN4(0x0594,  0x10,
(VAR12 > 10) ? 0x00 : 0x10);
break;
case VAR24:
FUN4(0x0594,  0x20,
(VAR12 > 10) ? 0x00 : 0x20);
break;
}
break;
}
VAR6->VAR17[VAR10][0] = VAR12;
VAR6->VAR17[VAR10][1] = VAR13;
}
FUN5(&VAR6->VAR16);
return VAR9;
}