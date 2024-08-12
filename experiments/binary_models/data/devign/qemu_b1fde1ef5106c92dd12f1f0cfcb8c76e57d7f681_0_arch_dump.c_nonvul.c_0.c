int FUN1(VAR1 *VAR2, const struct VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    if (VAR9 == NULL)
    {
        return -1;
    }
    VAR6 = FUN2(VAR9);
    VAR8 = FUN3(VAR6);
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = VAR13;
    if ((*VAR8->VAR14)(VAR6))
    {
        VAR2->VAR15 = VAR16;
    }
    else
    {
        VAR2->VAR15 = VAR17;
    }
    if (FUN4(FUN5(FUN6()), "", 8) == 0)
    {
        VAR2->VAR18 = (1U << 16);
    }
    return 0;
}