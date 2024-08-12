static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    VAR3 = VAR2->VAR4;
    if (VAR3 > VAR2->VAR5)
        VAR3 = VAR2->VAR5;
    if (VAR2->VAR6 == VAR7)
    {
        memcpy(VAR2->VAR8, VAR2->VAR9, VAR3);
    }
    else
    {
        memcpy(VAR2->VAR9, VAR2->VAR8, VAR3);
    }
    VAR2->VAR4 -= VAR3;
    VAR2->VAR5 -= VAR3;
    VAR2->VAR8 += VAR3;
    VAR2->VAR9 += VAR3;
    VAR2->VAR10 -= VAR3;
    if (VAR2->VAR5 == 0 || VAR2->VAR10 == 0)
    {
        if (VAR2->VAR6 == VAR7)
        {
            VAR2->VAR11->VAR12->FUN2(VAR2->VAR11, VAR2->VAR13);
        }
        else if (VAR2->VAR6 == VAR14)
        {
            VAR2->VAR11->VAR12->FUN3(VAR2->VAR11, VAR2->VAR13);
        }
    }
}