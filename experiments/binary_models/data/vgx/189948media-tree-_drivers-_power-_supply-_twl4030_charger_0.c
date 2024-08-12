static const struct VAR1 *
FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR6;
struct VAR1 *VAR7;
u32 VAR8;

if (!VAR5)
return NULL;
VAR7 = FUN2(VAR3, sizeof(*VAR7), VAR9);
if (!VAR7)
return VAR7;

if (FUN3(VAR5, "", &VAR8) == 0)
VAR7->VAR10 = VAR8;
if (FUN3(VAR5, "", &VAR8) == 0)
VAR7->VAR11 = VAR8;
return VAR7;
}