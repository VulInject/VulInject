void FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    VAR5 *VAR6;
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        VAR6 = &VAR8[VAR4];
        if (VAR6->VAR9)
        {
            if (VAR6->private && FUN2(VAR6->private, VAR3))
            {
                if (VAR6->VAR10)
                {
                    VAR11 *VAR12;
                    VAR12 = FUN3(VAR6->VAR10, VAR6->private);
                    if (VAR12)
                        FUN4(VAR12);
                }
                FUN5(VAR6);
            }
        }
    }
}