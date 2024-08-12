static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
static const unsigned int VAR5[] = {
73728000U, 67737602U, 49152000U, 45158401U, 32768001U
};
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = FUN3(VAR7->VAR10);
int VAR11, VAR12, VAR13, VAR14;
unsigned long int VAR15;
long int VAR16 = -VAR17;
int VAR18, VAR19;

VAR14 = FUN4(FUN5(VAR4));
if (VAR14 < 0) {
FUN6(VAR7->VAR10->VAR20, "", VAR14);
return VAR14;
}

if (VAR14 != 16 && VAR14 != 24) {
FUN6(VAR7->VAR10->VAR20, "", VAR14);
return -VAR17;
}

VAR11 = 2 * VAR14;

switch (FUN7(VAR4)) {
case 16000:
case 22050:
case 24000:
case 32000:
case 44100:
case 48000:
case 88200:
case 96000:
VAR13 = 8 * VAR11;
break;
case 64000:
VAR13 = 384;
break;
case 8000:
case 11025:
case 12000:
VAR13 = 16 * VAR11;
break;
default:
return -VAR17;
}

VAR15 = FUN7(VAR4) * VAR13;

for (VAR12 = 8; VAR12 > 0; VAR12 /= 2) {
for (VAR19 = 0; VAR19 < FUN8(VAR5); VAR19++) {
if ((VAR5[VAR19] - VAR15 * VAR12) <= 2) {
VAR16 = VAR5[VAR19];
break;
}
}
}
if (VAR16 < 0) {
FUN6(VAR7->VAR10->VAR20, "", VAR15);
return -VAR17;
}

VAR18 = FUN9(VAR9->VAR21, VAR16);
if (VAR18 < 0) {
FUN6(VAR7->VAR10->VAR20, "");
return VAR18;
}

return 0;
}