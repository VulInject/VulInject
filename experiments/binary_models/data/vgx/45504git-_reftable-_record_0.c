static void FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
FUN2(VAR3->VAR4);
FUN2(VAR3->VAR5);
memset(VAR3, 0, sizeof(struct VAR2));
}