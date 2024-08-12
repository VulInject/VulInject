static int FUN1(VAR1 *VAR2, unsigned VAR3, hwaddr VAR4)
{
    unsigned VAR5 = VAR2->VAR6->VAR7.VAR8;
    unsigned VAR9 = VAR2->VAR6->VAR7.VAR10;
    if (VAR5 == 0)
    {
        VAR5 = 1;
    }
    if (VAR9 == 0)
    {
        VAR9 = 4;
    }
    if (!VAR2->VAR6->VAR7.VAR11)
    {
        unsigned VAR12 = VAR4 & -VAR4;
        if (VAR12 != 0 && VAR12 < VAR9)
        {
            VAR9 = VAR12;
        }
    }
    if (VAR3 > VAR9)
    {
        VAR3 = VAR9;
    }
    assert(VAR3 >= VAR5);
    return VAR3;
}