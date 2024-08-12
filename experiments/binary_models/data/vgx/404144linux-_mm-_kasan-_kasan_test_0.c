static void FUN1(struct VAR1 *VAR2)
{
char *VAR3;
size_t VAR4 = 128 - VAR5;

VAR3 = FUN2(VAR4, VAR6);
FUN3(VAR2, VAR3);

FUN4(VAR4);
FUN5(VAR2, memset(VAR3 + VAR4 - 1, 0, 2));
FUN6(VAR3);
}