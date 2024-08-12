static void FUN1(struct VAR1 *VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < VAR4; VAR3++) {
if (FUN2(VAR2->VAR5[VAR3]))
continue;
FUN3(VAR2->VAR5[VAR3]);
FUN4(VAR2->VAR5[VAR3]);
VAR2->VAR5[VAR3] = FUN5(-VAR6);
}
}