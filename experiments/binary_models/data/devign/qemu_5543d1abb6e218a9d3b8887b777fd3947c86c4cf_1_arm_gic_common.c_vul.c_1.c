static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = VAR6->VAR7;
    if (VAR6->VAR8 > VAR9)
    {
        FUN3(VAR4, "", VAR6->VAR8, VAR9);
        VAR6->VAR7 += VAR10;
        if (VAR6->VAR7 > VAR11)
        {
            FUN3(VAR4, "", VAR7, VAR11);
            if (VAR6->VAR7 < 32 || (VAR6->VAR7 % 32))
            {
                FUN3(VAR4, "", VAR7)