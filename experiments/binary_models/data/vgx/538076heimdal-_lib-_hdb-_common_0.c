static VAR1
FUN1(krb5_context VAR2,
const char *VAR3,
krb5uint32 VAR4,
krb5int32 VAR5,
const VAR6 *VAR7,
VAR6 *VAR8)

{
krb5_error_code VAR9 = 0;
size_t VAR10;
Key VAR11;

VAR8->VAR12 = 0;
VAR8->VAR13 = 0;


for (VAR10 = 0; VAR9 == 0 && VAR10 < VAR7->VAR12; VAR10++) {
if (VAR5 != VAR14 && VAR5 != VAR7->VAR13[VAR10].VAR15.VAR16)
continue;
VAR9 = FUN2(VAR2, VAR3, VAR4, &VAR7->VAR13[0].VAR15,
VAR7->VAR13[VAR10].VAR15.VAR16, &VAR11);
if (VAR9)
break;
VAR9 = FUN3(VAR8, &VAR11);
FUN4(&VAR11);

}

if (VAR9)
FUN5(VAR8);
return VAR9;
}