static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == 0)
    {
        goto VAR4;
    }
send:
    VAR2->VAR5 += FUN2(VAR2->VAR6, VAR2->VAR7 + VAR2->VAR5, VAR2->VAR3 - VAR2->VAR5);
    if (VAR2->VAR5 < VAR2->VAR3)
    {
        FUN3(VAR2->VAR8, FUN4(VAR9) + 10000000);
    }
    else
    {
        VAR2->VAR3 = 0;
        VAR2->VAR5 = 0;
        if (!VAR2->VAR10)
        {
            VAR2->VAR11 = true;
        }
        else
        {
            VAR2->VAR10 = false;
        }
    VAR4:
        if (VAR2->VAR12 && VAR2->VAR13)
        {
            VAR2->VAR7[0] = VAR14;
            VAR2->VAR7[1] = VAR15;
            VAR2->VAR3 = 2;
            VAR2->VAR5 = 0;
            VAR2->VAR13 = false;
            VAR2->VAR10 = true;
            goto send;
        }
        if (VAR2->VAR11)
        {
            FUN3(VAR2->VAR8, FUN4(VAR9) + 4000000000ULL);
        }
    }
    return;
}