static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    VAR3 = FUN2();
    VAR5 = FUN3(sizeof(VAR4));
    VAR3->VAR6 = VAR5;
    VAR3->VAR7 = VAR8;
    VAR3->VAR9 = VAR10;
    if (FUN4(VAR3, VAR2) < 0)
    {
        FUN5(VAR5);
        FUN5(VAR3);
        return NULL;
    }
    return VAR3;
}