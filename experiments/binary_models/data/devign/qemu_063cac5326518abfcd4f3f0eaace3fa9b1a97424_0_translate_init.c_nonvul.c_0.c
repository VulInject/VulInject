int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR4, FUN3());
    switch (VAR2->VAR5)
    {
    case VAR6:
        VAR3 = FUN2(VAR3, 2);
        break;
    case VAR7:
        VAR3 = FUN2(VAR3, 4);
        break;
    case VAR8:
        VAR3 = FUN2(VAR3, 8);
        break;
    }
    return VAR3;
}