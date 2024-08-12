static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;
int VAR6 = 0;
int VAR7 = VAR4->VAR8 / 8;
u32 VAR9[VAR10 / 4];

FUN2(VAR2->VAR11, "", VAR12);


if (VAR7 > 2) {
FUN3(VAR2->VAR11, "",
VAR12, VAR4->VAR8);
return -VAR13;
}

for (VAR5 = 0; VAR5 < VAR4->VAR8 / 4; VAR5++)
VAR9[VAR5] = FUN4(VAR4->VAR9 + VAR5*4);

for (VAR5 = 0; VAR5 < VAR7; VAR5++) {
VAR6 = FUN5(VAR2, VAR9[VAR5*2], VAR9[VAR5*2+1],
(enum VAR14) VAR5);
if (VAR6 != 0)
return VAR6;
}
return VAR6;
}