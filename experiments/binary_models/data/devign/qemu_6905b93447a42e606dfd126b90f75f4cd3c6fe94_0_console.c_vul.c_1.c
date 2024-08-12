void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8 = VAR2->VAR4;
    VAR9 *VAR10;
    VAR2->VAR4 = VAR4;
    FUN2(VAR10, &VAR6->VAR11, VAR12)
    {
        if (VAR2 != (VAR10->VAR2 ? VAR10->VAR2 : VAR13))
        {
            continue;
        }
        if (VAR10->VAR14->VAR15)
        {
            VAR10->VAR14->FUN3(VAR10, VAR4);
        }
    }
    FUN4(VAR8);