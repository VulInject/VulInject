static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
int VAR4;
struct VAR5 *VAR6, *VAR7;
struct VAR8 *VAR9 = VAR3, *VAR10;
struct VAR11 *VAR12 = FUN2(VAR2);
struct VAR1 *VAR13 = FUN3(VAR9->VAR14.VAR15->VAR15);

if (!VAR12)
return 0;

VAR6 = FUN4(VAR13->VAR16);
VAR7 = FUN4(VAR2->VAR16);

if (VAR7 != VAR6->VAR17)
return 0;

for (VAR4 = 1; VAR4 <= VAR2->VAR18; VAR4++) {
VAR10 = VAR12->VAR19[VAR4 - 1];
if (VAR10 && VAR10->VAR20 == VAR9->VAR20) {
FUN5(VAR9, VAR10);
return 1; 
}
}

return 0;
}