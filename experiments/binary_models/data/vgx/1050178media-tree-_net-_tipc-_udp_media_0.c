static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
memset(VAR2, 0, sizeof(struct VAR1));
VAR2->VAR5 = VAR6;
memcpy(VAR2->VAR7, VAR4, sizeof(struct VAR3));

if (FUN2(VAR4))
VAR2->VAR8 = VAR9;
}