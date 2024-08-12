static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR3 *VAR5, unsigned int VAR6)
{
bool VAR7 = false;
struct blkcipher_walk VAR8;
int VAR9;

FUN2(&VAR8, VAR4, VAR5, VAR6);
VAR9 = FUN3(VAR2, &VAR8, VAR10);
VAR2->VAR11 &= ~VAR12;

while ((VAR6 = VAR8.VAR6) >= VAR10) {
VAR7 = FUN4(VAR7, VAR6);
VAR6 = FUN5(VAR2, &VAR8);
VAR9 = FUN6(VAR2, &VAR8, VAR6);
}

FUN7(VAR7);

if (VAR8.VAR6) {
FUN8(VAR2, &VAR8);
VAR9 = FUN6(VAR2, &VAR8, 0);
}

return VAR9;
}


static struct crypto_alg VAR13[6] = { {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 0,
.VAR17		= VAR18 |
VAR19,
.VAR20		= VAR10,
.VAR21		= sizeof(struct VAR22),
.VAR23		= 0,
.VAR24		= &VAR25,
.VAR26		= VAR27,
.VAR28 = {
.VAR29 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR34		= VAR35,
.VAR36	= VAR37,
.VAR38	= VAR39,
},
},
}, {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 0,
.VAR17		= VAR18 |
VAR19,
.VAR20		= VAR10,
.VAR21		= sizeof(struct VAR22),
.VAR23		= 0,
.VAR24		= &VAR25,
.VAR26		= VAR27,
.VAR28 = {
.VAR29 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR34		= VAR35,
.VAR36	= VAR40,
.VAR38	= VAR41,
},
},
}, {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 0,
.VAR17		= VAR18 |
VAR19,
.VAR20		= 1,
.VAR21		= sizeof(struct VAR22),
.VAR23		= 0,
.VAR24		= &VAR25,
.VAR26		= VAR27,
.VAR28 = {
.VAR29 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR42		= VAR10,
.VAR34		= VAR35,
.VAR36	= VAR43,
.VAR38	= VAR43,
},
},
}, {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 200,
.VAR17		= VAR44 | VAR45,
.VAR20		= VAR10,
.VAR21		= sizeof(struct VAR46),
.VAR23		= 0,
.VAR24		= &VAR47,
.VAR26		= VAR27,
.VAR48		= VAR49,
.VAR50		= VAR51,
.VAR28 = {
.VAR52 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR34		= VAR53,
.VAR36	= VAR54,
.VAR38	= VAR55,
},
},
}, {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 200,
.VAR17		= VAR44 | VAR45,
.VAR20		= VAR10,
.VAR21		= sizeof(struct VAR46),
.VAR23		= 0,
.VAR24		= &VAR47,
.VAR26		= VAR27,
.VAR48		= VAR49,
.VAR50		= VAR51,
.VAR28 = {
.VAR52 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR42		= VAR10,
.VAR34		= VAR53,
.VAR36	= VAR56,
.VAR38	= VAR55,
},
},
}, {
.VAR14		= "",
.VAR15	= "",
.VAR16		= 200,
.VAR17		= VAR44 | VAR45,
.VAR20		= 1,
.VAR21		= sizeof(struct VAR46),
.VAR23		= 0,
.VAR24		= &VAR47,
.VAR26		= VAR27,
.VAR48		= VAR49,
.VAR50		= VAR51,
.VAR28 = {
.VAR52 = {
.VAR30	= VAR31,
.VAR32	= VAR33,
.VAR42		= VAR10,
.VAR34		= VAR53,
.VAR36	= VAR54,
.VAR38	= VAR54,
.VAR57		= "",
},
},
} };