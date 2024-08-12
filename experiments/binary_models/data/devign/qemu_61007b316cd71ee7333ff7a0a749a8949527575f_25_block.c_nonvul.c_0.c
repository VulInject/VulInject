VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    if (VAR5 && VAR5->VAR6)
    {
        return VAR5->FUN1(VAR3);
    }
    return NULL;
}