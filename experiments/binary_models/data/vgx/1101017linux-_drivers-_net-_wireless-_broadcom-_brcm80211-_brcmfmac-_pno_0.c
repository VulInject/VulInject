static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
bool VAR9;
int VAR10, VAR11, VAR12 = 0;

for (VAR10 = 0; VAR10 < VAR4->VAR13; VAR10++) {
VAR6 = VAR4->VAR14[VAR10];

for (VAR11 = 0; VAR11 < VAR6->VAR15; VAR11++) {
VAR8 = &VAR6->VAR16[VAR11];
if (VAR8->VAR17.VAR18) {
VAR9 = FUN2(&VAR8->VAR17, VAR6);
VAR12 = FUN3(VAR2, &VAR8->VAR17,
VAR9);
}
if (!VAR12 && FUN4(VAR8->VAR19))
VAR12 = FUN5(VAR2, VAR8->VAR19);

if (VAR12 < 0)
return VAR12;
}
}
return 0;
}