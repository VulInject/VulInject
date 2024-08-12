VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    int64_t VAR6;
    FUN2(VAR3->VAR7);
    FUN2(!FUN3(VAR3));
    VAR6 = VAR3->VAR8.VAR9++;
    if (VAR3->VAR8.VAR9 < 0)
    {
        VAR3->VAR8.VAR9 = 0;
    }
    if (!FUN4(&VAR3->VAR8, VAR3->VAR7))
    {
        FUN5(VAR5, "");
    }
    return VAR6;
}