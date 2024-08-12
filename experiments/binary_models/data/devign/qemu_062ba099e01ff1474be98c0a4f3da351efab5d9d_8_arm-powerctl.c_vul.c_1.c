int FUN1(uint64_t VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    FUN2("" VAR6 "", VAR1);
    VAR3 = FUN3(VAR1);
    if (!VAR3)
    {
        return VAR7;
    }
    VAR5 = FUN4(VAR3);
    if (VAR5->VAR8)
    {
        FUN5(VAR9, "" VAR6 "", VAR10, VAR1);
        return VAR11;
    }
    VAR5->VAR8 = true;
    VAR3->VAR12 = 1;
    VAR3->VAR13 = VAR14;
    FUN6(VAR3);
    return VAR15;
}