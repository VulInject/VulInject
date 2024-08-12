void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR3->VAR5 = VAR6;
    VAR3->VAR7 = VAR8;
    if (FUN2())
    {
        VAR4 = FUN3(VAR3);
        if (VAR4 < 0)
        {
            fprintf(VAR9, "", strerror(-VAR4));
            FUN4(1);
        }
        FUN5(VAR3);
    }
    else
    {
        FUN6();
    }
}