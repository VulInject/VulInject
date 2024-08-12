static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    switch (VAR2)
    {
    case VAR5:
        VAR4->VAR6 |= VAR7;
        break;
    case VAR8:
        break;
    case VAR9:
        if (!VAR4->VAR10.VAR11)
        {
            FUN2(&VAR4->VAR10);
        }
        break;
    case VAR12:
        if (VAR4->VAR10.VAR11)
        {
            FUN3(&VAR4->VAR10);
        }
        break;
    }
}