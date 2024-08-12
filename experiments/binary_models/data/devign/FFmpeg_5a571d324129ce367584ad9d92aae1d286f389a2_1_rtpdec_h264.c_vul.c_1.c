static VAR1 *FUN1(void)
{
    VAR1 *VAR2 = FUN2(sizeof(VAR1) + VAR3);
    if (VAR2)
    {
        VAR2->VAR4 = VAR5;
    }
    return VAR2;
}