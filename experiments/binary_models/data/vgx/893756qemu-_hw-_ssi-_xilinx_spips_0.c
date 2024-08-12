static VAR1 FUN1(void *VAR2,
hwaddr VAR3, unsigned VAR4)
{
VAR5 *VAR6 = FUN2(VAR2);
uint32_t VAR7 = VAR3 / 4;
uint32_t VAR8;
uint8_t VAR9[4];
int VAR10;

if (VAR7 <= VAR11) {
return FUN3(VAR2, VAR3, VAR4);
} else {
switch (VAR7) {
case VAR12:
if (FUN4(&VAR6->VAR13)) {
FUN5(VAR14,
"");
return 0;
}
memset(VAR9, 0, sizeof(VAR9));
VAR10 = FUN6(&VAR6->VAR13, VAR9,
FUN7(VAR6)->VAR15);
VAR8 = FUN8(VAR6->VAR16, VAR17, VAR18) ?
FUN9(*(VAR19 *)VAR9) :
FUN10(*(VAR19 *)VAR9);
if (!FUN8(VAR6->VAR16, VAR17, VAR18)) {
VAR8 <<= 8 * VAR10;
}
FUN11(VAR6);
FUN12(VAR6);
return VAR8;
default:
return VAR6->VAR16[VAR7];
}
}
}