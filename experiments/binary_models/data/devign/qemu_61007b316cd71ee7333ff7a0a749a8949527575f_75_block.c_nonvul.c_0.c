VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    if (!VAR5)
        return -VAR6;
    if (VAR5->VAR7)
    {
        int VAR8 = FUN2(VAR3, VAR3->VAR9);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    return VAR3->VAR9;
}