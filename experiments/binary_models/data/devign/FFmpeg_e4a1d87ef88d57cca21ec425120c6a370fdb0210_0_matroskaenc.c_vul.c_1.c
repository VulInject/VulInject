static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        FUN2(&VAR2->VAR3->VAR4);
        FUN2(&VAR2->VAR3);
        if (VAR2->VAR5)
        {
            FUN2(&VAR2->VAR5->VAR4);
            FUN2(&VAR2->VAR5);
            if (VAR2->VAR6)
            {
                FUN2(&VAR2->VAR6->VAR4);
                FUN2(&VAR2->VAR6);
                FUN2(&VAR2->VAR7);
                FUN2(&VAR2->VAR8);
                FUN2(&VAR2->VAR9);