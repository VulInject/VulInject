static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5;
    if (*VAR4->VAR6)
        FUN2(VAR2, VAR4);
    else if (FUN3(VAR2, VAR4))
        return -1;
    if (*VAR4->VAR7)
        for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++)
            VAR4->VAR9[VAR5] <<= *VAR4->VAR7;
    return 0;
}