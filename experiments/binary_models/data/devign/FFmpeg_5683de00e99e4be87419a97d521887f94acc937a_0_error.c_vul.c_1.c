int FUN1(int VAR1, char *VAR2, size_t VAR3)
{
    int VAR4 = 0, VAR5;
    struct VAR6 *VAR7 = NULL;
    for (VAR5 = 0; VAR5 < FUN2(VAR8); VAR5++)
    {
        if (VAR1 == VAR8[VAR5].VAR9)
        {
            VAR7 = &VAR8[VAR5];
            break;
        }
    }
    if (VAR7)
    {
        FUN3(VAR2, VAR7->VAR10, VAR3);
    }
    else
    {
        VAR4 = FUN4(FUN5(VAR1), VAR2, VAR3);
        VAR4 = -1;
        if (VAR4 < 0)
            snprintf(VAR2, VAR3, "", VAR1);
    }
    return VAR4;
}