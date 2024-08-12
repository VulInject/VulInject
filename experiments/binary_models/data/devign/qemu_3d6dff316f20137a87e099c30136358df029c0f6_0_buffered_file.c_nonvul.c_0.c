static void FUN1(VAR1 *VAR2)
{
    size_t VAR3 = 0;
    FUN2("", VAR2->VAR4);
    while (VAR2->VAR5 < VAR2->VAR6 && VAR3 < VAR2->VAR4)
    {
        ssize_t VAR7;
        VAR7 = FUN3(VAR2->VAR8, VAR2->VAR9 + VAR3, VAR2->VAR4 - VAR3);
        if (VAR7 == -VAR10)
        {
            FUN2("");
            VAR2->VAR11 = 1;
            break;
        }
        if (VAR7 <= 0)
        {
            FUN2("", VAR7);
            FUN4(VAR2->VAR12, VAR7);
            break;
        }
        else
        {
            FUN2("", VAR7);
            VAR3 += VAR7;
            VAR2->VAR5 += VAR7;
        }
    }
    FUN2("", VAR3, VAR2->VAR4);
    memmove(VAR2->VAR9, VAR2->VAR9 + VAR3, VAR2->VAR4 - VAR3);
    VAR2->VAR4 -= VAR3;
}