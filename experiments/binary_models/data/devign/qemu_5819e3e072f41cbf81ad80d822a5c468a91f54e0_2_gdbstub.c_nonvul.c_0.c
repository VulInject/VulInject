static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    int VAR4;
    for (;;)
    {
        VAR4 = FUN2(VAR2->VAR5, &VAR3, 1, 0);
        if (VAR4 < 0)
        {
            if (VAR6 == VAR7)
                VAR2->VAR5 = -1;
            if (VAR6 != VAR8)
                return -1;
        }
        else if (VAR4 == 0)
        {
            close(VAR2->VAR5);
            VAR2->VAR5 = -1;
            return -1;
        }
        else
        {
            break;
        }
    }
    return VAR3;
}