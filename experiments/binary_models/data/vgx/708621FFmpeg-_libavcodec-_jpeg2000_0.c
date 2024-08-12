static int FUN1(int VAR1, int VAR2)
{
int VAR3, VAR4, VAR5;

VAR3 = ((VAR1 & VAR6)  ? 1 : 0) +
((VAR1 & VAR7)  ? 1 : 0);
VAR4 = ((VAR1 & VAR8)  ? 1 : 0) +
((VAR1 & VAR9)  ? 1 : 0);
VAR5 = ((VAR1 & VAR10) ? 1 : 0) +
((VAR1 & VAR11) ? 1 : 0) +
((VAR1 & VAR12) ? 1 : 0) +
((VAR1 & VAR13) ? 1 : 0);

if (VAR2 < 3) {
if (VAR2 == 1)
FUN2(int, VAR3, VAR4);
if (VAR3 == 2) return 8;
if (VAR3 == 1) {
if (VAR4 >= 1) return 7;
if (VAR5 >= 1) return 6;
return 5;
}
if (VAR4 == 2) return 4;
if (VAR4 == 1) return 3;
if (VAR5 >= 2) return 2;
if (VAR5 == 1) return 1;
} else {
if (VAR5 >= 3) return 8;
if (VAR5 == 2) {
if (VAR3+VAR4 >= 1) return 7;
return 6;
}
if (VAR5 == 1) {
if (VAR3+VAR4 >= 2) return 5;
if (VAR3+VAR4 == 1) return 4;
return 3;
}
if (VAR3+VAR4 >= 2) return 2;
if (VAR3+VAR4 == 1) return 1;
}
return 0;
}

uint8_t VAR14[16][16], VAR15[16][16];

static const int VAR16[3][3] = { {  0, -1,  1 }, { -1, -1,  0 }, {  1,  0,  1 } };
static const int  VAR17[3][3] = { { 13, 12, 11 }, { 10,  9, 10 }, { 11, 12, 13 } };
static const int  VAR18[3][3] = { {  1,  1,  1 }, {  1,  0,  0 }, {  0,  0,  0 } };

static int FUN3(int VAR1, VAR19 *VAR20)
{
int VAR21, VAR22;

VAR22 = VAR16[VAR1 & VAR6 ? VAR1 & VAR23 ? 1 : 2 : 0]
[VAR1 & VAR7 ? VAR1 & VAR24 ? 1 : 2 : 0] + 1;
VAR21 = VAR16[VAR1 & VAR9 ? VAR1 & VAR25 ? 1 : 2 : 0]
[VAR1 & VAR8 ? VAR1 & VAR26 ? 1 : 2 : 0] + 1;
*VAR20 = VAR18[VAR22][VAR21];

return VAR17[VAR22][VAR21];
}