FUN1 (struct VAR1 *VAR2,
VAR3 *VAR4,
void *VAR5)
{
struct VAR6 *VAR7, *VAR8;

if (!VAR2)
return;

VAR7 = VAR2->VAR9;
while (VAR7)
{
VAR8 = VAR7->VAR10;

(void) (VAR4) (VAR5,
VAR2,
VAR7->VAR11,
VAR7->VAR12);

VAR7 = VAR8;
}
}