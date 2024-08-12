static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
VAR5 *VAR6 = VAR2;
VAR7 *VAR8 = VAR6->VAR9;
uint64_t VAR10 = 0;
int VAR11;

switch (FUN2(VAR6)) {
case VAR12:
for (VAR11 = 0; VAR11 < VAR4; VAR11++) {
VAR10 |= FUN3(VAR8->VAR13, 0x0) << (8 * VAR11);
}
break;
case VAR14:
case VAR15:
FUN4(VAR6);
FUN5(VAR6, VAR3);

for (VAR11 = 0; VAR11 < VAR4; VAR11++) {
VAR10 |= FUN3(VAR8->VAR13, 0x0) << (8 * VAR11);
}

FUN6(VAR6);
break;
default:
FUN7("", FUN2(VAR6));
}

FUN8(VAR6->VAR16, VAR3, VAR4, VAR10,
FUN2(VAR6));
return VAR10;
}