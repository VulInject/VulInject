void FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
int VAR4, int VAR5)
{
int VAR6, VAR7[2];


FUN2(VAR1, VAR8, 13);
VAR7[0] = FUN3(VAR1, VAR9);
VAR7[1] = FUN3(VAR1, VAR10);

for (VAR6 = 0; VAR6 < 2; VAR6++) {
u32 VAR11, VAR12;


if (VAR7[VAR6] < VAR3->VAR13) {
if (VAR3->VAR14[VAR6] >= VAR15*VAR4)
FUN4(VAR1, ""
"",
VAR6, VAR3->VAR16[VAR6],
VAR3->VAR14[VAR6]/VAR4);
VAR3->VAR14[VAR6] = 0;
continue;
}


if (VAR3->VAR14[VAR6] == 0) {
VAR3->VAR14[VAR6] = VAR4;
VAR3->VAR17[VAR6] = 0;
} else {
VAR3->VAR14[VAR6] += VAR5;
VAR3->VAR17[VAR6] -= VAR5;
}

if (VAR3->VAR14[VAR6] < VAR15*VAR4)
continue;


if (VAR3->VAR17[VAR6] > 0)
continue;
VAR3->VAR17[VAR6] = VAR18*VAR4;


FUN2(VAR1, VAR8, 0);
VAR11 = FUN3(VAR1, VAR10);
VAR3->VAR19[VAR6] = (VAR11 >> (VAR6 * 9)) & 0x3f;

FUN2(VAR1, VAR8, 11);
VAR12 = FUN3(VAR1, VAR10);
VAR3->VAR16[VAR6] = (VAR12 >> (VAR6 * 16)) & 0xffff;

FUN4(VAR1, ""
"",
VAR6, VAR3->VAR16[VAR6], VAR3->VAR19[VAR6],
VAR3->VAR14[VAR6]/VAR4,
VAR11, VAR12);
FUN5(VAR1, VAR3->VAR19[VAR6]);
}
}