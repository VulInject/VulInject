static void FUN1(void)
{
    int VAR1 = 0;
    if (VAR2 == NULL)
        VAR2 = VAR3;
    for (; VAR2 != NULL; VAR2 = VAR2->VAR2)
    {
        VAR4 *VAR5 = VAR6 = VAR2;
        if (VAR7->VAR8)
            break;
        if (FUN2(VAR5))
            VAR1 = FUN3(VAR5);
        else if (VAR5->VAR9)
            break;
        if (VAR1 == VAR10)
        {
            FUN4(VAR5);
            VAR11 = 1;
            break;
        }
    }
}