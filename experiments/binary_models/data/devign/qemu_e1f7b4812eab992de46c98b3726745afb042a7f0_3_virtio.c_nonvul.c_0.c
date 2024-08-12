int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4)
{
    unsigned int VAR5, VAR6;
    FUN2(VAR2, &VAR5, &VAR6, VAR3, VAR4);
    return VAR3 <= VAR5 && VAR4 <= VAR6;
}