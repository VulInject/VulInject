int FUN1(unsigned int VAR1, unsigned int VAR2, AVRational VAR3)
{
    int64_t VAR4;
    if (!VAR3.VAR5)
        return FUN2(VAR6);
    if (!VAR3.VAR7 || VAR3.VAR7 == VAR3.VAR5)
        return 0;
    if (VAR3.VAR7 < VAR3.VAR5)
        VAR4 = FUN3(VAR1, VAR3.VAR7, VAR3.VAR5, VAR8);
    else
        VAR4 = FUN3(VAR2, VAR3.VAR5, VAR3.VAR7, VAR8);
    if (VAR4 > 0)
        return 0;
    return FUN2(VAR6);
}