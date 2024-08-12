static int FUN1(VAR1 *VAR2)
{
    unsigned char VAR3;
    int VAR4, VAR5;
    if (!VAR2->VAR6)
    {
        FUN2(VAR2->VAR7, VAR2->VAR8, 1);
        VAR3 = *VAR2->VAR7++;
    }
    else
    {
        FUN2(VAR2->VAR9, VAR2->VAR10, 1);
        VAR3 = *VAR2->VAR9++;
    }
    if (VAR3 < 56)
    {
        VAR4 = 8 + (VAR3 % 7);
        VAR5 = VAR3 / 7;
    }
    else
    {
        VAR4 = -14 + ((VAR3 - 56) % 29);
        VAR5 = 8 + ((VAR3 - 56) / 29);
    }
    FUN3("", VAR3, VAR4, VAR5);
    return FUN4(VAR2, &VAR2->VAR11, VAR4, VAR5);
}