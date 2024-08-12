FUN1(VAR1);
FUN2(VAR2);


void FUN3(struct VAR3 *VAR4,
struct VAR5 *VAR6, char *VAR7)
{
char VAR8[32];


snprintf(VAR8, sizeof(VAR8), "", VAR4->VAR9, VAR7);
FUN4(VAR10, VAR8, VAR11,
16, 1, VAR6->VAR12, VAR6->VAR13, true);
}