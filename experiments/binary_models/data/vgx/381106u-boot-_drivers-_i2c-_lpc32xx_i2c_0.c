static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR3 *VAR8, *VAR9, VAR10;
uint VAR11 = 0, VAR12 = 0;

memset(&VAR10, 0, sizeof(struct VAR3));


if (VAR5 > 2 || VAR5 == 0) {
FUN3("", VAR13);
return -1;
}

VAR9 = VAR5 == 1 ? &VAR10 : VAR4;
VAR8 = VAR5 == 1 ? VAR4 : VAR4 + 1;


VAR12 = VAR9->VAR14[0];
for (VAR11 = 1; VAR11 < VAR9->VAR15; VAR11++)
VAR12 = (VAR12 << 8) + VAR9->VAR14[VAR11];

if (VAR8->VAR16 & VAR17)
return FUN4(VAR7->VAR18, VAR8->VAR19, VAR12,
VAR9->VAR15, VAR8->VAR14, VAR8->VAR15);
else
return FUN5(VAR7->VAR18, VAR8->VAR19, VAR12,
VAR9->VAR15, VAR8->VAR14, VAR8->VAR15);
}