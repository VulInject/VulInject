static VAR1 *FUN1(struct VAR2 *VAR3, int VAR4)
{
    int VAR5 = VAR3->VAR6 + VAR3->VAR7;
    VAR3->VAR7 += VAR4;
    if (VAR5 < VAR8)
    {
        if (VAR5 + VAR4 > VAR8 && (VAR3->VAR9 = VAR5 + VAR4) > VAR8 * 2)
        {
            FUN2("", VAR10, VAR4);
            FUN3(-1);
        }
        return VAR3->VAR11 + VAR5;
    }
    if (VAR3->VAR7 > VAR3->VAR9)
    {
        FUN2("", VAR10, VAR4);
        FUN3(-1);
    }
    return VAR3->VAR11 + VAR5 - VAR3->VAR9;
}