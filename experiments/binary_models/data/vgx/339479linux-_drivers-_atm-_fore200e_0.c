static void
FUN1(struct VAR1* VAR1)
{
int VAR2, VAR3, VAR4;
struct VAR5* VAR5;

for (VAR2 = 0; VAR2 < VAR6; VAR2++) {
for (VAR3 = 0; VAR3 < VAR7; VAR3++) {

if ((VAR5 = VAR1->VAR8[ VAR2 ][ VAR3 ].VAR5) != NULL) {

for (VAR4 = 0; VAR4 < VAR9[ VAR2 ][ VAR3 ]; VAR4++) {

struct VAR10* VAR11 = &VAR5[ VAR4 ].VAR11;

if (VAR11->VAR12 != NULL)
FUN2(VAR1, VAR11);
}
}
}
}
}