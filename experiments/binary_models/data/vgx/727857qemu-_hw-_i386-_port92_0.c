static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3,
unsigned VAR4)
{
VAR5 *VAR6 = VAR1;
int VAR7 = VAR6->VAR8;

FUN2(VAR3);
VAR6->VAR8 = VAR3;
FUN3(VAR6->VAR9, (VAR3 >> 1) & 1);
if ((VAR3 & 1) && !(VAR7 & 1)) {
FUN4(VAR10);
}
}