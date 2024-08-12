static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR3 *VAR6 = VAR2->VAR5 + VAR2->VAR7;
    if (FUN2(VAR4))
        VAR4 += FUN3(VAR4);
    if (VAR4 > VAR6 - 4 || memcmp(VAR4, "", 4))
        return 0;
    else
        return VAR8 / 2;
}