FUN1 (hash_table_type VAR1,  boolean VAR2)
{
unsigned VAR3;
unsigned VAR4 = 0, VAR5 = 0;

for (VAR3 = 0; VAR3 < VAR1.VAR6; VAR3++) {
VAR7 *VAR8 = VAR1.VAR9[VAR3];

if (VAR8) {
unsigned VAR10 = 1;
VAR7 *VAR11;

VAR5++;
if (!VAR2) fprintf (VAR12, "", VAR3);

for (VAR11 = VAR8->VAR13; VAR11 != NULL; VAR11 = VAR11->VAR13)
VAR10++;
if (!VAR2) fprintf (VAR12, "", VAR10);
VAR4 += VAR10;

if (!VAR2) {
for (VAR11 = VAR8; VAR11 != NULL; VAR11 = VAR11->VAR13)
fprintf (VAR12, "", VAR11->VAR14, VAR11->VAR15);
FUN2 ('', VAR12);
}
}
}

fprintf (VAR12,
"",
VAR1.VAR6,
VAR5,
100 * VAR5 / VAR1.VAR6,
VAR4,
VAR5 ? VAR4 / (double) VAR5 : 0.0);
}