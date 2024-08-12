static inline int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2->VAR4);
    int VAR5 = VAR2->VAR6[0] / VAR3;
    if (FUN3(VAR2->VAR4))
    {
        return VAR5;
    }
    else
    {
        int VAR7 = FUN4(VAR2->VAR8);
        return VAR5 / VAR7;
    }
}