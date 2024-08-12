static int FUN1(int VAR1, struct VAR2 *VAR3)
{
enum asrc_pair_index VAR4 = VAR5;
struct VAR6 *VAR7 = VAR3->VAR7;
struct VAR8 *VAR9 = &VAR7->VAR10->VAR9;
unsigned long VAR11;
int VAR12, VAR13 = 0;

FUN2(&VAR7->VAR14, VAR11);

for (VAR12 = VAR15; VAR12 < VAR16; VAR12++) {
if (VAR7->VAR3[VAR12] != NULL)
continue;

VAR4 = VAR12;

if (VAR12 != VAR17)
break;
}

if (VAR4 == VAR5) {
FUN3(VAR9, "");
VAR13 = -VAR18;
} else if (VAR7->VAR19 < VAR1) {
FUN3(VAR9, "", VAR1);
VAR13 = -VAR20;
} else {
VAR7->VAR19 -= VAR1;
VAR7->VAR3[VAR4] = VAR3;
VAR3->VAR1 = VAR1;
VAR3->VAR4 = VAR4;
}

FUN4(&VAR7->VAR14, VAR11);

return VAR13;
}