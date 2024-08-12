static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    if (FUN4(VAR8->VAR9, VAR10) && !FUN5(VAR8->VAR9, VAR11, VAR4))
    {
        return 0;
    }
    return 1;
}