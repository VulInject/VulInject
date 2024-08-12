static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned int VAR5,
unsigned int VAR6,
bool VAR7)
{
unsigned int VAR8 = 0;
int VAR9, VAR10 = 0;

for (VAR9 = 1; VAR9 < VAR2->VAR11; VAR9++) {
struct VAR12 *VAR13 = &VAR2->VAR14[VAR9];
struct VAR15 *VAR16 = &VAR4->VAR17[VAR9];

if (VAR13->VAR18 || VAR16->VAR19 || VAR13->VAR20 <= VAR8
|| VAR13->VAR20 > VAR5
|| (VAR13->VAR21 & VAR6)
|| (VAR7 && !VAR13->VAR22))
continue;

VAR8 = VAR13->VAR20;
VAR10 = VAR9;
}
return VAR10;
}