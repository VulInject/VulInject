static struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct VAR1 *VAR6;

FUN2(VAR3, VAR5) {
if (!VAR5->connect)
continue;

if (VAR5->VAR7->VAR8 == VAR9)
return (struct VAR1 *)VAR5->VAR7->VAR10;

VAR6 = FUN1(VAR5->VAR7);
if (VAR6)
return VAR6;
}

return NULL;
}