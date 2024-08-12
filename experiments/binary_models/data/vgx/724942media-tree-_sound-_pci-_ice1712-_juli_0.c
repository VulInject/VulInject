static void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
unsigned char VAR4, VAR5, VAR6;
unsigned int VAR7, VAR8, VAR9;
struct VAR10 *VAR11 = VAR2->VAR12[0];
struct VAR13 *VAR14 = VAR11->VAR14;

if (VAR3 == 0)  
return;


if (VAR3 > 96000)  {
VAR6 = 2;
VAR7 = VAR15 | VAR16;
} else if (VAR3 > 48000) {
VAR6 = 1;
VAR7 = VAR17;
} else {
VAR6 = 0;
VAR7 = 0;
}

VAR8 = VAR11->VAR18.FUN2(VAR11);
VAR9 =  (VAR8 & ~VAR19) | VAR7;

VAR11->VAR18.FUN3(VAR11, VAR9);


VAR4 = FUN4(FUN5(VAR11, VAR20));
FUN6(VAR4 | VAR21, FUN5(VAR11, VAR20));
FUN7(1);
FUN6(VAR4 & ~VAR21, FUN5(VAR11, VAR20));



VAR5 = FUN8(VAR2, 0, 2);
FUN9(VAR2, 1);
VAR5 = FUN8(VAR2, 0, 2);
VAR5 &= ~(0x03 << 4);
VAR5 |= VAR6 << 4;
FUN10(VAR2, 0, 2, VAR5);
FUN9(VAR2, 0);


FUN11(VAR14->VAR22);
}


static const struct snd_akm4xxx_dac_channel VAR23[] = {
FUN12(VAR24, 2),
FUN12(VAR25, 2),
FUN12(VAR26, 2),
FUN12(VAR27, 2),
};