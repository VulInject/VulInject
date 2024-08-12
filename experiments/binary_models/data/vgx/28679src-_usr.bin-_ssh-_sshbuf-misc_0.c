char *
FUN1(struct VAR1 *VAR2)
{
size_t VAR3, VAR4, VAR5 = FUN2(VAR2);
const VAR6 *VAR7 = FUN3(VAR2);
char *VAR8;
const char VAR9[] = "";

if (VAR5 == 0)
return strdup("");
if (VAR10 / 2 <= VAR5 || (VAR8 = malloc(VAR5 * 2 + 1)) == NULL)
return NULL;
for (VAR3 = VAR4 = 0; VAR3 < VAR5; VAR3++) {
VAR8[VAR4++] = VAR9[(VAR7[VAR3] >> 4) & 0xf];
VAR8[VAR4++] = VAR9[VAR7[VAR3] & 0xf];
}
VAR8[VAR4] = '';
return VAR8;
}