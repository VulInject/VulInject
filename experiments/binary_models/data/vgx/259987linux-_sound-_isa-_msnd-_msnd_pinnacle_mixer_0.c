static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7 = VAR2->VAR8;
unsigned long VAR9;

FUN3(&VAR6->VAR10, VAR9);
VAR4->VAR11.VAR12.VAR11[0] = VAR6->VAR13[VAR7] * 100;
VAR4->VAR11.VAR12.VAR11[0] /= 0xFFFF;
VAR4->VAR11.VAR12.VAR11[1] = VAR6->VAR14[VAR7] * 100;
VAR4->VAR11.VAR12.VAR11[1] /= 0xFFFF;
FUN4(&VAR6->VAR10, VAR9);
return 0;
}

do {								\
FUN5((VAR15->VAR13[VAR16] >> 1) *			\
FUN6(VAR15->VAR17 + VAR18) / 0xffff,	\
VAR15->VAR17 + VAR19##VAR20##VAR21);			\
FUN5((VAR15->VAR14[VAR16] >> 1)  *			\
FUN6(VAR15->VAR17 + VAR22) / 0xffff, \
VAR15->VAR17 + VAR19##VAR20##VAR23);			\
} while (0);

do {								\
FUN7((VAR15->VAR13[VAR24] >> 8) *			\
FUN6(VAR15->VAR17 + VAR18) / 0xffff, \
VAR15->VAR17 + VAR19##VAR25##VAR21);			\
FUN7((VAR15->VAR14[VAR24] >> 8) *			\
FUN6(VAR15->VAR17 + VAR22) / 0xffff, \
VAR15->VAR17 + VAR19##VAR25##VAR23);			\
if (FUN8(VAR15, 0, 0, VAR26) == 0)		\
FUN9(VAR15, VAR27);	\
} while (0);

do {								\
FUN7(VAR15->VAR13[VAR24] >> 8,			\
VAR15->VAR17 + VAR19##VAR25##VAR21);			\
FUN7(VAR15->VAR14[VAR24] >> 8,			\
VAR15->VAR17 + VAR19##VAR25##VAR23);			\
if (FUN8(VAR15, 0, 0, VAR26) == 0)		\
FUN9(VAR15, VAR27);	\
} while (0);


static int FUN10(struct VAR5 *VAR15, int VAR24, int VAR28, int VAR29)
{
int VAR30, VAR31;
int VAR32, VAR33;
int VAR34 = 0;

if (VAR24 >= VAR35)
return -VAR36;

VAR30 = VAR28 * 0xff / 100;
VAR32 = VAR28 * 0xffff / 100;

VAR31 = VAR29 * 0xff / 100;
VAR33 = VAR29 * 0xffff / 100;

VAR15->VAR13[VAR24] = VAR32;
VAR15->VAR14[VAR24] = VAR33;

switch (VAR24) {

case VAR37:			

FUN7(VAR30, VAR15->VAR17 + VAR38);
FUN7(VAR31, VAR15->VAR17 + VAR39);
if (FUN8(VAR15, 0, 0, VAR40) == 0)
FUN9(VAR15, VAR27);
break;
case VAR41:			
if (VAR15->VAR42 == VAR43)
return -VAR36;

FUN7(VAR30, VAR15->VAR17 + VAR44);
FUN7(VAR31, VAR15->VAR17 + VAR45);
if (FUN8(VAR15, 0, 0, VAR46) == 0)
FUN9(VAR15, VAR27);
break;
case VAR47:		
FUN5(VAR32, VAR15->VAR17 + VAR18);
FUN5(VAR33, VAR15->VAR17 + VAR22);
VAR48;
case VAR49:			



case VAR50:			
case VAR51:			
case VAR52:			

VAR34 = 1;
break;

default:
return -VAR36;
}

if (VAR34) {

FUN11(VAR51, VAR53);
FUN11(VAR52, VAR54);
if (VAR15->VAR42 == VAR55)
FUN11(VAR50, VAR56);
FUN12(VAR49, VAR57, VAR58);
}

return 0;
}