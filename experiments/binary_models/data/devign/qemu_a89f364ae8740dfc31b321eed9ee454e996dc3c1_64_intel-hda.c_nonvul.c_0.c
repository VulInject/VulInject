static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    FUN2(VAR4, 1, "", VAR6);
    for (VAR5 = 0; VAR5 < FUN3(VAR4->VAR7); VAR5++)
    {
        if (VAR4->VAR7[VAR5].VAR8 & 0x02)
        {
            FUN4(VAR4, &VAR4->VAR7[VAR5]);
        }
    }
    FUN5(VAR4);
    return 0;
}