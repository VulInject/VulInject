static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = VAR1->VAR3;
struct VAR4 *VAR5 = FUN2(VAR3);
unsigned long VAR6;
int VAR7;

VAR7 = FUN3(&VAR5->VAR8);
if (VAR7)
return VAR7;


FUN4(VAR5->VAR9, VAR10,  0x1);
FUN4(VAR5->VAR9, VAR10,
FUN5(0) | 
FUN5(7) | 
FUN5(8)); 


FUN6(VAR5->VAR9, VAR10, FUN5(9), FUN5(9));


FUN6(VAR5->VAR9, VAR10, FUN5(12), FUN5(12));
FUN6(VAR5->VAR9, VAR10, FUN5(31), FUN5(31));
FUN6(VAR5->VAR9, VAR10, FUN5(31), 0);


VAR6 = (1000000 * 100) / (VAR5->VAR11.VAR12 / 1000);
VAR6 = VAR6 * 8 * 10;

FUN4(VAR5->VAR9, VAR13,
FUN7(VAR5->VAR11.VAR14, VAR6) |
(FUN7(VAR5->VAR11.VAR15 +
VAR5->VAR11.VAR16, VAR6) << 8) |
(FUN7(VAR5->VAR11.VAR17, VAR6) << 16) |
(FUN7(VAR5->VAR11.VAR18, VAR6) << 24));
FUN4(VAR5->VAR9, VAR19,
FUN7(VAR5->VAR11.VAR20, VAR6));

FUN4(VAR5->VAR9, VAR21,
FUN7(VAR5->VAR11.VAR22, VAR6) |
(FUN7(VAR5->VAR11.VAR16, VAR6) << 8) |
(FUN7(VAR5->VAR11.VAR23, VAR6) << 16) |
(FUN7(VAR5->VAR11.VAR24, VAR6) << 24));

FUN4(VAR5->VAR9, VAR25,
FUN7(VAR5->VAR11.VAR26, VAR6) |
(FUN7(VAR5->VAR11.VAR27, VAR6) << 8) |
(FUN7(VAR5->VAR11.VAR28, VAR6) << 16) |
(FUN7(VAR5->VAR11.VAR29, VAR6) << 24));

FUN4(VAR5->VAR9, VAR30, 0x0100);
FUN4(VAR5->VAR9, VAR31,
FUN7(VAR5->VAR11.VAR32 * VAR33, VAR6));
FUN4(VAR5->VAR9, VAR34,
FUN7(VAR5->VAR11.VAR35 * VAR33, VAR6));
FUN4(VAR5->VAR9, VAR36, 0x7C);
FUN4(VAR5->VAR9, VAR37, 0x927C);
FUN4(VAR5->VAR9, VAR38, 0x1000);
FUN4(VAR5->VAR9, VAR39, 0x1000);


switch (VAR5->VAR11.VAR40) {
case 1:
FUN4(VAR5->VAR9, VAR41, 0xe);
break;
case 2:
FUN4(VAR5->VAR9, VAR41, 0xc);
break;
case 3:
FUN4(VAR5->VAR9, VAR41, 0x8);
break;
case 4:
default:
FUN4(VAR5->VAR9, VAR41, 0);
break;
}


FUN6(VAR5->VAR9, VAR10, FUN5(1), FUN5(1));

return 0;
}