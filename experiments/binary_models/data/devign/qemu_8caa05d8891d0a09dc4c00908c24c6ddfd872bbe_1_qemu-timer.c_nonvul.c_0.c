static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 **VAR5, *VAR6;
    VAR4->VAR7 = -1;
    VAR5 = &VAR2->VAR8;
    for (;;)
    {
        VAR6 = *VAR5;
        if (!VAR6)
            break;
        if (VAR6 == VAR4)
        {
            FUN2(VAR5, VAR6->VAR9);
            break;
        }
        VAR5 = &VAR6->VAR9;
    }
}