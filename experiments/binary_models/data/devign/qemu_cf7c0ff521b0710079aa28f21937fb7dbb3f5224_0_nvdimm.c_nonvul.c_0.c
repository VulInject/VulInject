static VAR1 *FUN1(uint32_t VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5, *VAR6 = FUN2();
    for (VAR5 = VAR6; VAR5; VAR5 = VAR5->VAR7)
    {
        VAR1 *VAR8 = VAR5->VAR9;
        int VAR10 = FUN3(FUN4(VAR8), VAR11, NULL);
        if (FUN5(VAR10) == VAR2)
        {
            VAR3 = VAR8;
            break;
        }
    }
    FUN6(VAR6);
    return VAR3;
}