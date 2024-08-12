VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6 = NULL;
    if (VAR7)
    {
        if (VAR5)
        {
            VAR6 = FUN2(VAR5);
        }
        else
        {
            VAR6 = FUN3(FUN4());
        }
    }
    else if (VAR8)
    {
        if (VAR5)
        {
            VAR6 = FUN5(VAR5);
        }
        else
        {
            fprintf(VAR9, "", VAR10);
        }
    }
    else if (VAR11)
    {
        if (VAR5)
        {
            VAR6 = &FUN6(VAR5, -1, "")->VAR12;
        }
        else
        {
            fprintf(VAR9, "", VAR10);
        }
    }
    else if (VAR13)
    {
        if (VAR5)
        {
            VAR6 = FUN7(VAR5);
        }
        else
        {
            VAR6 = FUN8(VAR3);
        }
    }
    return VAR6;
}