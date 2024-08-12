static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, VAR5 *VAR6)
{
struct VAR7 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9;
unsigned int VAR10;
int VAR11;

VAR11 = FUN3(VAR7, &VAR9);

if (VAR11 == -VAR12)
return;

for (VAR10 = 0; VAR10 < VAR13; VAR10++)
*(VAR6++) = ((VAR5 *)&VAR9->VAR14)[VAR15[VAR10].VAR16];
for (VAR10 = 0; VAR10 < VAR17; VAR10++)
*(VAR6++) = ((VAR5 *)&VAR9->VAR18)[VAR19[VAR10].VAR16];
for (VAR10 = 0; VAR10 < VAR20; VAR10++)
*(VAR6++) = ((VAR5 *)&VAR7->VAR21)[VAR22[VAR10].VAR16];
}