static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    if ((VAR5->VAR6 == -1 && VAR5->VAR7 == -1) || (VAR2->VAR8 == VAR9))
    {
        return FUN2(FUN3(VAR2, VAR3), VAR5->VAR6, VAR5->VAR7);
    }
    else if (VAR2->VAR8 == VAR10)
    {
        return FUN4(FUN3(VAR2, VAR3), VAR5);
    }
    else if (VAR2->VAR8 == VAR9)
    {
        return FUN2(FUN3(VAR2, VAR3), VAR5->VAR6, VAR5->VAR7);
    }
    return -1;
}