void FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;

for (VAR3 = 0; VAR3 < FUN2(VAR2); VAR3++) {
VAR5 = VAR2->VAR6[VAR3];
if (VAR5)
FUN3(VAR5);
}
}