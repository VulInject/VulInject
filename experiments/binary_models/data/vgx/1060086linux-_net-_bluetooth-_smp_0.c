int FUN1(struct VAR1 *VAR2, u8 VAR3[16], u8 rand[16])
{
struct VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8;
int VAR9;

if (!VAR5 || !VAR5->VAR10)
return -VAR11;

VAR8 = VAR5->VAR10;

if (FUN2(VAR2, VAR12)) {
FUN3(VAR2, "");
VAR9 = FUN4(VAR8->VAR13, VAR14);
if (VAR9)
return VAR9;
memcpy(VAR8->VAR15, VAR16, 64);
VAR8->VAR17 = true;
} else {
while (true) {

VAR9 = FUN5(VAR8->VAR13, VAR8->VAR15);
if (VAR9)
return VAR9;


if (FUN6(VAR8->VAR15, VAR16, 64))
break;
}
VAR8->VAR17 = false;
}

FUN7("", VAR8->VAR15);
FUN7("", VAR8->VAR15 + 32);

FUN8(VAR8->VAR18, 16);

VAR9 = FUN9(VAR8->VAR19, VAR8->VAR15, VAR8->VAR15,
VAR8->VAR18, 0, VAR3);
if (VAR9 < 0)
return VAR9;

memcpy(rand, VAR8->VAR18, 16);

VAR8->VAR20 = true;

return 0;
}