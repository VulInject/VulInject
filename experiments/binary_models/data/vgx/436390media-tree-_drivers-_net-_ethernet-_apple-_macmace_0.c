static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;
unsigned char *VAR6;
struct VAR7 *VAR8;
unsigned char VAR9 = 0;
int VAR10;

VAR8 = FUN2(VAR11);
if (!VAR8)
return -VAR12;

VAR5 = FUN3(VAR8);

VAR5->VAR13 = &VAR2->VAR8;
FUN4(VAR2, VAR8);
FUN5(VAR8, &VAR2->VAR8);

VAR8->VAR14 = (VAR15)VAR16;
VAR5->VAR17 = VAR16;

VAR8->VAR18 = VAR19;
VAR5->VAR20 = VAR21;

VAR5->VAR22 = VAR5->VAR17->VAR23 << 8 | VAR5->VAR17->VAR24;



VAR6 = VAR25;

for (VAR3 = 0; VAR3 < 6; ++VAR3) {
u8 VAR26 = FUN6(VAR6[VAR3<<4]);
VAR9 ^= VAR26;
VAR8->VAR27[VAR3] = VAR26;
}
for (; VAR3 < 8; ++VAR3) {
VAR9 ^= FUN6(VAR6[VAR3<<4]);
}

if (VAR9 != 0xFF) {
FUN7(VAR8);
return -VAR28;
}

VAR8->VAR29		= &VAR30;
VAR8->VAR31	= VAR32;

FUN8(VAR33 "",
VAR8->VAR34, VAR8->VAR27);

VAR10 = FUN9(VAR8);
if (!VAR10)
return 0;

FUN7(VAR8);
return VAR10;
}