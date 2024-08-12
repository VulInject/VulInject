static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < FUN2(VAR3->VAR5); VAR4++)
    {
        if (VAR4 >= 8 && VAR4 < 12)
        {
            continue;
        }
        if (VAR3->VAR5[VAR4].VAR6 == 0)
        {
            return &VAR3->VAR5[VAR4];
        }
    }
    fprintf(VAR7, "", VAR8);
    FUN3();
}