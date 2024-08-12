VAR1 *FUN1(VAR2 **VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2("");
    if (VAR3[0])
    {
        FUN3(&VAR5->VAR6, "", VAR3[0]->VAR7);
    }
    if (VAR3[1])
    {
        FUN3(&VAR5->VAR6, "", VAR3[1]->VAR7);
    }
    if (FUN4(&VAR5->VAR6) < 0)
        return NULL;
    return &(FUN5(VAR8, VAR9, VAR5)->VAR10);
}