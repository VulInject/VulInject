void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = NULL;
int VAR5 = FUN2(&VAR4);


FUN3(VAR2, "");

for (int VAR6 = 0; VAR6 < VAR5; VAR6++) {
FUN4(VAR2, "",
VAR4[VAR6].VAR7,
FUN5(&VAR4[VAR6].VAR8),
VAR4[VAR6].VAR9);

if (FUN6(VAR2) == '') {
FUN3(VAR2, "");
}

FUN3(VAR2, "");
}

}