static VAR1 FUN1(void)
{
    int64_t VAR2;
    int64_t VAR3;
    if (VAR4)
        VAR2 = VAR5;
    else
        VAR2 = (FUN2() + 999) / 1000;
    if (VAR6[VAR7])
    {
        VAR3 = (VAR6[VAR7]->VAR8 - FUN3(VAR9)) * 1000;
        if (VAR3 < VAR2)
            VAR2 = VAR3;
    }
    if (VAR2 < VAR10)
        VAR2 = VAR10;
    return VAR2;
}