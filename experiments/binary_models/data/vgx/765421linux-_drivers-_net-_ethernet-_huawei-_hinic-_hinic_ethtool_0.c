static void FUN1(struct VAR1 *VAR2,
u32 VAR3, VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
char *VAR8 = (char *)VAR5;
u16 VAR9, VAR10;

switch (VAR3) {
case VAR11:
memcpy(VAR5, *VAR12, sizeof(VAR12));
return;
case VAR13:
for (VAR9 = 0; VAR9 < FUN3(VAR14); VAR9++) {
memcpy(VAR8, VAR14[VAR9].VAR15,
VAR16);
VAR8 += VAR16;
}

for (VAR9 = 0; VAR9 < FUN3(VAR17); VAR9++) {
memcpy(VAR8, VAR17[VAR9].VAR15,
VAR16);
VAR8 += VAR16;
}

for (VAR9 = 0; VAR9 < VAR7->VAR18; VAR9++) {
for (VAR10 = 0; VAR10 < FUN3(VAR19); VAR10++) {
sprintf(VAR8, VAR19[VAR10].VAR15, VAR9);
VAR8 += VAR16;
}
}

for (VAR9 = 0; VAR9 < VAR7->VAR18; VAR9++) {
for (VAR10 = 0; VAR10 < FUN3(VAR20); VAR10++) {
sprintf(VAR8, VAR20[VAR10].VAR15, VAR9);
VAR8 += VAR16;
}
}

return;
default:
return;
}
}