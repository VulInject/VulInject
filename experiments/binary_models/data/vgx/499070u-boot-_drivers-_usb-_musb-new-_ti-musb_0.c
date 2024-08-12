static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
const void *VAR5 = VAR6->VAR7;
int VAR8 = FUN3(VAR2);
int VAR9;
int VAR10;
int VAR11;
struct VAR12 *VAR13;

VAR4->VAR14 = (void *)FUN4(VAR2, 1);

VAR9 = FUN5(VAR5, VAR8, "");
VAR10 = FUN5(VAR5, VAR9, "");
VAR4->VAR15 = (void *)FUN6(VAR5, VAR10, "");
VAR11 = FUN7(VAR8);
switch (VAR11) {
case 1:
VAR4->VAR15 += VAR16;
break;
case 0:
VAR4->VAR15 += VAR17;
break;
default:
break;
}

VAR13 = malloc(sizeof(struct VAR12));
memset(VAR13, 0, sizeof(struct VAR12));

VAR13->VAR18 = FUN8(VAR5, VAR8,
"", -1);
if (VAR13->VAR18 < 0) {
FUN9("");
return -VAR19;
}

VAR13->VAR20 = 1;

VAR13->VAR21 = FUN8(VAR5, VAR8, "",
-1);
if (VAR13->VAR21 < 0) {
FUN9("");
return -VAR19;
}

VAR13->VAR22 = FUN8(VAR5, VAR8, "",
-1);
if (VAR13->VAR22 < 0) {
FUN9("");
return -VAR19;
}

VAR4->VAR4.VAR23 = VAR13;

VAR4->VAR4.VAR24 = FUN8(VAR5, VAR8, "", -1);
if (VAR4->VAR4.VAR24 < 0) {
FUN9("");
return -VAR19;
}

VAR4->VAR4.VAR25 = &VAR26;

return 0;
}