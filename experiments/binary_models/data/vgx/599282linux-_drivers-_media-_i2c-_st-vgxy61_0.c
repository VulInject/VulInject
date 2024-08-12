static int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3;

for (VAR3 = 0; VAR3 < FUN2(VAR4); VAR3++)
VAR2->VAR5[VAR3].VAR6 = VAR4[VAR3];

return FUN3(&VAR2->VAR7->VAR8,
FUN2(VAR4),
VAR2->VAR5);
}