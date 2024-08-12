int FUN1(const VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4)
    {
        return VAR2->VAR5.VAR6.VAR7;
    }
    else
    {
        assert(VAR2->VAR3 == VAR8);
        return FUN2(VAR2->VAR5.VAR9.VAR7);
    }
}