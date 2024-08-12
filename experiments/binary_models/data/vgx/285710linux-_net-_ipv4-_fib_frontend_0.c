static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct fib_dump_filter VAR5 = { .VAR6 = true,
.VAR7 = true };
const struct VAR8 *VAR9 = VAR4->VAR9;
struct VAR10 *VAR10 = FUN2(VAR2->VAR11);
unsigned int VAR12, VAR13;
unsigned int VAR14 = 0, VAR15;
struct VAR16 *VAR17;
struct VAR18 *VAR19;
int VAR20 = 0, VAR21;

if (VAR4->VAR22) {
VAR21 = FUN3(VAR10, VAR9, &VAR5, VAR4);
if (VAR21 < 0)
return VAR21;
} else if (FUN4(VAR9) >= sizeof(struct VAR23)) {
struct VAR23 *VAR24 = FUN5(VAR9);

VAR5.VAR25 = VAR24->VAR26 & (VAR27 | VAR28);
}


if (VAR5.VAR25 & VAR27)
return VAR2->VAR29;

if (VAR5.VAR30) {
VAR17 = FUN6(VAR10, VAR5.VAR30);
if (!VAR17) {
if (FUN7(VAR4->VAR9) != VAR31)
return VAR2->VAR29;

FUN8(VAR4->VAR32, "");
return -VAR33;
}

FUN9();
VAR21 = FUN10(VAR17, VAR2, VAR4, &VAR5);
FUN11();
return VAR2->VAR29 ? : VAR21;
}

VAR13 = VAR4->VAR34[0];
VAR15 = VAR4->VAR34[1];

FUN9();

for (VAR12 = VAR13; VAR12 < VAR35; VAR12++, VAR15 = 0) {
VAR14 = 0;
VAR19 = &VAR10->VAR36.VAR37[VAR12];
FUN12(VAR17, VAR19, VAR38) {
if (VAR14 < VAR15)
goto VAR39;
if (VAR20)
memset(&VAR4->VAR34[2], 0, sizeof(VAR4->VAR34) -
2 * sizeof(VAR4->VAR34[0]));
VAR21 = FUN10(VAR17, VAR2, VAR4, &VAR5);
if (VAR21 < 0) {
if (FUN13(VAR2->VAR29))
goto VAR40;

goto VAR41;
}
VAR20 = 1;
VAR39:
VAR14++;
}
}
VAR40:
VAR21 = VAR2->VAR29;
VAR41:
FUN11();

VAR4->VAR34[1] = VAR14;
VAR4->VAR34[0] = VAR12;

return VAR21;
}