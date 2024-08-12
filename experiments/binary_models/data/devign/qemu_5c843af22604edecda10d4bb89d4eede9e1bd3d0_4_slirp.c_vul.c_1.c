int FUN1(const char *VAR1)
{
    struct VAR2 *VAR3;
    if (FUN2(&VAR4))
    {
        VAR3 = FUN3(sizeof(*VAR3));
        FUN4(VAR3->VAR5, sizeof(VAR3->VAR5), VAR1);
        VAR3->VAR6 = VAR7 | VAR8;
        VAR3->VAR9 = VAR10;
        VAR10 = VAR3;
        return 0;
    }
    return FUN5(FUN6(&VAR4), VAR1, 1);
}