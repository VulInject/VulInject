VAR1 *FUN1(VAR2 *VAR3, size_t VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    jobject VAR10 = NULL;
    FUN2(VAR9, VAR3, NULL);
    if (VAR3->VAR11)
    {
        VAR10 = (*VAR9)->FUN3(VAR9, VAR3->VAR12, VAR3->VAR13.VAR14, VAR4);
        if (FUN4(VAR9, 1, VAR3) < 0)
        {
            goto VAR15;
        }
    }
    else
    {
        if (!VAR3->VAR16)
        {
            VAR3->VAR16 = (*VAR9)->FUN3(VAR9, VAR3->VAR12, VAR3->VAR13.VAR17);
            if (FUN4(VAR9, 1, VAR3) < 0)
            {
                goto VAR15;
            }
            VAR3->VAR16 = (*VAR9)->FUN5(VAR9, VAR3->VAR16);
            if (FUN4(VAR9, 1, VAR3) < 0)
            {
                goto VAR15;
            }
        }
        VAR10 = (*VAR9)->FUN6(VAR9, VAR3->VAR16, VAR4);
        if (FUN4(VAR9, 1, VAR3) < 0)
        {
            goto VAR15;
        }
    }
    VAR7 = (*VAR9)->FUN7(VAR9, VAR10);
    *VAR6 = (*VAR9)->FUN8(VAR9, VAR10);
VAR15:
    if (VAR10)
    {
        (*VAR9)->FUN9(VAR9, VAR10);
    }
    return VAR7;
}