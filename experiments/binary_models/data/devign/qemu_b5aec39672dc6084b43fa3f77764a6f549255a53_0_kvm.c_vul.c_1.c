int FUN1(void *VAR1, int VAR2, uint32_t VAR3)
{
    long VAR4;
    if (VAR2 < 0)
    {
        return -1;
    }
    VAR4 = (VAR3 / VAR5) * sizeof(VAR6);
    if ((FUN2(VAR1, VAR4) < 0) || (close(VAR2) < 0))
    {
        fprintf(VAR7, ""
                        "",
                strerror(VAR8));
    }
    return 0;
}