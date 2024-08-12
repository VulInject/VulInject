static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR5;
    const struct VAR6 *VAR7 = VAR5->VAR8;
    FUN2(FUN3(VAR3));
    if (VAR7)
    {
        if (!VAR7->VAR9)
        {
            VAR5->VAR10[15] = VAR7->VAR11 & 0xfffffffe;
            VAR5->VAR12 = VAR7->VAR11 & 1;
        }
        else
        {
            if (FUN3(VAR3) == VAR13)
            {
                if (VAR5->VAR14)
                {
                    VAR5->VAR15 = VAR7->VAR16;
                }
                else
                {
                    VAR5->VAR10[15] = VAR7->VAR16;
                }
                if (!VAR7->VAR17)
                {
                    if (VAR18)
                    {
                        FUN4(VAR7);
                    }
                    else
                    {
                        FUN5(VAR7);
                    }
                }
            }
            else
            {
                VAR7->FUN6(VAR3, VAR7);
            }
        }
    }
}