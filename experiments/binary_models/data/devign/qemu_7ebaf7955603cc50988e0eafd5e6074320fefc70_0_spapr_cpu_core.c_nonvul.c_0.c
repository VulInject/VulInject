static void FUN1(void)
{
    int VAR1;
    FUN2(&VAR2);
    for (VAR1 = 0; VAR1 < FUN3(VAR3); VAR1++)
    {
        TypeInfo VAR4 = {
            .VAR5 = VAR6,
            .VAR7 = sizeof(VAR8),
            .VAR9 = VAR10,
            .VAR11 = (void *)VAR3[VAR1],
        };
        VAR4.VAR12 = FUN4("" VAR6, VAR3[VAR1]);
        FUN5(&VAR4);
        FUN6((void *)VAR4.VAR12);
    }
}