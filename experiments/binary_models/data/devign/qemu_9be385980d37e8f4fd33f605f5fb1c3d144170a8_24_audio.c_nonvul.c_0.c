int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    if (!VAR2)
    {
        return VAR4;
    }
    if (!VAR2->VAR5->VAR6)
    {
        FUN2("", FUN3(VAR2));
        return 0;
    }
    return VAR2->VAR5->VAR7->write(VAR2, VAR3, VAR4);
}