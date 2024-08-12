static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    unsigned VAR8;
    int VAR9;
    FUN2(VAR10)
    if (VAR4->VAR11)
    {
        for (VAR8 = 0; VAR8 < FUN3(VAR4->VAR10); VAR8++)
            if ((VAR9 = FUN4(&VAR7, VAR4->VAR10[VAR8])) < 0)
                return VAR9;
        FUN5(VAR2, VAR7);
    }
    else { FUN6(VAR2); }
    return 0;
}