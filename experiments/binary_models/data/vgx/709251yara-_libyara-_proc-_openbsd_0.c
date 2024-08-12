int FUN1(int VAR1, VAR2* VAR3)
{
int VAR4;
size_t VAR5 = sizeof(struct VAR6);

int VAR7[] = {VAR8, VAR9, VAR1};
VAR10* VAR11 = (VAR10*) FUN2(sizeof(VAR10));

if (VAR11 == NULL)
return VAR12;

memset(VAR11, 0, sizeof(VAR10));

VAR11->VAR1 = VAR1;
if (FUN3(VAR13, VAR1, NULL, 0) == -1)
{
FUN4(VAR11);

return VAR14;
}

VAR4 = 0;
if (FUN5(VAR1, &VAR4, 0) == -1)
{
FUN3(VAR15, VAR11->VAR1, NULL, 0);
FUN4(VAR11);

return VAR14;
}

if (FUN6(VAR7, 3, &VAR11->VAR16, &VAR5, NULL, 0) < 0)
{
FUN3(VAR15, VAR11->VAR1, NULL, 0);
FUN4(VAR11);

return VAR14;
}

VAR3->VAR11 = VAR11;

return VAR17;
}