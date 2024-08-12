static VAR1 FUN1(VAR2 *VAR3)
{
    size_t VAR4 = 0;
    ssize_t VAR5 = 0;
    FUN2("", VAR3->VAR6);
    while (VAR3->VAR7 < VAR3->VAR8 && VAR4 < VAR3->VAR6)
    {
        size_t VAR9 = FUN3(VAR3->VAR6 - VAR4, VAR3->VAR8 - VAR3->VAR7);
        VAR5 = FUN4(VAR3->VAR10, VAR3->VAR11 + VAR4, VAR9);
        if (VAR5 <= 0)
        {
            FUN2("", VAR5);
            break;
        }
        else
        {
            FUN2("", VAR5);
            VAR4 += VAR5;
            VAR3->VAR7 += VAR5;
        }
    }
    FUN2("", VAR4, VAR3->VAR6);
    memmove(VAR3->VAR11, VAR3->VAR11 + VAR4, VAR3->VAR6 - VAR4);
    VAR3->VAR6 -= VAR4;
    if (VAR5 < 0)
    {
        return VAR5;
    }
    return VAR4;
}