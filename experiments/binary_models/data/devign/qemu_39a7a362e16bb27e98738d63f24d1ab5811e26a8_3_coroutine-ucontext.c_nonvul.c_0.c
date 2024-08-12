VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(&VAR3);
    if (VAR2)
    {
        FUN3(VAR2, VAR4);
        VAR5--;
    }
    else
    {
        VAR2 = FUN4();
    }
    return VAR2;
}