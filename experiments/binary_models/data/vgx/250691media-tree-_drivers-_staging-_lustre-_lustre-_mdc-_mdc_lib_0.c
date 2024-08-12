static void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const char *VAR5, size_t VAR6)
{
size_t VAR7;
size_t VAR8;
char *VAR9;

VAR9 = FUN2(&VAR2->VAR10, VAR4);
VAR7 = FUN3(&VAR2->VAR10, VAR4, VAR11);

FUN4(VAR5 && VAR6 && VAR9 && VAR7 == VAR6 + 1);

VAR8 = FUN5(VAR9, VAR5, VAR7);

FUN4(VAR8 == VAR6 && FUN6(VAR9, VAR8));
}