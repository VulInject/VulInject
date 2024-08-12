static void FUN1(VAR1 *VAR2)
{
    while (VAR2->VAR3 > 0)
    {
        VAR4 *VAR5 = &VAR2->VAR6[--VAR2->VAR3];
        FUN2(VAR5->VAR7);
    }
    FUN3(VAR2->VAR6);
    FUN3(VAR2->VAR8);
}