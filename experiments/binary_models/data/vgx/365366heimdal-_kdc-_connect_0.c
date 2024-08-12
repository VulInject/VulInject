static int
FUN1(krb5_context VAR1,
VAR2 *VAR3,
struct VAR4 **VAR5)
{
krb5_error_code VAR6;
size_t VAR7, VAR8;
struct VAR4 *VAR9;
int VAR10 = 0;
krb5_addresses VAR11;

if (VAR12.VAR13) {
VAR11 = VAR12;
} else {
VAR6 = FUN2 (VAR1, &VAR11);
if (VAR6)
FUN3 (VAR1, 1, VAR6, "");
}
FUN4(VAR1, VAR3, VAR14);
VAR9 = malloc(VAR11.VAR13 * VAR15 * sizeof(*VAR9));
if (VAR9 == NULL)
FUN5(VAR1, 1, "",
(unsigned long)VAR15 * sizeof(*VAR9));

for (VAR7 = 0; VAR7 < VAR15; VAR7++){
for (VAR8 = 0; VAR8 < VAR11.VAR13; ++VAR8) {
FUN6(VAR1, VAR3, &VAR9[VAR10], &VAR11.VAR16[VAR8],
VAR17[VAR7].VAR18, VAR17[VAR7].VAR19, VAR17[VAR7].VAR20);
if(VAR9[VAR10].VAR21 != VAR22){
char VAR23[80];
size_t VAR13;

FUN7 (&VAR11.VAR16[VAR8], VAR23,
sizeof(VAR23), &VAR13);

FUN8(VAR1, VAR3, 3, "",
VAR23,
FUN9(VAR17[VAR7].VAR20),
(VAR17[VAR7].VAR19 == VAR24) ? "" : "");

VAR10++;
}
}
}
FUN10 (VAR1, &VAR11);
VAR9 = realloc(VAR9, VAR10 * sizeof(*VAR9));
if (VAR9 == NULL && VAR10 != 0)
FUN5(VAR1, 1, "",
(unsigned long)VAR10 * sizeof(*VAR9));
FUN11 (VAR9, VAR10);
*VAR5 = VAR9;
return VAR10;
}