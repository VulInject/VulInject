static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
unsigned long long VAR9;
int VAR10, VAR11, VAR12;
u8 VAR13[6];


memset(&VAR13, 0xFF, 6);
VAR11 = FUN3(VAR2->VAR7.VAR8, &VAR13, 6);
if (VAR11 < 0)
goto VAR14;
FUN4(500, 1000); 


VAR11 = FUN5(&VAR2->VAR7, VAR15, 1, &VAR12);
if (VAR11)
goto VAR14;

VAR12 &= VAR16;

if (VAR12 != VAR2->VAR17)
FUN6(&VAR2->VAR7.VAR8->VAR18, "",
VAR12);

switch (VAR4->VAR19) {
case VAR20:
case VAR21:
VAR2->VAR22 = VAR23;
break;
case VAR24:
case VAR25:
if (VAR4->VAR26)
VAR2->VAR22 = VAR4->VAR26;
else
VAR2->VAR22 = VAR23;
break;
default:
VAR11 = -VAR27;
goto VAR14;
}

VAR2->VAR28 = FUN7(VAR29) |
FUN8(VAR4->VAR19) |
FUN9(480);

VAR2->VAR30 = FUN10(0);

if (VAR4->VAR31)
VAR2->VAR28 |= VAR32;

if (VAR4->VAR33)
VAR2->VAR28 |= VAR34;

if (VAR4->VAR35 && (VAR2->VAR17 != VAR36))
VAR2->VAR30 |= VAR37;

if (VAR4->VAR38) {
VAR2->VAR30 |= VAR39;
if (VAR4->VAR33)
VAR2->VAR40 = 3; 
else
VAR2->VAR40 = 4; 
} else {
VAR2->VAR40 = 1;
}

if (VAR4->VAR41)
VAR2->VAR30 |= VAR42;

if (VAR4->VAR43)
VAR2->VAR30 |= VAR44;

if (VAR4->VAR45)
VAR2->VAR30 |= VAR46;

VAR11 = FUN11(&VAR2->VAR7, VAR47, 3, VAR2->VAR28);
if (VAR11)
goto VAR14;

VAR11 = FUN11(&VAR2->VAR7, VAR48, 3, VAR2->VAR30);
if (VAR11)
goto VAR14;

VAR11 = FUN12(VAR2);
if (VAR11)
goto VAR14;


for (VAR10 = 0; VAR10 < FUN13(VAR2->VAR49); VAR10++) {
VAR9 = ((VAR50)VAR2->VAR51 * 100000000)
>> (VAR6->VAR52[0].VAR53.VAR54 -
((VAR2->VAR30 & VAR44) ? 0 : 1));
VAR9 >>= VAR10;

VAR2->VAR49[VAR10][1] = FUN14(VAR9, 100000000) * 10;
VAR2->VAR49[VAR10][0] = VAR9;
}

return 0;
VAR14:
FUN15(&VAR2->VAR7.VAR8->VAR18, "");
return VAR11;
}