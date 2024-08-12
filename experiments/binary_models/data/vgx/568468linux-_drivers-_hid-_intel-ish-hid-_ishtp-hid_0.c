static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5)
{
struct VAR6 *VAR7 =  VAR2->VAR8;

unsigned int VAR9 = ((VAR4->VAR10 - 1) >> 3) + 1 + (VAR4->VAR11 > 0);
char *VAR12;
unsigned int VAR13 = sizeof(struct VAR14);

VAR9 += VAR13;

VAR7->VAR15 = false;
switch (VAR5) {
case VAR16:
VAR7->VAR17 = false;
FUN2(VAR2, VAR4->VAR11, VAR4->VAR18);
break;
case VAR19:

VAR12 = FUN3(VAR9 + 7, VAR20);
if (!VAR12)
return;

FUN4(VAR4, VAR12 + VAR13);
FUN5(VAR2, VAR12, VAR9, VAR4->VAR11);
FUN6(VAR12);
break;
}
}