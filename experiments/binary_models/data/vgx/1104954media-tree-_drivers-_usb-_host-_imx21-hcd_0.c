static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
unsigned long VAR4;
int VAR5, VAR6;
u32 VAR7 = VAR8;
u32 VAR9 = 0;

VAR7 |= ((VAR3->VAR10->VAR11 << VAR12) &
VAR13);
VAR7 |= ((VAR3->VAR10->VAR14 << VAR15) &
VAR16);

if (VAR3->VAR10->VAR17)
VAR9 |= VAR18;

if (!VAR3->VAR10->VAR19)
VAR9 |= VAR20;

if (VAR3->VAR10->VAR21)
VAR9 |= VAR22;


FUN3(&VAR3->VAR23, VAR4);

FUN4((VAR24 | VAR25),
VAR3->VAR26 + VAR27);
FUN4(VAR7, VAR3->VAR26 + VAR28);
FUN4(VAR9, VAR3->VAR26 + VAR29);
FUN4(VAR30  | VAR31,
VAR3->VAR26 + VAR32);


for (VAR5 = 0; VAR5 < VAR33; VAR5++)
for (VAR6 = 0; VAR6 < 4; VAR6++)
FUN5(VAR3, VAR5, VAR6, 0);


FUN4(VAR34 | VAR35,
VAR3->VAR26 + VAR36);


if (VAR3->VAR10->VAR37)
FUN4(VAR38 | VAR39,
VAR3->VAR26 + FUN6(0));

if (VAR3->VAR10->VAR40)
FUN4(VAR38 | VAR39,
VAR3->VAR26 + FUN6(1));

if (VAR3->VAR10->VAR41)
FUN4(VAR38 | VAR39,
VAR3->VAR26 + FUN6(2));


VAR2->VAR42 = VAR43;


FUN7(VAR3, VAR44,
VAR45 |
VAR46 | VAR47);
FUN7(VAR3, VAR48, VAR49);

FUN8(&VAR3->VAR23, VAR4);

return 0;
}