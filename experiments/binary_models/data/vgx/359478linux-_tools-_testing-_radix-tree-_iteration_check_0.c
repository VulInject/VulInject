void FUN1(unsigned VAR1, unsigned VAR2)
{
int VAR3;

FUN2(1, "",
VAR1 > 0 ? "" : "", VAR2);

VAR4 = VAR1;
VAR5 = false;

for (VAR3 = 0; VAR3 < 3; VAR3++)
VAR6[VAR3] = rand();

if (FUN3(&VAR7[0], NULL, VAR8, NULL)) {
FUN4("");
FUN5(1);
}
if (FUN3(&VAR7[1], NULL, VAR9, NULL)) {
FUN4("");
FUN5(1);
}
if (FUN3(&VAR7[2], NULL, VAR10, NULL)) {
FUN4("");
FUN5(1);
}
if (FUN3(&VAR7[3], NULL, VAR11, NULL)) {
FUN4("");
FUN5(1);
}
if (FUN3(&VAR7[4], NULL, VAR12, NULL)) {
FUN4("");
FUN5(1);
}

sleep(VAR2);
VAR5 = true;

for (VAR3 = 0; VAR3 < VAR13; VAR3++) {
if (FUN6(VAR7[VAR3], NULL)) {
FUN4("");
FUN5(1);
}
}

FUN7(&VAR14);
}