static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0, VAR5;
    if (FUN2(&VAR2->VAR6))
        return VAR3;
    VAR4 = 2 + FUN2(&VAR2->VAR6);
    while (FUN2(&VAR2->VAR6))
    {
        VAR4 <<= 1;
        VAR4 += FUN2(&VAR2->VAR6);
        if (VAR4 >= 32768)
        {
            FUN3(VAR2->VAR7, "");
            return VAR8;
        }
    }
    VAR5 = VAR4 & 1;
    VAR4 >>= 1;
    VAR4 = (VAR5) ? (VAR3 - VAR4) : (VAR3 + VAR4);
    FUN4(VAR2->VAR7, "", VAR4);
    return VAR4;
}