bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++)
    {
        if ((VAR7)VAR4->VAR8[VAR5].VAR9 % VAR2->VAR10)
        {
            return false;
        }
        if (VAR4->VAR8[VAR5].VAR11 % VAR2->VAR10)
        {
            return false;
        }
    }
    return true;
}