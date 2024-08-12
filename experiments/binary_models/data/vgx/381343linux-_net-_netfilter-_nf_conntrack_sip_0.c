static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4,
const char **VAR5, unsigned int *VAR6)
{
enum ip_conntrack_info VAR7;
struct VAR8 *VAR9 = FUN2(VAR2, &VAR7);
unsigned int VAR10, VAR11, VAR12;
unsigned int VAR13, VAR14, VAR15;

if (*VAR6 < strlen(""))
return VAR16;
VAR13 = FUN3(*VAR5 + strlen(""), NULL, 10);
if (!VAR13) {
FUN4(VAR2, VAR9, "");
return VAR17;
}

if (FUN5(VAR9, *VAR5, 0, *VAR6, VAR18,
&VAR10, &VAR11) <= 0) {
FUN4(VAR2, VAR9, "");
return VAR17;
}
VAR14 = FUN3(*VAR5 + VAR10, NULL, 10);
if (!VAR14 && *(*VAR5 + VAR10) != '') {
FUN4(VAR2, VAR9, "");
return VAR17;
}
VAR12 = VAR10 + VAR11 + 1;

for (VAR15 = 0; VAR15 < FUN6(VAR19); VAR15++) {
const struct VAR20 *VAR21;

VAR21 = &VAR19[VAR15];
if (VAR21->VAR22 == NULL)
continue;
if (*VAR6 < VAR12 + VAR21->VAR23 ||
FUN7(*VAR5 + VAR12, VAR21->VAR24, VAR21->VAR23))
continue;
return VAR21->FUN8(VAR2, VAR3, VAR4, VAR5, VAR6,
VAR14, VAR13);
}
return VAR16;
}