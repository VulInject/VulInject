int FUN1(void)
{
    VAR1 *VAR2, **VAR3;
    int VAR4;
    VAR4 = 0;
    for (;;)
    {
        VAR3 = &VAR5;
        VAR2 = *VAR3;
        if (!VAR2)
            break;
        VAR4 = 1;
        *VAR3 = VAR2->VAR6;
        VAR2->VAR7 = 0;
        VAR2->FUN2(VAR2->VAR8);
    }
    return VAR4;
}