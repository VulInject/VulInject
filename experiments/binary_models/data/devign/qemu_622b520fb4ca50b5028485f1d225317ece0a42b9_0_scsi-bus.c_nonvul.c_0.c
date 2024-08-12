int FUN1(VAR1 *VAR2)
{
    Location VAR3;
    VAR4 *VAR5;
    int VAR6 = 0, VAR7;
    FUN2(&VAR3);
    for (VAR7 = 0; VAR7 < VAR2->VAR8; VAR7++)
    {
        VAR5 = FUN3(VAR9, VAR2->VAR10, VAR7);
        if (VAR5 == NULL)
        {
            continue;
        }
        FUN4(VAR5->VAR11);
        if (!FUN5(VAR2, VAR5->VAR12, VAR7))
        {
            VAR6 = -1;
            break;
        }
    }
    FUN6(&VAR3);
    return VAR6;
}