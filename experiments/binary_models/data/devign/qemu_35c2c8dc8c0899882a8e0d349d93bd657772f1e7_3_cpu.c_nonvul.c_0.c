void FUN1(void)
{
    int VAR1, VAR2;
    static const char *VAR3[] = {"", "", ""};
    for (VAR1 = 0; VAR1 < FUN2(VAR4); ++VAR1)
    {
        VAR5 *VAR6 = &VAR4[VAR1];
        for (VAR2 = 0; VAR2 < FUN2(VAR3); VAR2++)
        {
            if (strcmp(VAR3[VAR2], VAR6->VAR7) == 0)
            {
                FUN3(VAR6->VAR8, sizeof(VAR6->VAR8), "");
                FUN4(VAR6->VAR8, sizeof(VAR6->VAR8), FUN5());
                break;
            }
        }
    }
}