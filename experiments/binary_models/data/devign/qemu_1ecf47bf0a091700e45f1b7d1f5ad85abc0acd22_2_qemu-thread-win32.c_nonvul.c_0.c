void *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    void *VAR5;
    HANDLE VAR6;
    VAR4 = VAR2->VAR4;
    if (!VAR4)
    {
        return NULL;
    }
    VAR6 = FUN2(VAR2);
    if (VAR6)
    {
        FUN3(VAR6, VAR7);
        FUN4(VAR6);
    }
    VAR5 = VAR4->VAR5;
    FUN5(&VAR4->VAR8);
    FUN6(VAR4);
    return VAR5;
}