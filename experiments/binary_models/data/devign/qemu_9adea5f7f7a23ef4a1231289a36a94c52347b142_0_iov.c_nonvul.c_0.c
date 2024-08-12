FUN1(int VAR1, struct VAR2 *VAR3, unsigned VAR4, bool VAR5)
{
    ssize_t VAR6;
    struct msghdr VAR7;
    memset(&VAR7, 0, sizeof(VAR7));
    VAR7.VAR8 = VAR3;
    VAR7.VAR9 = VAR4;
    do
    {
        VAR6 = VAR5 ? sendmsg(VAR1, &VAR7, 0) : FUN2(VAR1, &VAR7, 0);
    } while (VAR6 < 0 && VAR10 == VAR11);
    return VAR6;
    unsigned VAR12 = 0;
    ssize_t VAR6 = 0;
    while (VAR12 < VAR4)
    {
        ssize_t VAR13 = VAR5 ? send(VAR1, VAR3[VAR12].VAR14, VAR3[VAR12].VAR15, 0) : recv(VAR1, VAR3[VAR12].VAR14, VAR3[VAR12].VAR15, 0);
        if (VAR13 > 0)
        {
            VAR6 += VAR13;
        }
        else if (!VAR13)
        {
            break;
        }
        else if (VAR10 == VAR11)
        {
            continue;
        }
        else
        {
            if (VAR6 == 0)
            {
                VAR6 = -1;
            }
            break;
        }
        VAR12++;
    }
    return VAR6;
}