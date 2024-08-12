static void FUN1(void *VAR1, int VAR2)
{
    struct VAR3 *VAR4 = (struct VAR3 *)VAR1;
    FUN2(VAR4);
    VAR4->VAR5 = VAR2;
    VAR4->FUN3(VAR4->VAR1, VAR2 >> 2, VAR4->VAR6 >> 2);
}