VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    if (!VAR5)
    {
        return -VAR6;
    }
    if (VAR5->VAR7)
    {
        return VAR5->FUN1(VAR3);
    }
    if (VAR3->VAR8)
    {
        return FUN1(VAR3->VAR8);
    }
    return -VAR9;
}