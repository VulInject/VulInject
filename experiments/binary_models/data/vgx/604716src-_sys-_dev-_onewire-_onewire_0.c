void
FUN1(void *VAR1, const void *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR1;
struct VAR6 *VAR7 = VAR5->VAR8;
const VAR9 *VAR10 = VAR2;

if (VAR7->VAR11 != NULL)
return (VAR7->FUN2(VAR7->VAR12, VAR2, VAR3));

while (VAR3--)
FUN3(VAR1, *VAR10++);
}