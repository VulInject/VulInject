static void FUN1(struct VAR1 *VAR2);
static int FUN2(struct VAR1 *VAR2);


static int FUN3(const void *VAR3, const void *VAR4)
{
const struct VAR5 *VAR6 = (const struct VAR5 *) VAR3,
*VAR7 = (const struct VAR5 *) VAR4;
return strcmp(VAR6->VAR8, VAR7->VAR8);
}