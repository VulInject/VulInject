VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = FUN2(VAR5);
    int VAR8;
    if ((!VAR5->VAR9[0].VAR10 && !VAR5->VAR9[1].VAR10) || (VAR7 != VAR5->VAR9 && !VAR7->VAR10))
    {
        VAR8 = 0;
    }
    else
    {
        VAR8 = VAR7->VAR11;
    }
    FUN3("", VAR3, VAR8);
    return VAR8;
}