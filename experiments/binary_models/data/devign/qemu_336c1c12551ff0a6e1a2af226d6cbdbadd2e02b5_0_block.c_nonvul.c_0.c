int FUN1(VAR1 *VAR2)
{
    assert(VAR2->VAR3);
    if (VAR2->VAR3->VAR4)
    {
        return VAR2->VAR3->FUN1(VAR2);
    }
    return 1;
}