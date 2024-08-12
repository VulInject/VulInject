static void FUN1(int VAR1, VAR2 *VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR4;
    if (VAR1 < 0)
    {
        FUN2("", FUN3(VAR3));
        VAR6->VAR7 = NULL;
        FUN4(VAR6);
    }
    else
    {
        FUN2("");
        VAR6->VAR7 = FUN5(VAR1, "");
        FUN6(VAR6);
    }
}