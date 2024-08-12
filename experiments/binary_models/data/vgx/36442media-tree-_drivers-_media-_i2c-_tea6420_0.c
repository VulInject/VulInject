FUN1("");
FUN2("");
FUN3("");

static int VAR1;
FUN4(VAR1, int, 0644);

FUN5(VAR1, "");



static int FUN6(struct VAR2 *VAR3,
u32 VAR4, u32 VAR5, u32 VAR6)
{
struct VAR7 *VAR8 = FUN7(VAR3);
int VAR9 = (VAR5 >> 4) & 0xf;
u8 VAR10;
int VAR11;

VAR5 &= 0xf;
FUN8(1, VAR1, VAR3, "", VAR4, VAR5, VAR9);


if (VAR4 < 1 || VAR4 > 6 || VAR5 < 1 || VAR5 > 4 || VAR9 < 0 || VAR9 > 6 || VAR9 % 2 != 0)
return -VAR12;

VAR10 = ((VAR5 - 1) << 5);
VAR10 |= (VAR4 - 1);


switch (VAR9) {
case 0:
VAR10 |= (3 << 3);
break;
case 2:
VAR10 |= (2 << 3);
break;
case 4:
VAR10 |= (1 << 3);
break;
case 6:
break;
}

VAR11 = FUN9(VAR8, VAR10);
if (VAR11) {
FUN8(1, VAR1, VAR3,
"", VAR11);
return -VAR13;
}
return 0;
}