static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR2, struct VAR3, VAR2);
struct VAR5 *VAR6;
struct VAR7 *VAR8;
unsigned long VAR9;
int VAR10, VAR11;

FUN3(&VAR4->VAR12, VAR9);

if (VAR4->VAR13)
goto VAR14;

for (VAR10 = 0; VAR10 < VAR4->VAR15; VAR10++) {
if (!VAR4->VAR8[VAR10])
continue;

VAR8 = VAR4->VAR8[VAR10];
VAR6 = FUN4(VAR8);

if (!(VAR6->VAR16 & VAR17))
continue;

VAR11 = FUN5(VAR8, VAR8->VAR18->VAR19);
if (!VAR11)
VAR6->VAR16 &= ~VAR17;
else
FUN6(VAR20, &VAR4->VAR2);
}
VAR14:
FUN7(&VAR4->VAR12, VAR9);
}