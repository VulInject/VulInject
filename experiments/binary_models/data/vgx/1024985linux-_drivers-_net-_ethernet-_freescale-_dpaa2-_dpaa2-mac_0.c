static void FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;


FUN2(VAR2->VAR5, VAR2->VAR6.VAR7);
if (VAR2->VAR8) {
switch (VAR2->VAR5) {
case VAR9:
case VAR10:
FUN2(VAR9,
VAR2->VAR6.VAR7);
FUN2(VAR10,
VAR2->VAR6.VAR7);
break;

default:
break;
}
}

if (!VAR2->VAR11)
return;


for (VAR3 = 0; VAR3 < VAR12; VAR3++) {
if (VAR3 == VAR13)
continue;

VAR4 = FUN3(VAR2->VAR11, VAR14, VAR3, NULL);
if (VAR4)
continue;

FUN2(VAR3, VAR2->VAR6.VAR7);
}
}