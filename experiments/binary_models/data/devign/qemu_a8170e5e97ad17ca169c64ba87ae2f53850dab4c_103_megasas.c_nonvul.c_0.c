static VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4)
{
    VAR1 *VAR5 = NULL;
    int VAR6 = 0, VAR7;
    VAR7 = VAR3->VAR8;
    while (VAR6 < VAR3->VAR9)
    {
        if (VAR3->VAR10[VAR7].VAR11 && VAR3->VAR10[VAR7].VAR11 == VAR4)
        {
            VAR5 = &VAR3->VAR10[VAR7];
            break;
        }
        VAR7 = FUN2(VAR3, VAR7, VAR3->VAR9);
        VAR6++;
    }
    return VAR5;
}