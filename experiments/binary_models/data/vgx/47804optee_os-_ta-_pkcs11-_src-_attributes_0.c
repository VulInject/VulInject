enum VAR1 FUN1(struct VAR2 **VAR3,
struct VAR2 *VAR4)
{
size_t VAR5 = VAR4->VAR6;
unsigned char *VAR7 = VAR4->VAR8;
enum pkcs11_rc VAR9 = VAR10;

if (!VAR4->VAR6)
return VAR10;

for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++) {
struct pkcs11_attribute_head VAR11 = { };
void *VAR12 = NULL;
uint32_t VAR13 = 0;

FUN2(&VAR11, VAR7, sizeof(VAR11));

VAR9 = FUN3(*VAR3, VAR11.VAR14, &VAR12, &VAR13);
if (VAR9 == VAR15) {
VAR9 = FUN4(VAR3, VAR11.VAR14,
VAR7 + sizeof(VAR11),
VAR11.VAR13);
if (VAR9)
return VAR9;
} else {
if (VAR9 || !VAR12 || VAR13 != VAR11.VAR13 ||
FUN5(VAR7 + sizeof(VAR11), VAR12,
VAR13))
return VAR16;
}

VAR7 += sizeof(VAR11) + VAR11.VAR13;
}

return VAR10;
}