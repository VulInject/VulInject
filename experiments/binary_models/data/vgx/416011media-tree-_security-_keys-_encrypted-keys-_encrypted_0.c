static int FUN1(VAR1 *VAR2, enum derived_key_type VAR3,
const VAR1 *VAR4, size_t VAR5)
{
VAR1 *VAR6;
unsigned int VAR7;
int VAR8;

VAR7 = strlen("") + 1 + VAR5;
if (VAR7 < VAR9)
VAR7 = VAR9;

VAR6 = FUN2(VAR7, VAR10);
if (!VAR6) {
FUN3("");
return -VAR11;
}
if (VAR3)
strcpy(VAR6, "");
else
strcpy(VAR6, "");

memcpy(VAR6 + strlen(VAR6) + 1, VAR4,
VAR5);
VAR8 = FUN4(VAR2, VAR6, VAR7);
FUN5(VAR6);
return VAR8;
}