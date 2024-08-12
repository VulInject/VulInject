static void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = !VAR2->VAR3;
    if (!VAR2->VAR3)
    {
        if (VAR2->VAR4 != FUN2(VAR5))
        {
            VAR2->VAR6 = FUN3(VAR2);
        }
        VAR2->VAR7 += (FUN4() - VAR2->VAR8) / 1000000.0;
        VAR2->VAR8 = FUN4();
    }
}