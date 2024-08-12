static VAR1 FUN1(struct VAR2 *VAR3, const VAR4 *VAR5,
VAR6 *VAR7, struct VAR8 *VAR9)
{
TEE_Result VAR10;
size_t VAR11;


for (VAR11 = 0;; VAR11++) {
struct tadb_entry VAR12;

VAR10 = FUN2(VAR3, VAR11, &VAR12);
if (VAR10) {
if (VAR10 == VAR13)
break;
return VAR10;
}

if (!memcmp(&VAR12.VAR14.VAR5, VAR5, sizeof(*VAR5))) {
if (VAR9)
*VAR9 = VAR12;
break;
}
}

*VAR7 = VAR11;
return VAR10;
}