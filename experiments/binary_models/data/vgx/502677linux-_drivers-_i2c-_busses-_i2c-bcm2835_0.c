static int FUN1(struct VAR1 *VAR2, struct i2c_msg VAR3[],
int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;
int VAR8;

for (VAR8 = 0; VAR8 < (VAR4 - 1); VAR8++)
if (VAR3[VAR8].VAR9 & VAR10) {
FUN3(VAR6->VAR11,
"");
return -VAR12;
}

VAR6->VAR13 = VAR3;
VAR6->VAR14 = VAR4;
FUN4(&VAR6->VAR15);

FUN5(VAR6);

VAR7 = FUN6(&VAR6->VAR15,
VAR2->VAR16);

FUN7(VAR6);

if (!VAR7) {
FUN8(VAR6, VAR17,
VAR18);
FUN9(VAR6->VAR11, "");
return -VAR19;
}

if (!VAR6->VAR20)
return VAR4;

FUN10(VAR6->VAR11, "", VAR6->VAR20);

if (VAR6->VAR20 & VAR21)
return -VAR22;

return -VAR23;
}