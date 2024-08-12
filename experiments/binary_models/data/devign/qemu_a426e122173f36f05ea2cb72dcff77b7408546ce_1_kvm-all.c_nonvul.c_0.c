int FUN1(VAR1 *VAR2, int VAR3, ...)
{
    int VAR4;
    void *VAR5;
    va_list VAR6;
    FUN2(VAR6, VAR3);
    VAR5 = FUN3(VAR6, void *);
    FUN4(VAR6);
    VAR4 = FUN5(VAR2->VAR7, VAR3, VAR5);
    if (VAR4 == -1)
    {
        VAR4 = -VAR8;
    }
    return VAR4;
}