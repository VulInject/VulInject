static int FUN1(void *VAR1)
{
    int VAR2;
    VAR3 *VAR4 = VAR1;
    for (VAR2 = 0; VAR2 < FUN2(VAR4->VAR5); VAR2++)
    {
        VAR4->VAR5[VAR2] = FUN3(FUN4(&VAR4->VAR6), VAR2);
    }
    return 0;
}