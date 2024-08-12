static int FUN1(const VAR1 *VAR2, const VAR3 *VAR4,
int VAR5, int VAR6,
VAR7 *VAR8)
{
unsigned long VAR9, VAR10 = 0;
const VAR3 *VAR11 = VAR8->VAR12;
VAR3 *VAR13;
int VAR14, VAR15, VAR16;

for (VAR15 = 0; VAR15 < VAR2->VAR17; VAR15++) {
if (VAR2->VAR18[VAR15].VAR19 == VAR20) {
VAR10 += (VAR8->VAR21 * VAR8->VAR22 * 3);
} else if (VAR2->VAR18[VAR15].VAR19 == VAR23) {
VAR10 += (VAR8->VAR21 * VAR8->VAR22 * 2);
} else {
VAR10 += (VAR8->VAR21 * VAR8->VAR22 * 4);
}
}

VAR9 = VAR10;

if (FUN2(VAR8->VAR12, &VAR9, VAR4, VAR5) != VAR24) {
return VAR25;
} else if (VAR9 != VAR10) {
return VAR25;
}

VAR13 = VAR8->VAR26;
for (VAR15 = 0; VAR15 < VAR8->VAR22; VAR15++)
for (VAR14 = 0; VAR14 < VAR2->VAR17; VAR14++) {
VAR27 *VAR28 = &VAR2->VAR18[VAR14];
const VAR3 *VAR29[4];
uint32_t VAR30 = 0;

switch (VAR28->VAR19) {
case VAR20:
VAR29[0] = VAR11;
VAR29[1] = VAR29[0] + VAR8->VAR21;
VAR29[2] = VAR29[1] + VAR8->VAR21;
VAR11     = VAR29[2] + VAR8->VAR21;

for (VAR16 = 0; VAR16 < VAR8->VAR21; ++VAR16) {
uint32_t VAR31 = ((unsigned)*(VAR29[0]++) << 24) |
(*(VAR29[1]++) << 16) |
(*(VAR29[2]++) << 8);
VAR30 += VAR31;
FUN3(&VAR13, VAR30);
}
break;
case VAR23:
VAR29[0] = VAR11;
VAR29[1] = VAR29[0] + VAR8->VAR21;
VAR11     = VAR29[1] + VAR8->VAR21;
for (VAR16 = 0; VAR16 < VAR8->VAR21; VAR16++) {
uint32_t VAR31 = (*(VAR29[0]++) << 8) | *(VAR29[1]++);

VAR30 += VAR31;
FUN4(&VAR13, VAR30);
}
break;
case VAR32:
VAR29[0] = VAR11;
VAR29[1] = VAR29[0] + VAR2->VAR33;
VAR29[2] = VAR29[1] + VAR2->VAR33;
VAR29[3] = VAR29[2] + VAR2->VAR33;
VAR11     = VAR29[3] + VAR2->VAR33;

for (VAR16 = 0; VAR16 < VAR2->VAR33; ++VAR16) {
uint32_t VAR31 = ((VAR34)*(VAR29[0]++) << 24) |
(*(VAR29[1]++) << 16) |
(*(VAR29[2]++) << 8 ) |
(*(VAR29[3]++));
VAR30 += VAR31;
FUN3(&VAR13, VAR30);
}
break;
default:
return VAR25;
}
}

return 0;
}