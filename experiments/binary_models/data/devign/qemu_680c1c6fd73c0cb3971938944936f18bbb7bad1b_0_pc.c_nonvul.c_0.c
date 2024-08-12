static VAR1 *FUN1(void *VAR2, uint8_t VAR3)
{
    VAR1 *VAR4;
    static int VAR5;
    if (FUN2() && FUN3())
    {
        VAR4 = FUN4(NULL, "");
    }
    else
    {
        VAR4 = FUN4(NULL, "");
    }
    FUN5(VAR4, "", VAR3);
    FUN6(VAR4, "", VAR2);
    FUN7(VAR4);
    if (VAR5 == 0)
    {
        FUN8(FUN9(VAR4), 0, VAR6);
        VAR5 = 1;
    }
    if (!FUN2() || !FUN3())
    {
        VAR7 = true;
    }
    return VAR4;
}