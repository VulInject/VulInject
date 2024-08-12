VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    const VAR4 *VAR5;
    VAR5 = FUN2(VAR2);
    if (!VAR5)
        return NULL;
    VAR3 = FUN3(sizeof(VAR1));
    VAR3->VAR2 = VAR5;
    FUN4(VAR3);
    VAR3->VAR6 = VAR2;
    FUN5();
    FUN6(VAR3);
    FUN7(VAR3);
    return VAR3;
}