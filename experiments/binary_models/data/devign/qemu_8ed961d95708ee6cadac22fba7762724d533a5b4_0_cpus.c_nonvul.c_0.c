static void FUN1(void *VAR1)
{
    if (VAR2 == -1)
    {
        return;
    }
    if (FUN2())
    {
        int64_t VAR3 = FUN3(VAR4);
        int64_t VAR5;
        VAR5 = VAR3 - VAR2;
        if (VAR6 == 2)
        {
            int64_t VAR7 = FUN4();
            int64_t VAR8 = FUN5();
            int64_t VAR9 = VAR7 - VAR8;
            VAR5 = FUN6(VAR5, VAR9);
        }
        VAR10 += VAR5;
    }
    VAR2 = -1;
    if (FUN7(VAR11))
    {
        FUN8(VAR11);
    }
}