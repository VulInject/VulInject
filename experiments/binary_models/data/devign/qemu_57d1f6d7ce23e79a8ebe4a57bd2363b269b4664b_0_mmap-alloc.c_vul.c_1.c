VAR1 FUN1(int VAR2)
{
    struct statfs VAR3;
    int VAR4;
    if (VAR2 != -1)
    {
        do
        {
            VAR4 = FUN2(VAR2, &VAR3);
        } while (VAR4 != 0 && VAR5 == VAR6);
        if (VAR4 == 0 && VAR3.VAR7 == VAR8)
        {
            return VAR3.VAR9;
        }
    }
    return FUN3();