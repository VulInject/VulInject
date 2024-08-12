int FUN1(struct VAR1 *VAR2)
{
    if (VAR2->VAR3 != -1)
    {
        return 0;
    }
    VAR2->VAR3 = FUN2(VAR2->VAR4, VAR2->VAR5, VAR2->VAR6);
    if (VAR2->VAR3 == -1)
    {
        FUN3(VAR2, 0, "");
        return -1;
    }
    FUN3(VAR2, 2, "", VAR2->VAR3);
    FUN4(FUN5(VAR2->VAR4), VAR7, NULL, VAR2);
    return 0;
}