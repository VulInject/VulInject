void FUN1(VAR1 *VAR2)
{
    if (--VAR2->VAR3 == 0)
    {
        assert(VAR2->VAR4);
        FUN2(VAR2);
        close(VAR2->VAR5);
        VAR2->VAR5 = -1;
        if (VAR2->VAR6)
        {
            FUN3(&VAR2->VAR6->VAR7, VAR2, VAR8);
            FUN4(VAR2->VAR6);
        }
        FUN5(VAR2);
    }
}