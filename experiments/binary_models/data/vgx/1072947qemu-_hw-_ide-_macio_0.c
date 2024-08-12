static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3,
unsigned VAR4)
{
VAR5 *VAR6 = VAR1;
int VAR7 = VAR2 >> 4;

switch (VAR7) {
case 0x0:
if (VAR4 == 2) {
FUN2(&VAR6->VAR8, 0, VAR3);
} else if (VAR4 == 4) {
FUN3(&VAR6->VAR8, 0, VAR3);
}
break;
case 0x1 ... 0x7:
if (VAR4 == 1) {
FUN4(&VAR6->VAR8, VAR7, VAR3);
}
break;
case 0x8:
case 0x16:
if (VAR4 == 1) {
FUN5(&VAR6->VAR8, 0, VAR3);
}
break;
case 0x20:
if (VAR4 == 4) {
VAR6->VAR9 = VAR3;
}
break;
case 0x30:
if (VAR4 == 4) {
if (VAR3 & 0x80000000u) {
VAR6->VAR10 &= 0x7fffffff;
}
}
break;
}
}