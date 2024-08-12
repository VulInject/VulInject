static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10,
const VAR11 * VAR12, int VAR13,
uint16_t VAR14, int VAR15)
{
int VAR16, VAR17, VAR18, VAR19, VAR20;
const VAR11 *VAR21 = VAR12 + 2; 
const VAR11 *VAR22 = VAR12 + 2;
int VAR23 = VAR13 - 2;
int VAR24 = 0;

VAR11 *VAR25;

if (*VAR10 != VAR4->VAR10) {
if (VAR4->VAR26 && (!VAR4->VAR27 || VAR4->VAR20)) {

FUN2(VAR2, VAR28, "");
VAR24 = 1;
FUN3(VAR4, VAR8, VAR6->VAR29);
}

if (!VAR4->VAR26)
VAR4->VAR26 = FUN4(VAR4->VAR30);

VAR4->VAR10 = *VAR10;

if (!VAR4->VAR26) {
FUN2(VAR2, VAR28, "");
return FUN5(VAR31);
}
}


do {
if (VAR23 < 6)
return VAR32;

VAR19 = VAR22[4] & 0x80;
VAR22 += 6;
VAR23 -= 6;
} while (VAR19);


do {
int VAR33;

if (VAR23 < VAR4->VAR34)
return VAR32;

VAR16 = (VAR21[0] << 8) | VAR21[1];
VAR20 = (VAR21[2] & 0x80) >> 7;
VAR17 = ((VAR21[2] & 0x7f) << 8) | VAR21[3];
VAR18 = ((VAR21[4] & 0x7f) << 8) | VAR21[5];
VAR19 = VAR21[4] & 0x80;
VAR21 += 6;
VAR4->VAR20 = VAR20;

if (!VAR4->VAR34 || VAR16 % VAR4->VAR34)
return VAR32;

if (VAR16 > VAR23)
VAR16 = VAR23;

if (VAR4->VAR27)
VAR17 = 2 * VAR17 + VAR20;


VAR33 = (VAR17 * VAR4->VAR35 + VAR18) * VAR4->VAR34 / VAR4->VAR36;
if (VAR33 + VAR16 > VAR4->VAR30 || !VAR4->VAR26)
return VAR32;

VAR25 = VAR4->VAR26 + VAR33;
memcpy(VAR25, VAR22, VAR16);

VAR22 += VAR16;
VAR23 -= VAR16;
} while (VAR19);

if ((VAR15 & VAR37)) {
return FUN3(VAR4, VAR8, VAR6->VAR29);
} else if (VAR24) {
return 0;
}

return FUN5(VAR38);
}

const RTPDynamicProtocolHandler VAR39 = {
.VAR40           = "",
.VAR41         = VAR42,
.VAR43           = VAR44,
.VAR45     = sizeof(VAR3),
.VAR46   = VAR47,
.VAR48       = VAR49,
};