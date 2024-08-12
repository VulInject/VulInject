static void FUN1(struct VAR1 *VAR2, uint32_t VAR3, int VAR4,
struct VAR5 *VAR6, struct VAR7 *VAR8,
int VAR9)
{
char VAR10[VAR11];
int VAR12 = VAR11 - 1;
int VAR13 = 0;
int VAR14, VAR15;

memset(VAR10, 0, sizeof(VAR10));

if (VAR8) {
for (VAR15 = 0; VAR15 < VAR9; VAR15++) {
if (!VAR8[VAR15].VAR16)
continue;

VAR14 = snprintf(VAR10 + VAR13, VAR12 - VAR13, "",
VAR8[VAR15].VAR17, VAR8[VAR15].VAR16);
if (VAR14 >= VAR12 - VAR13)
break;
VAR13 += VAR14;
}
} else if (VAR6) {
for (VAR15 = 0; VAR15 < VAR4; VAR15++) {
VAR14 = snprintf(VAR10 + VAR13, VAR12 - VAR13, "",
VAR6[VAR15].VAR18, VAR6[VAR15].VAR19);
if (VAR14 >= VAR12 - VAR13)
break;
VAR13 += VAR14;
}
}

FUN2(VAR2, "", VAR3, VAR4, VAR10);
}