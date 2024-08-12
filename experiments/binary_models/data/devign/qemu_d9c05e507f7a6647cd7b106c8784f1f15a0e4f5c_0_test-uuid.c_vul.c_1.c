static void FUN1(void)
{
    int VAR1;
    for (VAR1 = 0; VAR1 < FUN2(VAR2); VAR1++)
    {
        char *VAR3;
        if (!VAR2[VAR1].VAR4)
        {
            continue;
        }
        VAR3 = FUN3(&VAR2[VAR1].VAR5);
        FUN4(VAR2[VAR1].VAR6, ==, VAR3);
    }