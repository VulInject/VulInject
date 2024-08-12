static void FUN1(VAR1 *VAR2, TCGMemOp VAR3, TCGv VAR4, int VAR5, int VAR6)
{
    switch (VAR3)
    {
    case VAR7:
        if (VAR6 < 0)
        {
            FUN2(VAR8, VAR4);
            return;
        }
        break;
    case VAR9:
        if (VAR6 < 0)
        {
            if (VAR2->VAR10)
            {
                VAR6 = VAR5;
            }
            else
            {
                FUN3(VAR8, VAR4);
                return;
            }
        }
        break;
    case VAR11:
        if (VAR6 < 0)
        {
            VAR6 = VAR5;
        }
        FUN4(VAR8, VAR4);
        if (!VAR2->VAR10)
        {
            return;
        }
        VAR4 = VAR8;
        break;
    default:
        FUN5();
    }
    if (VAR6 >= 0)
    {
        TCGv VAR12 = VAR13[VAR6];
        if (VAR3 == VAR7)
        {
            FUN6(VAR8, VAR4, VAR12);
        }
        else if (FUN7(VAR2))
        {
            FUN3(VAR8, VAR4);
            FUN6(VAR8, VAR8, VAR12);
        }
        else
        {
            FUN6(VAR8, VAR4, VAR12);
            FUN3(VAR8, VAR8);
        }
    }
}