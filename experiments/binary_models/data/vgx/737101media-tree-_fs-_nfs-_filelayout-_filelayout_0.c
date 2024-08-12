static void FUN1(struct VAR1 *VAR2)
{
int VAR3;

if (VAR2->VAR4) {
for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {
if (!VAR2->VAR4[VAR3])
break;
FUN2(VAR2->VAR4[VAR3]);
}
FUN2(VAR2->VAR4);
}
FUN2(VAR2);
}