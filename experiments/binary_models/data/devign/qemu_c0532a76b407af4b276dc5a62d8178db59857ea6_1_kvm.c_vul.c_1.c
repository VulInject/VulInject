static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR4 = FUN2(VAR3->VAR5, VAR3->VAR6);
    if (VAR4 < 0)
        FUN3("");
}