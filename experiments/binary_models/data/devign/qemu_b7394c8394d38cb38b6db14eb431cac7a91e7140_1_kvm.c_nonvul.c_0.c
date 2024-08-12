void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR4->VAR5 = 1;
    if (FUN2())
    {
        VAR4->VAR6 = FUN3(VAR2) ? VAR7 : VAR8;
    }
    else
    {
        VAR4->VAR6 = VAR7;
    }
    if (VAR2->VAR9)
    {
        int VAR10;
        for (VAR10 = 0; VAR10 < FUN4(VAR4->VAR11); VAR10++)
        {
            VAR4->VAR11[VAR10] = VAR12;
        }
    }
}