void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u8 VAR7;

FUN3(VAR6, VAR8, VAR9,
"", VAR10, VAR4->VAR11);

VAR7 = FUN4(VAR6, VAR10);

switch (VAR4->VAR11) {
case VAR12:
break;
case VAR13:
VAR7 &= 0xf0;
if (VAR6->VAR14.VAR15) {
VAR7 &= 0x90; 
FUN5(VAR6, VAR10, (VAR7|FUN6(3)));
VAR7 = FUN4(VAR6, VAR16);
VAR7 &= 0xFE;
FUN5(VAR6, VAR16, VAR7);
} else {
VAR7 &= ~FUN6(6);
FUN5(VAR6, VAR10,
(VAR7 | FUN6(3) | FUN6(5)));
}
break;
case VAR17:
VAR7 = FUN4(VAR6, VAR18);
VAR7 &= 0x10; 
FUN5(VAR6, VAR18, VAR7|FUN6(3));

break;
default:
FUN7("",
VAR4->VAR11);
break;
}
VAR4->VAR19 = false;
}