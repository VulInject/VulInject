static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = FUN2(VAR1);
    while (VAR3->VAR4 && FUN3(VAR3->VAR5, VAR6, VAR3))
    {
        size_t VAR7 = FUN4(VAR3->VAR5, (void *)VAR3->VAR8 + VAR9 - VAR3->VAR4, VAR3->VAR4);
        VAR3->VAR4 -= VAR7;
    }
    while (VAR3->VAR10 && FUN3(VAR3->VAR11, VAR6, VAR3))
    {
        size_t VAR7 = FUN4(VAR3->VAR11, (void *)VAR3->VAR12 + VAR3->VAR13, VAR3->VAR10);
        VAR3->VAR10 -= VAR7;
        VAR3->VAR13 += VAR7;
        if (!VAR3->VAR10)
        {
            VAR3->VAR14[VAR15] |= VAR16;
        }
    }
    FUN5(VAR3);
}