VAR1 FUN1(VAR2 *VAR3, int *VAR4, VAR5 **VAR6)
{
guint8 VAR7[VAR8];
guint8 VAR9;
gint8 VAR10;
gint8 VAR11;
gboolean VAR12;
guint8 VAR13, VAR14 = 0;
int VAR15 = 0;
gint64 VAR16;
int VAR17 = 0, VAR18;

if (!FUN2(VAR3->VAR19, &VAR7, VAR8, VAR4, VAR6)) {
if (*VAR4 != VAR20)
return VAR21;
return VAR22;
}

VAR9 = VAR7[VAR17++];

VAR10 = (VAR9>>6) & 0x03;
VAR12 = (VAR9>>5) & 0x01;
VAR11 = VAR9 & 0x1F;



if(!(VAR12 &&
(((VAR10 == VAR23) && ((VAR11 == VAR24) || (VAR11 == VAR25))) ||
(((VAR10 == VAR26) || (VAR10 == VAR27)) && (VAR11 < 32)))))
return VAR22;


VAR13 = VAR7[VAR17++];

if(VAR13 != 0x80) {


if(!(VAR13 & 0x80))

VAR15 = VAR13;
else {
VAR14 = VAR13 & 0x7F; 

if((VAR14 > 0) && (VAR14 <= (VAR8 - 2))) {

VAR18 = VAR14;
while(VAR18--) {
VAR13 = VAR7[VAR17++];
VAR15 = (VAR15<<8) + VAR13;
}
}
}

VAR15 += (2 + VAR14); 
VAR16 = FUN3(VAR3, VAR4);

if(VAR15 != VAR16) {
return VAR22; 
}
} else {

}


if (FUN4(VAR3->VAR19, 0, VAR28, VAR4) == -1)
return VAR21;

VAR3->VAR29 = VAR30;
VAR3->VAR31 = VAR32;
VAR3->VAR33 = 0;

VAR3->VAR34 = VAR35;
VAR3->VAR36 = VAR37;
VAR3->VAR38 = VAR39;

return VAR40;
}

static const struct supported_block_type VAR41[] = {

{ VAR42, VAR43, VAR44 }
};