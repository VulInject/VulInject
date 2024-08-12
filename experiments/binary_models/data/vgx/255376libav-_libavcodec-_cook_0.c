static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5,
int *VAR6, float *VAR7)
{

int VAR8[VAR9];

int VAR10[VAR9];
int VAR11, VAR12;
int VAR13 = 0;

for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++) {
VAR13 = VAR5[VAR11];
if (VAR5[VAR11] < 7) {
if (FUN2(VAR2, VAR4, VAR5[VAR11], VAR8, VAR10)) {
VAR13 = 7;
for (VAR12 = 0; VAR12 < VAR4->VAR14; VAR12++)
VAR5[VAR11 + VAR12] = 7;
}
}
if (VAR13 >= 7) {
memset(VAR8, 0, sizeof(VAR8));
memset(VAR10,  0, sizeof(VAR10));
}
VAR2->FUN3(VAR2, VAR13, VAR6[VAR11],
VAR8, VAR10,
&VAR7[VAR11 * VAR9]);
}


if (VAR4->VAR14 * VAR9 >= VAR2->VAR15)
return;
}