static void FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR4->VAR6 = VAR7;

VAR4->VAR8 = ((VAR4->VAR9 - 1) << VAR10) |
((VAR4->VAR11 - 1) << VAR12) |
(VAR4->VAR13 << VAR14);

VAR4->VAR15 = 0;
VAR4->VAR16 = -1 & VAR4->VAR17;
VAR4->VAR18 = VAR4->VAR19;

for (VAR5 = 0; VAR5 < VAR4->VAR20; VAR5++) {
VAR4->VAR21[VAR5].VAR22 = VAR4->VAR23;
switch (VAR4->VAR21[VAR5].VAR24) {
case VAR25:
VAR4->VAR21[VAR5].VAR26 = !!(VAR4->VAR23 & VAR27);
break;

case VAR28:
VAR4->VAR21[VAR5].VAR22 |= VAR29;
break;

case VAR30:
break;
}


if ((VAR4->VAR31 == VAR32) ||
(VAR4->VAR31 == VAR33)) {
if (VAR5 >= VAR4->VAR34 && VAR5 < VAR4->VAR35) {
FUN3(VAR4, VAR5, 0);
continue;
}
}

FUN3(VAR4, VAR5, VAR4->VAR36);
}

for (VAR5 = 0; VAR5 < VAR4->VAR11; VAR5++) {
VAR4->VAR37[VAR5].VAR38      = 15;
VAR4->VAR37[VAR5].VAR39.VAR40 = -1;
VAR4->VAR37[VAR5].VAR39.VAR41 = 0;
FUN4(VAR4->VAR37[VAR5].VAR39.VAR42, 0, VAR43);
VAR4->VAR37[VAR5].VAR44.VAR40 = -1;
VAR4->VAR37[VAR5].VAR44.VAR41 = 0;
FUN4(VAR4->VAR37[VAR5].VAR44.VAR42, 0, VAR43);
}

for (VAR5 = 0; VAR5 < VAR45; VAR5++) {
VAR4->VAR46[VAR5].VAR47 = 0;
VAR4->VAR46[VAR5].VAR48 = VAR49;
if (VAR4->VAR46[VAR5].VAR50) {
FUN5(VAR4->VAR46[VAR5].VAR51);  
VAR4->VAR46[VAR5].VAR50 = false;
}
}

VAR4->VAR6 = 0;
}

typedef struct VAR52 {
const char             *VAR53;
MemoryRegionOps const  *VAR54;
hwaddr                  VAR55;
ram_addr_t              VAR56;
} VAR52;