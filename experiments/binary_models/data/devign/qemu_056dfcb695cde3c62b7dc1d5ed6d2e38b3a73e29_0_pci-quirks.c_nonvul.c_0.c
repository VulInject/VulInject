bool FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < FUN2(VAR4); VAR3++)
    {
        if (FUN3(VAR2, VAR4[VAR3].VAR5, VAR4[VAR3].VAR6))
        {
            FUN4(VAR2->VAR7.VAR8, VAR4[VAR3].VAR5, VAR4[VAR3].VAR6);
            return true;
        }
    }
    return false;
}