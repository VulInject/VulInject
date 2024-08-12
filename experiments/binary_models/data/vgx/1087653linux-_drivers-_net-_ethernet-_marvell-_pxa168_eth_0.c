static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;
int VAR7 = 0, VAR8 = 0;
int VAR9 = VAR4->VAR10;


VAR4->VAR11 = FUN3(VAR9, sizeof(*VAR4->VAR11), VAR12);
if (!VAR4->VAR11)
return -VAR13;


VAR4->VAR14 = 0;
VAR7 = VAR4->VAR10 * sizeof(struct VAR5);
VAR4->VAR15 = VAR7;
VAR4->VAR16 = FUN4(VAR4->VAR2->VAR2.VAR17, VAR7,
&VAR4->VAR18,
VAR12);
if (!VAR4->VAR16)
goto VAR19;


VAR6 = VAR4->VAR16;
for (VAR8 = 0; VAR8 < VAR9; VAR8++) {
VAR6[VAR8].VAR20 = VAR4->VAR18 +
((VAR8 + 1) % VAR9) * sizeof(struct VAR5);
}

VAR4->VAR21 = 0;
VAR4->VAR22 = 0;
VAR4->VAR15 = VAR9 * sizeof(struct VAR5);
return 0;
VAR19:
FUN5(VAR4->VAR11);
return -VAR13;
}