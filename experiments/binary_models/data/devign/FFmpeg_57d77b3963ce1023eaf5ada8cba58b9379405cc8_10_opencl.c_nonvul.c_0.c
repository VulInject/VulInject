void FUN1(void)
{
    cl_int VAR1;
    int VAR2;
    LOCK_OPENCL VAR3.VAR4--;
    if (VAR3.VAR5)
        goto VAR6;
    if (VAR3.VAR4 > 0 || VAR3.VAR7 > 0)
        goto VAR6;
    for (VAR2 = 0; VAR2 < VAR3.VAR8; VAR2++)
    {
        if (VAR3.VAR9[VAR2])
        {
            VAR1 = FUN2(VAR3.VAR9[VAR2]);
            if (VAR1 != VAR10)
            {
                FUN3(&VAR11, VAR12, "", FUN4(VAR1));
            }
            VAR3.VAR9[VAR2] = NULL;
        }
    }
    if (VAR3.VAR13)
    {
        VAR1 = FUN5(VAR3.VAR13);
        if (VAR1 != VAR10)
        {
            FUN3(&VAR11, VAR12, "", FUN4(VAR1));
        }
        VAR3.VAR13 = NULL;
    }
    if (VAR3.VAR14)
    {
        VAR1 = FUN6(VAR3.VAR14);
        if (VAR1 != VAR10)
        {
            FUN3(&VAR11, VAR12, "", FUN4(VAR1));
        }
        VAR3.VAR14 = NULL;
    }
    FUN7(&(VAR3.VAR15));
VAR6:
    VAR16
}