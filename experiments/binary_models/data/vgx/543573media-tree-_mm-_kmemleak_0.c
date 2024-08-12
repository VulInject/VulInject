static int FUN1(void)
{
if (!VAR1)
return 1;


if (VAR2->VAR3)
return FUN2(VAR2);
else
return FUN3();

return 0;
}