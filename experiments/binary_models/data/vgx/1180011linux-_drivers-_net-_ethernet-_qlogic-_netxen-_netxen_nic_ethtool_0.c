static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = &VAR6->VAR8;
if (VAR6->VAR9)
VAR4->VAR10 = VAR8->VAR11;
else
VAR4->VAR10 = 0;

if (!VAR8->VAR12)
VAR4->VAR13 = VAR14;
else
VAR4->VAR13 = VAR8->VAR15;

VAR4->VAR16 = VAR6->VAR17;
return 0;
}


static const u32 VAR18[] = { 0x3, 0x7, 0xf, 0x1f, 0x3f, 0x7f, 0xff };

static int
FUN3(struct VAR1 *VAR2, struct VAR3 *VAR19)
{
int VAR20;
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = &VAR6->VAR8;

switch (VAR19->VAR13) {
case VAR21:
if (!VAR8->VAR12) {
FUN4(VAR2, "");
return 0;
}
if (VAR6->VAR9) {
FUN4(VAR2, "");
return 0;
}
FUN4(VAR2, "");
FUN5(VAR6);
break;
case VAR22:
if (VAR8->VAR12) {
FUN4(VAR2, "");
VAR8->VAR12 = 0;
}
break;
case VAR23:
if (!VAR8->VAR12) {
FUN4(VAR2, "");
VAR8->VAR12 = 1;
}
break;
case VAR24:
FUN4(VAR2, "");
FUN5(VAR6);
VAR6->VAR25 &= ~VAR26;
break;
default:
for (VAR20 = 0; VAR20 < FUN6(VAR18); VAR20++) {
if (VAR19->VAR13 == VAR18[VAR20]) {
VAR8->VAR15 = VAR19->VAR13;
FUN4(VAR2,
"",
VAR8->VAR15);
return 0;
}
}
FUN4(VAR2,
"", VAR19->VAR13);
return -VAR27;
}

return 0;
}