static void FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2(VAR4 "",
VAR2->VAR5, VAR2->VAR6);
for (VAR3 = 0; VAR3 < 32; VAR3++) {
FUN2(VAR4 "",
VAR3 + 1, ((VAR7 *)VAR2->VAR5)[VAR3]);
FUN2(VAR4 "",
VAR3 + 1, ((VAR7 *)VAR2->VAR6)[VAR3]);
}
}