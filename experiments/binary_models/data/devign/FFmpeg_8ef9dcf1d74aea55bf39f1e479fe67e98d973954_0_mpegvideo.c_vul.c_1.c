void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (!VAR4)
        return;
    VAR2->VAR6 = &VAR4->VAR6;
    VAR2->VAR7 = &VAR4->VAR7;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        VAR2->VAR8[VAR5] = VAR4->VAR8[VAR5];
        VAR2->VAR9[VAR5] = VAR4->VAR9[VAR5];
    }
    VAR2->VAR10 = VAR4->VAR10;
    VAR2->VAR11 = VAR4->VAR11;