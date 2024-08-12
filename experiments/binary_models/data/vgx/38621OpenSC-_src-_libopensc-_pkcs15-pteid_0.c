int FUN1(const VAR1 * VAR2, size_t VAR3, struct VAR4 *VAR5)
{
const VAR1 *VAR6 = VAR2;
size_t VAR7 = VAR3;
int VAR8, VAR9, VAR10;
sc_path_t VAR11;
struct sc_asn1_entry VAR12[] = {
{"", VAR13, VAR14 | VAR15, 0,
&VAR11, NULL},
{NULL, 0, 0, 0, NULL, NULL}
};
struct sc_asn1_entry VAR16[10];

sc_path_t VAR17;

FUN2("", &VAR17);

FUN3(VAR18, VAR16);
for (VAR9 = 0; VAR16[VAR9].VAR19 != NULL; VAR9++)
FUN4(VAR16 + VAR9, VAR12, NULL, 0);
while (VAR7 > 0) {
VAR8 = FUN5(VAR5->VAR20->VAR21, VAR16, VAR6, VAR7,
&VAR6, &VAR7);
if (VAR8 == VAR22)
break;
if (VAR8 < 0)
return VAR8;
VAR10 = VAR8;
VAR8 = FUN6(&VAR17, &VAR11);
if (VAR8 < 0)
return VAR8;
VAR8 = FUN7(VAR5, VAR23[VAR10], &VAR11);
if (VAR8)
return VAR8;
}
return 0;
}