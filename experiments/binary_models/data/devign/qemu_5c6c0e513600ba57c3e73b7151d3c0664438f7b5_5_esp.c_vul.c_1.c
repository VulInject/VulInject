static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    int VAR4;
    VAR4 = (VAR2->VAR5 < 0);
    VAR3 = VAR2->VAR6;
    if (VAR2->VAR7)
    {
        FUN2("", VAR2->VAR8, VAR3);
        VAR2->FUN3(VAR2->VAR9, &VAR2->VAR10[VAR2->VAR8], VAR3);
        VAR2->VAR5 = 0;
        VAR2->VAR8 = 0;
        VAR2->VAR7 = 0;
        FUN4(VAR2, VAR2->VAR10);
        return;
    }
    if (VAR2->VAR11 == 0)
    {
        return;
    }
    if (VAR3 > VAR2->VAR11)
    {
        VAR3 = VAR2->VAR11;
    }
    if (VAR4)
    {
        VAR2->FUN3(VAR2->VAR9, VAR2->VAR12, VAR3);
    }
    else
    {
        VAR2->FUN5(VAR2->VAR9, VAR2->VAR12, VAR3);
    }
    VAR2->VAR6 -= VAR3;
    VAR2->VAR12 += VAR3;
    VAR2->VAR11 -= VAR3;
    if (VAR4)
        VAR2->VAR5 += VAR3;
    else
        VAR2->VAR5 -= VAR3;
    if (VAR2->VAR11 == 0)
    {
        if (VAR4)
        {
            VAR2->VAR13->VAR14->FUN6(VAR2->VAR13, 0);
        }
        else
        {
            VAR2->VAR13->VAR14->FUN7(VAR2->VAR13, 0);
            if (VAR2->VAR6 == 0 && VAR2->VAR5 > 0)
            {
                FUN8(VAR2);
            }
        }
    }
    else
    {
        FUN8(VAR2);
    }
}