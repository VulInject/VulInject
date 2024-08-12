static int FUN1(
const struct VAR1 *VAR2)
{
int VAR3, VAR4;

for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR5); VAR3++) {
for (VAR4 = VAR3 + 1; VAR4 < FUN2(VAR2->VAR5); VAR4++) {
if (VAR2->VAR5[VAR3].VAR6 > VAR2->VAR5[VAR4].VAR7 &&
VAR2->VAR5[VAR3].VAR7 < VAR2->VAR5[VAR4].VAR6) {
FUN3(VAR2->VAR8,
"",
VAR3, VAR4);
return -VAR9;
}
}
}

return 0;
}