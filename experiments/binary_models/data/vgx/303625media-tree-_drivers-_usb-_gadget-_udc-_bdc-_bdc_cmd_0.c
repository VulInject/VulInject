static int FUN1(struct VAR1 *VAR1, u32 VAR2,
u32 VAR3, u32 VAR4,	u32 VAR5)
{
u32 VAR6, VAR7;
int VAR8;

VAR6 = FUN2(VAR1->VAR9, VAR10);
FUN3(VAR1->VAR11,
"",
VAR12, VAR6, VAR2, VAR3, VAR4, VAR5);

VAR7 = FUN4(VAR6);
if (VAR7  ==  VAR13) {
FUN5(VAR1->VAR11, "", VAR7);
return -VAR14;
}
VAR8 = FUN6(VAR1, VAR2, VAR3, VAR4, VAR5);
switch (VAR8) {
case VAR15:
FUN3(VAR1->VAR11, "");
VAR8 = 0;
break;

case VAR16:
FUN5(VAR1->VAR11, "");
VAR8 = -VAR17;
break;

case VAR18:
FUN5(VAR1->VAR11, "");
VAR8 = -VAR17;
break;

case VAR19:
FUN5(VAR1->VAR11, "");
VAR8 = -VAR20;
break;

case VAR21:
FUN5(VAR1->VAR11, "");
VAR8 = -VAR22;
break;

case VAR13:
FUN5(VAR1->VAR11,
"",
VAR23);
VAR8 = -VAR22;
break;
default:
FUN3(VAR1->VAR11, "", VAR8);
}

return VAR8;
}