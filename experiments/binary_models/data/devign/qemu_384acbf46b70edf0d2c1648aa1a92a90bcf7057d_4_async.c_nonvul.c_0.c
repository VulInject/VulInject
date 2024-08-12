void FUN1(int *VAR1)
{
    VAR2 *VAR3;
    for (VAR3 = VAR4; VAR3; VAR3 = VAR3->VAR5)
    {
        if (!VAR3->VAR6 && VAR3->VAR7)
        {
            if (VAR3->VAR8)
            {
                *VAR1 = FUN2(10, *VAR1);
            }
            else
            {
                *VAR1 = 0;
                break;
            }
        }
    }
}