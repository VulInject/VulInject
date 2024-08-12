static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    char VAR5[128] = {0};
    int VAR6 = 0;
    VAR4 = FUN2(VAR2->VAR7, VAR2->VAR8, 0, NULL, NULL, NULL, NULL);
    if (!VAR4)
        return FUN3(VAR9);
    if (VAR2->VAR8 < 2 || VAR2->VAR7[0] != '' || VAR2->VAR7[1] != '')
        return 0;
    while (!VAR4->VAR10)
    {
        VAR6 = FUN4(VAR4, VAR5, sizeof(VAR5));
        if (VAR6 < 0)
            break;
        VAR6 = FUN5(VAR5);
        if (!VAR6)
        {
            VAR6 = VAR11;
            break;
        }
    }
    FUN6(VAR4);
    return VAR6;
}