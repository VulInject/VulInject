static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR4;
char VAR7[40];

snprintf(VAR7, sizeof(VAR7), "", &VAR6->VAR8);
VAR2->VAR9[VAR10] = FUN2(VAR7, VAR11);

VAR2->VAR9[VAR12] = VAR13;
}