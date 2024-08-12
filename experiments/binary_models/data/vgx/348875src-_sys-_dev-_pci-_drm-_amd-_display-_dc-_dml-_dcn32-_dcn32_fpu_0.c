static bool FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
unsigned int VAR4, VAR5, VAR6;
unsigned int VAR7 = VAR1->VAR8->VAR9 + 1; 
bool VAR10 = false;

for (VAR4 = 0; VAR4 < VAR1->VAR8->VAR9; VAR4++) {
struct VAR11 *VAR12 = &VAR3->VAR13.VAR11[VAR4];


if (VAR12->VAR14 && !VAR12->VAR15 &&
VAR12->VAR14->VAR16.VAR17 == VAR18) {
VAR5 = 0;
while (VAR12) {
VAR5++;
VAR12 = VAR12->VAR19;
}

if (VAR5 < VAR7)
VAR7 = VAR5;
}
}

VAR6 = FUN2(VAR1, VAR3);



if (VAR6 >= VAR7 && VAR6 < VAR1->VAR8->VAR9)
VAR10 = true;

return VAR10;
}