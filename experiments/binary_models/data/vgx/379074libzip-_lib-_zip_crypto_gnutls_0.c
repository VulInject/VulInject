VAR1 *
FUN1(const VAR2 *VAR3, zip_uint16_t VAR4, VAR5 *VAR6) {
VAR1 *VAR7;

if ((VAR7 = (VAR1 *)malloc(sizeof(*VAR7))) == NULL) {
FUN2(VAR6, VAR8, 0);
return NULL;
}

VAR7->VAR4 = VAR4;

switch (VAR7->VAR4) {
case 128:
FUN3(&VAR7->VAR9.VAR10, VAR3);
break;
case 192:
FUN4(&VAR7->VAR9.VAR11, VAR3);
break;
case 256:
FUN5(&VAR7->VAR9.VAR12, VAR3);
break;
default:
FUN2(VAR6, VAR13, 0);
free(VAR7);
return NULL;
}

return VAR7;
}