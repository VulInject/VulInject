bool
FUN1(void)
{
if (VAR1 < 0) {
g_autofree char *VAR2 = NULL;

VAR2 = FUN2("", VAR3);

VAR1 = FUN3(VAR2);
}


if (!VAR1)
FUN4();

return VAR1;
}