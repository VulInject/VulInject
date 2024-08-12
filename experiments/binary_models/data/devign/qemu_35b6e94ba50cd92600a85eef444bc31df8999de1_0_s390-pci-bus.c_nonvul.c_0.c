static VAR1 FUN1(VAR2 **VAR3)
{
    uint32_t VAR4 = 0;
    do
    {
        if (!FUN2(VAR4))
        {
            return VAR4;
        }
    } while (VAR4++ != VAR5);
    FUN3(VAR3, "");
    return 0;
}