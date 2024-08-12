bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    size_t VAR6 = FUN2(VAR2);
    for (VAR5 = 0; VAR5 < VAR4->VAR7; VAR5++)
    {
        if ((VAR8)VAR4->VAR9[VAR5].VAR10 % VAR6)
        {
            return false;
        }
        if (VAR4->VAR9[VAR5].VAR11 % VAR6)
        {
            return false;
        }
    }
    return true;
}