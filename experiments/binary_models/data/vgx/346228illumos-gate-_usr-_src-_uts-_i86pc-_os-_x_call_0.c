int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2((VAR2->VAR4 & VAR5) == 0);


FUN3(VAR2, NULL);
FUN4();

for (VAR3 = 0; VAR3 < VAR6; VAR3++) {
if (VAR2->VAR7.VAR8 == 0) {
break;
}
FUN5(1);
}
for (; VAR3 < VAR6; VAR3++) {
if (!FUN6(VAR9, VAR2->VAR10)) {
break;
}
FUN5(1);
}

return (VAR3 >= VAR6 ? VAR11 : 0);
}