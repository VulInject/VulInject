static void FUN1(void *VAR1, const void *VAR2, size_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    size_t VAR6;
    int VAR7;
    if (!FUN2(VAR5))
    {
        return;
    }
    VAR5->VAR8 -= VAR3;
    VAR7 = 0;
    while (VAR7 < VAR3)
    {
        if (!FUN3(VAR5))
        {
            break;
        }
        VAR6 = FUN4(VAR5->VAR9.VAR10, VAR5->VAR9.VAR11, 0, VAR2 + VAR7, VAR3 - VAR7);
        VAR7 += VAR6;
        FUN5(VAR5->VAR12, &VAR5->VAR9, VAR6);
        VAR5->VAR13 = false;
    }
    FUN6(&VAR5->VAR14, VAR5->VAR12);
    FUN7(VAR5);
}