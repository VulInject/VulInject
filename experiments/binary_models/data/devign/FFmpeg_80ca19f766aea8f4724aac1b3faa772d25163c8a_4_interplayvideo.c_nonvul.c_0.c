static int FUN1(VAR1 *VAR2)
{
    unsigned char VAR3;
    int VAR4, VAR5;
    FUN2(VAR2->VAR6, VAR2->VAR7, 1);
    VAR3 = *VAR2->VAR6++;
    if (VAR3 < 56)
    {
        VAR4 = -(8 + (VAR3 % 7));
        VAR5 = -(VAR3 / 7);
    }
    else
    {
        VAR4 = -(-14 + ((VAR3 - 56) % 29));
        VAR5 = -(8 + ((VAR3 - 56) / 29));
    }
    FUN3("", VAR3, VAR4, VAR5);
    return FUN4(VAR2, &VAR2->VAR8, VAR4, VAR5);
}