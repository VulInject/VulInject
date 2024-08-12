static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR1);
    size_t VAR7 = 0;
    while (VAR4 > 0 && VAR6->VAR8.VAR9)
    {
        VAR10 *VAR11 = VAR6->VAR8.VAR9->VAR12;
        int VAR13 = FUN3(VAR4, VAR11->VAR4 - VAR11->VAR14);
        memcpy(VAR11->VAR12 + VAR11->VAR14, VAR3 + VAR7, VAR13);
        VAR7 += VAR13;
        VAR11->VAR14 += VAR13;
        VAR4 -= VAR13;
        if (VAR11->VAR14 == VAR11->VAR4)
        {
            VAR11->FUN4(VAR11->VAR1, VAR11->VAR12, VAR11->VAR4);
            FUN5(&VAR6->VAR8, VAR11);
        }
    }
}