static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->private;
struct VAR7 *VAR8 = &VAR4->VAR9->VAR8;
int VAR10;
int VAR11;
int VAR12;
int VAR13;

if (VAR6->VAR14)
return -VAR15;

FUN2(0, VAR2->VAR16 + VAR17);


FUN2(VAR18, VAR2->VAR16 + VAR19);


FUN3(VAR2, VAR6->VAR20);

if (VAR8->VAR21 == VAR22)
VAR10 = 1;
else
VAR10 = 0;


for (VAR13 = 0; VAR13 < VAR8->VAR23; VAR13++) {
int VAR24 = (VAR13 == 0 || VAR10);

FUN4(VAR2, VAR8->VAR25[VAR13], VAR24);
}





if (VAR8->VAR26 == VAR27) {
unsigned long long VAR28;
unsigned long long VAR29;

VAR28 = (unsigned long long)VAR8->VAR30 *
VAR8->VAR31;
VAR29 = VAR28 * FUN5(VAR4);
while (VAR29 > VAR32 * 3 / 4)
VAR29 /= 2;
VAR11 = VAR29;
} else {
VAR11 = VAR32 / 2;
}



FUN2(VAR33, VAR2->VAR16 + VAR19);



FUN2(0x00, VAR2->VAR16 + VAR34);
FUN2(0x00, VAR2->VAR16 + VAR34);

FUN2((VAR32 - VAR11) & 0xff,
VAR2->VAR16 + VAR34);
FUN2((VAR32 - VAR11) >> 8, VAR2->VAR16 + VAR34);


FUN2(VAR35 | VAR36 |
VAR37, VAR2->VAR16 + VAR38);

VAR12 = FUN6(VAR2, 100);
if (VAR12)
return VAR12;


FUN2(VAR39 | VAR40, VAR2->VAR16 + VAR19);

return 0;
}