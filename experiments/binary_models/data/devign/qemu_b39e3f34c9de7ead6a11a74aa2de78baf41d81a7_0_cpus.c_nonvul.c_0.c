static void FUN1(void)
{
    unsigned VAR1;
    int64_t VAR2;
    do
    {
        VAR1 = FUN2(&VAR3.VAR4);
        VAR2 = VAR3.VAR5;
    } while (FUN3(&VAR3.VAR4, VAR1));
    if (VAR2 == -1)
    {
        return;
    }
    FUN4(&VAR3.VAR4);
    if (FUN5())
    {
        int64_t VAR6 = FUN6(VAR7, FUN7());
        int64_t VAR8;
        VAR8 = VAR6 - VAR3.VAR5;
        if (VAR9 == 2)
        {
            int64_t VAR10 = FUN8();
            int64_t VAR11 = VAR6 - VAR10;
            VAR8 = FUN9(VAR8, VAR11);
        }
        VAR3.VAR12 += VAR8;
    }
    VAR3.VAR5 = -1;
    FUN10(&VAR3.VAR4);
    if (FUN11(VAR13))
    {
        FUN12(VAR13);
    }
}