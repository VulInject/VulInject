static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4)
{
    VAR1 *VAR5 = NULL;
    int VAR6 = 0, VAR7;
    VAR5 = FUN2(VAR3, VAR4);
    if (VAR5)
    {
        FUN3(VAR5->VAR7, VAR5->VAR8);
        return VAR5;
    }
    VAR7 = VAR3->VAR9;
    VAR6 = 0;
    while (VAR6 < VAR3->VAR10)
    {
        if (!VAR3->VAR11[VAR7].VAR8)
        {
            VAR5 = &VAR3->VAR11[VAR7];
            break;
        }
        VAR7 = FUN4(VAR3, VAR7, VAR3->VAR10);
        VAR6++;
    }
    if (!VAR5)
    {
        FUN5(VAR4);
    }
    FUN6(VAR7, VAR5);
    return VAR5;
}