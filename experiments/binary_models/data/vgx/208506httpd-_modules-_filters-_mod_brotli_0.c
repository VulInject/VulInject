static VAR1 FUN1(VAR2 *VAR3,
const void *VAR4,
apr_size_t VAR5,
VAR6 *VAR7)
{
const VAR8 *VAR9 = VAR4;
apr_size_t VAR10 = VAR5;

while (VAR10 > 0) {
VAR8 *VAR11 = NULL;
apr_size_t VAR12 = 0;

if (!FUN2(VAR3->VAR13,
VAR14,
&VAR10, &VAR9,
&VAR12, &VAR11, NULL)) {
FUN3(VAR15, VAR16, 0, VAR7->VAR17, FUN4(03459)
"");
return VAR18;
}

if (FUN5(VAR3->VAR13)) {
apr_size_t VAR19 = 0;
const VAR8 *VAR20;
apr_status_t VAR21;
VAR22 *VAR23;


VAR20 = FUN6(VAR3->VAR13, &VAR19);
VAR3->VAR24 += VAR19;

VAR23 = FUN7((const char *)VAR20, VAR19,
VAR3->VAR25->VAR26);
FUN8(VAR3->VAR25, VAR23);

VAR21 = FUN9(VAR7->VAR27, VAR3->VAR25);
FUN10(VAR3->VAR25);
if (VAR21 != VAR28) {
return VAR21;
}
}
}

VAR3->VAR29 += VAR5;
return VAR28;
}