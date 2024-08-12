static VAR1 FUN1(void)
{
    VAR2 *VAR3, *VAR4, *VAR5;
    uint64_t VAR6;
    VAR3 = FUN2(FUN3(""));
    VAR4 = FUN4(VAR3, "");
    if (!FUN5(VAR4, ""))
    {
        VAR6 = 0;
    }
    else
    {
        VAR5 = FUN4(VAR4, "");
        VAR6 = FUN6(VAR5, "", 0);
        FUN7(VAR3);
    }
    return VAR6;
}