static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct VAR3 *VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR2->VAR7->VAR8; VAR6++)
    {
        VAR5 = &VAR2->VAR7->VAR9[VAR6];
        if (VAR5->VAR10 != VAR4->VAR10)
        {
            continue;
        }
        VAR5->VAR11 = VAR4->VAR11;
        VAR5->VAR12 = VAR4->VAR12;
        VAR5->VAR13 = VAR4->VAR13;
        FUN2(VAR2);
        return 0;
    }
    return -VAR14;
}