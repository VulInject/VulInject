void FUN1(VAR1 *VAR2)
{
    assert(FUN2());
    if (VAR2->VAR3)
    {
        VAR2->VAR3 = false;
        FUN3(&VAR2->VAR4);
    }
    else
    {
        VAR2->VAR5--;
        assert(VAR2->VAR5 >= 0);
        if (!VAR2->VAR5)
        {
            FUN4(&VAR2->VAR4);
        }
    }
}