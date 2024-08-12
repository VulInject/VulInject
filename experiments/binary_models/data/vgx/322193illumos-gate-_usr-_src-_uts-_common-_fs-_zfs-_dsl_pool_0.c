int
FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
uint64_t VAR6;
int VAR7;

VAR7 = FUN2(VAR2->VAR8,
FUN3(VAR2->VAR9)->VAR10,
VAR3, sizeof (VAR6), 1, &VAR6);
if (VAR7)
return (VAR7);

return (FUN4(VAR2, VAR6, VAR3, VAR2, VAR5));
}