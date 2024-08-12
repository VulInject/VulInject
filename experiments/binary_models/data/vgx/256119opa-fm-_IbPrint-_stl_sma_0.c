void FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, uint16 VAR6, int VAR7)
{
uint16 VAR8;
char VAR9[81];
int VAR10=0;
uint16 VAR11 = VAR6*VAR12;
if (VAR7) {
for (VAR8 = 0; VAR8 < VAR12; VAR8++) {
snprintf(VAR9, sizeof(VAR9), "", VAR8);
FUN2(VAR2, VAR3, VAR9, VAR5->VAR13[VAR8].VAR14);
snprintf(VAR9, sizeof(VAR9), "", VAR8);
FUN2(VAR2, VAR3, VAR9, VAR5->VAR13[VAR8].VAR15.VAR16);
snprintf(VAR9, sizeof(VAR9), "", VAR8);
FUN2(VAR2, VAR3, VAR9, VAR5->VAR13[VAR8].VAR15.VAR17);
}
}
else {


for (VAR8=0; VAR8<VAR12; ++VAR8)
{
if (VAR8%8 == 0) {
if (VAR8)
FUN3(VAR2, "", VAR3, "", VAR9);
VAR10=sprintf(VAR9, "", VAR8+VAR11, VAR8+7+VAR11);
}
VAR10+=sprintf(&VAR9[VAR10], "", VAR5->VAR13[VAR8].VAR14);
}
FUN3(VAR2, "", VAR3, "", VAR9);
}
}