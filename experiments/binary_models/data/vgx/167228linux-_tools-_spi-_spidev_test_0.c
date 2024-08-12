static void FUN1(int VAR1, int VAR2)
{
VAR3 *VAR4;
VAR3 *VAR5;
int VAR6;

VAR4 = malloc(VAR2);
if (!VAR4)
FUN2("");
for (VAR6 = 0; VAR6 < VAR2; VAR6++)
VAR4[VAR6] = random();

VAR5 = malloc(VAR2);
if (!VAR5)
FUN2("");

FUN3(VAR1, VAR4, VAR5, VAR2);

VAR7 += VAR2;
VAR8 += VAR2;

if (VAR9 & VAR10) {
if (memcmp(VAR4, VAR5, VAR2)) {
fprintf(VAR11, "");
FUN4(VAR4, VAR2, 32, "");
FUN4(VAR5, VAR2, 32, "");
FUN5(1);
}
}

free(VAR5);
free(VAR4);
}