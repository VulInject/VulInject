static int
FUN1(const VAR1 *VAR2,
const VAR3 *VAR4, const char *VAR5)
{
VAR6 *VAR7;

if (!VAR4 || !VAR5) {
return VAR2->VAR8;
}

VAR7 = FUN2(VAR4->VAR9, VAR5);
if (!VAR7) {
return VAR2->VAR8;
}

return (VAR7->VAR10[VAR2->VAR11]?
VAR7->VAR10[VAR2->VAR11] : VAR2->VAR8)
+ VAR7->VAR12[VAR2->VAR11];
}