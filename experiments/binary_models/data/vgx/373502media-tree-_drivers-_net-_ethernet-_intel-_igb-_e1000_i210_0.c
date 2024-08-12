VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5) {
VAR6 *VAR7 = NULL;
VAR6 *VAR8 = NULL;
u32 VAR9 = 0;
u32 VAR10 = 0;
u32 VAR11 = VAR12 - (VAR13 /
VAR14);
u32 VAR15[VAR12];
s32 VAR16 = -VAR17;
u16 VAR18 = 0;


for (VAR9 = 0; VAR9 < VAR12; VAR9++) {
VAR10 = FUN2(FUN3(VAR9));
VAR15[VAR9] = VAR10;
}


for (VAR9 = 1; VAR9 < VAR11; VAR9++) {
VAR7 = &VAR15[VAR11 - VAR9];
VAR8 = &VAR15[VAR11 - VAR9 + 1];


if ((VAR9 == 1) && ((*VAR7 & VAR19) == 0)) {
VAR18 = 0;
VAR16 = 0;
break;
}

else if ((VAR9 == 1) &&
((*VAR7 & VAR20) == 0)) {
VAR18 = (*VAR7 & VAR19) >> 3;
VAR16 = 0;
break;
}

else if ((((*VAR7 & VAR19) == 0) &&
((*VAR7 & 0x3) == 0)) || (((*VAR7 & 0x3) != 0) &&
(VAR9 != 1))) {
VAR18 = (*VAR8 & VAR20)
>> 13;
VAR16 = 0;
break;
}

else if (((*VAR7 & VAR20) == 0) &&
((*VAR7 & 0x3) == 0)) {
VAR18 = (*VAR7 & VAR19) >> 3;
VAR16 = 0;
break;
}
}

if (!VAR16) {
VAR5->VAR21 = (VAR18 & VAR22)
>> VAR23;
VAR5->VAR24 = VAR18 & VAR25;
}

for (VAR9 = 1; VAR9 < VAR11; VAR9++) {
VAR7 = &VAR15[VAR11 - VAR9];
VAR8 = &VAR15[VAR11 - VAR9 + 1];


if ((VAR9 == 1) && ((*VAR7 & VAR26) == 0)) {
VAR5->VAR27 = 0;
VAR16 = 0;
break;
}

else if ((((*VAR7 & 0x3) == 0) &&
((*VAR7 & VAR26) == 0)) ||
((((*VAR7 & 0x3) != 0) && (VAR9 != 1)))) {
VAR5->VAR27 =
(*VAR8 & VAR26) >> 23;
VAR16 = 0;
break;
}
}
return VAR16;
}