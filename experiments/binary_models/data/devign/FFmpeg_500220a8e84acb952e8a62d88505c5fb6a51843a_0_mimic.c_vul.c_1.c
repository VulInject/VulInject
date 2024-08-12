static int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    int VAR8, VAR9;
    if (VAR2 == VAR3)
        return 0;
    VAR5->VAR10 = VAR7->VAR11;
    VAR5->VAR12 = VAR7->VAR13;
    memcpy(VAR5->VAR14, VAR7->VAR14, sizeof(VAR7->VAR14));
    for (VAR8 = 0; VAR8 < FUN2(VAR5->VAR15); VAR8++)
    {
        FUN3(VAR2, &VAR5->VAR15[VAR8]);
        if (VAR7->VAR15[VAR8].VAR16->VAR17[0])
        {
            VAR9 = FUN4(&VAR5->VAR15[VAR8], &VAR7->VAR15[VAR8]);
            if (VAR9 < 0)
                return VAR9;
        }
    }
    return 0;
}