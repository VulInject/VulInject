static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++) {
VAR7 *VAR8 = &VAR4->VAR9[VAR5];

VAR8->VAR10 = 0;
VAR8->VAR11 = 0;
if (VAR4->VAR12) {

VAR8->VAR11 |= VAR13;
}
VAR8->VAR14[VAR15] = 0;
VAR8->VAR14[VAR16] = 0;
VAR8->VAR17 = VAR18 | VAR19;
VAR8->VAR20 = 0;
VAR8->VAR21 = 0;

if (VAR4->VAR22) {
VAR8->VAR23 = 0xffffffff;
} else {
VAR8->VAR23 = 0;
}

VAR8->VAR24 = 0;
VAR8->VAR25 = 0;
VAR8->VAR26 = 0;
VAR8->VAR27 = 0xffff;
VAR8->VAR28 = 0;
VAR8->VAR29 = 0;
memset(VAR8->VAR30, 0, sizeof(VAR8->VAR30));

VAR8->VAR31.VAR32 = 0xff;
VAR8->VAR33.VAR32 = 0xff;


}


if (VAR4->VAR34) {
VAR4->VAR35 = VAR36 | VAR37;
} else {
VAR4->VAR35 = VAR38 | VAR39;
}

VAR4->VAR40[VAR15] = 0;
VAR4->VAR40[VAR16] = 0;

memset(VAR4->VAR41, 0, sizeof(VAR4->VAR41));
memset(VAR4->VAR42, 0, sizeof(VAR4->VAR42));
memset(VAR4->VAR43, 0, sizeof(VAR4->VAR43));
memset(VAR4->VAR44, 0, sizeof(VAR4->VAR44));
memset(VAR4->VAR45, 0, sizeof(VAR4->VAR45));
memset(VAR4->VAR10, 0, sizeof(VAR4->VAR10));
memset(VAR4->VAR27, 0, sizeof(VAR4->VAR27));
memset(VAR4->VAR46, 0, sizeof(VAR4->VAR46));
memset(VAR4->VAR47, 0, sizeof(VAR4->VAR47));
memset(VAR4->VAR48, 0, sizeof(VAR4->VAR48));

FUN3(VAR4);

if (VAR4->VAR22) {

for (VAR5 = VAR49; VAR5 < VAR4->VAR50; VAR5++) {
FUN4(VAR4, VAR5);
}
}
VAR4->VAR51 = true;
}