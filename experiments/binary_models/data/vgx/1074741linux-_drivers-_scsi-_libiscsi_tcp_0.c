}
FUN1(VAR1);

static inline int
FUN2(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
if (!VAR5->VAR6)
return 1;

if (memcmp(VAR5->VAR7, VAR5->VAR8,
VAR5->VAR6)) {
FUN3(VAR3->VAR9, "");
return 0;
}

return 1;
}