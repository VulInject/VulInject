static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5 & VAR6)
    {
        return VAR4->VAR7 == 41 || VAR4->VAR7 == 42;
    }
    if (VAR4->VAR7 == 16 || VAR4->VAR7 == 55)
    {
        return 1;
    }
    return VAR8[VAR4->VAR7] == 0 || VAR8[VAR4->VAR7] == 7;
}