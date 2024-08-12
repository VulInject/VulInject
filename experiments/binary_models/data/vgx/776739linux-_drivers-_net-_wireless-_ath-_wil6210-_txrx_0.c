bool FUN1(struct VAR1 *VAR2)
{
int VAR3;
unsigned long VAR4;
int VAR5 = FUN2(VAR2);

for (VAR3 = VAR5; VAR3 < VAR6; VAR3++) {
struct VAR7 *VAR8 = &VAR2->VAR9[VAR3];
int VAR10 = VAR8 - VAR2->VAR9;
struct VAR11 *VAR12 =
&VAR2->VAR13[VAR10];

FUN3(&VAR12->VAR14);

if (!VAR8->VAR15 || !VAR12->VAR16) {
FUN4(&VAR12->VAR14);
continue;
}

VAR4 = VAR17 + FUN5(
VAR18);
if (FUN6(VAR19, VAR2->VAR20)) {
while (!FUN7(VAR8)) {
if (FUN8(VAR17, VAR4)) {
FUN9(VAR2,
"");
FUN4(&VAR12->VAR14);
return false;
}
FUN10(VAR2,
"");
FUN4(&VAR12->VAR14);
FUN11(&VAR2->VAR21);
FUN12(20);
FUN3(&VAR12->VAR14);
if (!VAR8->VAR15 || !VAR12->VAR16)
break;
}
}

FUN4(&VAR12->VAR14);
}

return true;
}