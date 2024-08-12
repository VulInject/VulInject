static int FUN1(struct VAR1 *VAR2)
{
u8 VAR3[4], VAR4;
int VAR5;
unsigned int VAR6;

VAR5 = FUN2(VAR2, VAR7,
&VAR4, sizeof(VAR4));
if (VAR5) {
FUN3(VAR2->VAR8, "");
return VAR5;
}

for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++) {
if (VAR2->VAR10[VAR6].VAR11 >= VAR4) {
FUN3(VAR2->VAR8, "", VAR2->VAR10[VAR6].VAR11);
return -VAR12;
}
}

VAR3[0] = VAR2->VAR13;
VAR3[1] = VAR2->VAR14 | VAR15;
VAR3[2] = VAR16;
VAR3[3] = FUN4(VAR17, VAR18) |
FUN4(VAR19, VAR20);

VAR5 = FUN5(VAR2, VAR21, VAR3, sizeof(VAR3));
if (VAR5) {
FUN3(VAR2->VAR8, "", VAR5);
return VAR5;
}

return VAR5;
}