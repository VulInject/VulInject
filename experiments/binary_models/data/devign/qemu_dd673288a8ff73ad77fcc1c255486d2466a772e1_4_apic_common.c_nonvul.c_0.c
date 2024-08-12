VAR1 FUN1(VAR2 *VAR3)
{
    if (VAR3)
    {
        VAR4 *VAR5 = FUN2(VAR3);
        FUN3((VAR1)VAR5->VAR6);
        return VAR5->VAR6;
    }
    else
    {
        FUN3(VAR7);
        return VAR7;
    }
}