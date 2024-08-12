static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
cap_t VAR7;
ssize_t VAR8;

VAR8 = FUN2(FUN3(VAR3), VAR9, &VAR7,
"",
sizeof(VAR7.VAR10));
if (VAR8)
return 0;

VAR8 = sprintf(VAR6, "", VAR7.VAR10.VAR11);
return VAR8;
}