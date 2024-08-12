int FUN1(void)
{
if (!VAR1)
return 0;
if (FUN2(0, VAR2, NULL) > 0)
VAR3 = VAR2;
else if (FUN2(0, VAR4, NULL) > 0)
VAR3 = VAR4;
else
return -VAR5;
return FUN3(&VAR6);
}