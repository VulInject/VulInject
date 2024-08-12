static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

FUN2(&VAR2->VAR6);
for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
VAR4 = VAR2->VAR8[VAR5];
memset(&VAR4->VAR9, 0, sizeof(VAR4->VAR9));
VAR4->VAR10 = 0;
VAR4->VAR11 = 0;
VAR4->VAR12 = false;

VAR4->VAR13 = VAR2->VAR14;
VAR4->VAR15 = 0;
if (VAR2->VAR16.VAR17 <= VAR18 && !VAR19) {
VAR4->VAR20 = 1;
VAR4->VAR21 = 1;
} else {
VAR4->VAR20 = -1;
VAR4->VAR21 = -1;
}
VAR4->VAR22 = 0;
VAR4->VAR23 = 0;
}
}