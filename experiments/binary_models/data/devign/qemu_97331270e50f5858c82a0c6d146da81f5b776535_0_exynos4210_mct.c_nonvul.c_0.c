static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    int VAR4;
    uint64_t VAR5;
    FUN2("");
    VAR3->VAR6.VAR7.VAR8 += VAR3->VAR6.VAR9;
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        if (VAR3->VAR6.VAR7.VAR8 == VAR3->VAR6.VAR7.VAR11[VAR4])
        {
            VAR3->VAR6.VAR7.VAR12 |= FUN3(VAR4);
            if (VAR3->VAR6.VAR7.VAR13 & FUN4(VAR4))
            {
                VAR3->VAR6.VAR7.VAR11[VAR4] += VAR3->VAR6.VAR7.VAR14[VAR4];
            }
            FUN5(&VAR3->VAR6, VAR4);
        }
    }
    VAR3->VAR6.VAR15 = FUN6(VAR3);
    VAR5 = FUN7(VAR3, VAR3->VAR6.VAR15);
    if (VAR5 > VAR16 || !VAR5)
    {
        VAR5 = VAR16;
    }
    FUN8(&VAR3->VAR6, VAR5);
    FUN9(&VAR3->VAR6);
}