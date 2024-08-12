int FUN1(void)
{
if (!FUN2())
return -1;
if (FUN3(VAR1, sizeof(VAR1)) != 1)
return -1;
VAR2 = 1;

return 0;
}