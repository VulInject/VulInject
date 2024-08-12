void FUN1(const char *VAR1, VAR2 *VAR3)
{
    FUN2();
    VAR3->VAR1 = FUN3(VAR1);
    memset(&VAR3->VAR4, 0, sizeof(VAR3->VAR4));
    FUN4(&VAR5.VAR6, VAR3, VAR4);
}