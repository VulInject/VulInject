static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(VAR3->VAR5, sizeof(VAR1));
    if (VAR4)
    {
        FUN3(VAR3, VAR4);
    }
    return VAR4;
}