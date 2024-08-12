static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6, ptrdiff_t VAR7, int VAR8, int VAR9,
int VAR10)
{
uint8_t VAR11[4];
uint8_t VAR12[4];
int VAR13;
int VAR14 = 0, VAR15;
int VAR16;
int VAR17, VAR18;

if (!VAR9) {
memset(VAR11, VAR6[-1], 4);
} else {
VAR11[VAR19] = VAR6[-VAR7];
if (!VAR8) {
VAR11[VAR20] = VAR11[VAR21] = VAR11[VAR19];
} else {
VAR11[VAR20] = VAR6[-VAR7 - 1];
VAR11[    VAR21] = VAR6[-1];
}
if (VAR10)
VAR11[VAR22] = VAR6[-VAR7 + 1];
else
VAR11[VAR22] = VAR11[VAR19];
}

VAR15 = 0;
if (VAR8 >= 2 && VAR6[-2] == VAR11[VAR21])
VAR15  = 1;
if (VAR9 >= 2 && VAR6[-2 * VAR7] == VAR11[VAR19])
VAR15 |= 2;

VAR13 = 1;
VAR12[0] = VAR11[0];
for (VAR17 = 1; VAR17 < 4; VAR17++) {
for (VAR18 = 0; VAR18 < VAR13; VAR18++)
if (VAR12[VAR18] == VAR11[VAR17])
break;
if (VAR18 == VAR13)
VAR12[VAR13++] = VAR11[VAR17];
}

switch (VAR13) {
case 1:
VAR14 = 0;
break;
case 2:
if (VAR11[VAR19] == VAR11[VAR20]) {
if (VAR11[VAR22] == VAR11[VAR20])
VAR14 = 1;
else if (VAR11[VAR21] == VAR11[VAR20])
VAR14 = 2;
else
VAR14 = 3;
} else if (VAR11[VAR22] == VAR11[VAR20]) {
if (VAR11[VAR21] == VAR11[VAR20])
VAR14 = 4;
else
VAR14 = 5;
} else if (VAR11[VAR21] == VAR11[VAR20]) {
VAR14 = 6;
} else {
VAR14 = 7;
}
break;
case 3:
if (VAR11[VAR19] == VAR11[VAR20])
VAR14 = 8;
else if (VAR11[VAR22] == VAR11[VAR20])
VAR14 = 9;
else if (VAR11[VAR21] == VAR11[VAR20])
VAR14 = 10;
else if (VAR11[VAR22] == VAR11[VAR19])
VAR14 = 11;
else if (VAR11[VAR19] == VAR11[VAR21])
VAR14 = 12;
else
VAR14 = 13;
break;
case 4:
VAR14 = 14;
break;
}

VAR16 = VAR2->FUN2(VAR2,
&VAR4->VAR23[VAR14][VAR15]);
if (VAR16 < VAR13)
return VAR12[VAR16];
else
return FUN3(VAR2, VAR4, VAR12, VAR13, 1);
}