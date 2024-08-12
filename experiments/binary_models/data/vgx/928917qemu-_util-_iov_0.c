unsigned FUN1(struct VAR1 *VAR2, unsigned int VAR3,
const struct VAR1 *VAR4, unsigned int VAR5,
size_t VAR6, size_t VAR7)
{
size_t VAR8;
unsigned int VAR9, VAR10;
for (VAR9 = 0, VAR10 = 0;
VAR9 < VAR5 && VAR10 < VAR3 && (VAR6 || VAR7); VAR9++) {
if (VAR6 >= VAR4[VAR9].VAR11) {
VAR6 -= VAR4[VAR9].VAR11;
continue;
}
VAR8 = FUN2(VAR7, VAR4[VAR9].VAR11 - VAR6);

VAR2[VAR10].VAR12 = VAR4[VAR9].VAR12 + VAR6;
VAR2[VAR10].VAR11 = VAR8;
VAR10++;
VAR7 -= VAR8;
VAR6 = 0;
}
assert(VAR6 == 0);
return VAR10;
}