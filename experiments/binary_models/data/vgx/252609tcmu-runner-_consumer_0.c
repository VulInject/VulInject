int main(int argc, char **argv)
{
struct VAR1 *VAR2;
struct pollfd VAR3[16];
int VAR4;
int VAR5;

if (FUN1(VAR6)) {
fprintf(VAR7, "");
FUN2(1);
}


VAR2 = FUN3(&VAR8, 1);
if (!VAR2) {
FUN4("", VAR2);
FUN2(1);
}

while (1) {
VAR3[0].VAR9 = FUN5(VAR2);
VAR3[0].VAR10 = VAR11;
VAR3[0].VAR12 = 0;

for (VAR4 = 0; VAR4 < VAR13; VAR4++) {
VAR3[VAR4+1].VAR9 = FUN6(VAR14[VAR4]);
VAR3[VAR4+1].VAR10 = VAR11;
VAR3[VAR4+1].VAR12 = 0;
}


VAR5 = FUN7(VAR3, VAR13+1, NULL, NULL);
if (VAR5 == -1) {
FUN4("", VAR5);
FUN2(VAR15);
}

if (VAR3[0].VAR12) {

FUN8(VAR2);


continue;
}

for (VAR4 = 0; VAR4 < VAR13; VAR4++) {
if (VAR3[VAR4+1].VAR12) {
struct VAR16 *VAR17;
struct VAR18 *VAR19 = VAR14[VAR4];

FUN9(VAR19);

while ((VAR17 = FUN10(VAR19, 0)) != NULL) {
VAR5 = FUN11(VAR19,
VAR17->VAR20,
VAR17->VAR21,
VAR17->VAR22,
VAR17->VAR23);
FUN12(VAR19, VAR17, VAR5);
}

FUN13(VAR19);
}
}
}

return 0;
}