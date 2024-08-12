int main()
{
int VAR1 = 0;

VAR1 |= FUN1("", "", &VAR2, &VAR3, 1);
VAR1 |= FUN1("", "", &VAR4, &VAR5, 1);

VAR1 |= FUN1("", "", &VAR6, &VAR7, 4);
VAR1 |= FUN1("", "", &VAR8, &VAR9, 4);

VAR1 |= FUN2(&VAR10, VAR11, VAR12, sizeof(VAR12));

VAR1 |= FUN2(&VAR13, VAR11, VAR12, sizeof(VAR12));

VAR1 |= FUN3("", "", &VAR14, &VAR15);
VAR1 |= FUN3("", "", &VAR16, &VAR17);

FUN4(VAR1);
}