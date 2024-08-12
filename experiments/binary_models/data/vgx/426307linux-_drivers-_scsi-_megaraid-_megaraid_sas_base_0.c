static inline VAR1
FUN1(void VAR2 *VAR3, char *VAR4)
{
unsigned int VAR5, VAR6 = 256;
int VAR7 = 0;
char *VAR8 = (char *)VAR4;
u32 VAR2 *VAR9 = (u32 VAR2 *)VAR3;

for (VAR5 = 0; VAR5 < VAR6 / sizeof(VAR10); VAR5++) {
VAR7 += FUN2(VAR8 + VAR7,
VAR11 - VAR7,
"", (VAR5 * 4),
FUN3(&VAR9[VAR5]));
}
return VAR7;
}