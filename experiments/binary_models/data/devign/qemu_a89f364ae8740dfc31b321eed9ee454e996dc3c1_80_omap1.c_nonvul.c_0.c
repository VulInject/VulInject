static void FUN1(struct VAR1 *VAR2)
{
    int VAR3 = (VAR2->VAR4 && VAR2->VAR5) ? VAR2->VAR6 : 0;
    if (VAR3 != VAR2->VAR3)
    {
        VAR2->VAR3 = VAR3;
        FUN2("", VAR7, VAR3);
    }
}