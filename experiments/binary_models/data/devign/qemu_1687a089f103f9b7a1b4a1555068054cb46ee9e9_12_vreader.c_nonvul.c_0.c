FUN1(vreader_id_t VAR1)
{
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5;
    if (VAR1 == (VAR6)-1)
    {
        return NULL;
    }
    FUN2();
    for (VAR5 = FUN3(VAR7); VAR5; VAR5 = FUN4(VAR5))
    {
        VAR2 *VAR8 = FUN5(VAR5);
        if (VAR8->VAR1 == VAR1)
        {
            VAR3 = VAR8;
            break;
        }
        FUN6(VAR8);
    }
    FUN7();
    return VAR3;
}