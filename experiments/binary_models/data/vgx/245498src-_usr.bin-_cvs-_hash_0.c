struct VAR1 *
FUN1(struct VAR2 *VAR3, const char *VAR4, size_t VAR5)
{
uint32_t VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;

VAR6 = FUN2(VAR4, VAR5);
VAR8 = &(VAR3->VAR11[(VAR6 & (VAR3->VAR12 - 1))]);

FUN3(VAR10, VAR8, VAR13) {
if (!strcmp(VAR10->VAR14.VAR15, VAR4))
return (&(VAR10->VAR14));
}

return (NULL);
}