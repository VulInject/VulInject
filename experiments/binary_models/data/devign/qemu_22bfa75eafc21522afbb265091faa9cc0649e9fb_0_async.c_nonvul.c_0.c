FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8;
    bool VAR9 = false;
    for (VAR8 = VAR6->VAR10; VAR8; VAR8 = VAR8->VAR11)
    {
        if (!VAR8->VAR12 && VAR8->VAR9)
        {
            VAR9 = true;
            if (VAR8->VAR13)
            {
                *VAR4 = 10;
            }
            else
            {
                *VAR4 = 0;
                break;
            }
        }
    }
    return VAR9;
}