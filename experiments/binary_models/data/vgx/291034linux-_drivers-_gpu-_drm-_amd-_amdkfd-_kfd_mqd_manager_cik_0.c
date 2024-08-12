static void FUN1(struct VAR1 *VAR2, void **VAR3,
struct VAR4 *VAR5, VAR6 *VAR7,
struct VAR8 *VAR9)
{
struct VAR10 *VAR11;

VAR11 = (struct VAR10 *) VAR5->VAR12;

memset(VAR11, 0, sizeof(struct VAR10));

*VAR3 = VAR11;
if (VAR7)
*VAR7 = VAR5->VAR13;

VAR2->FUN2(VAR2, VAR11, VAR9, NULL);
}