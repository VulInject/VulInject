bool FUN1(void)
{
if (!FUN2())
return false;


if (FUN3() || FUN4())
return true;


if (VAR1 == 0)
return false;

if (VAR1 & VAR2)
return false;

if (VAR1 & VAR3)
return true;


if (VAR1 & VAR4)
return true;


return false;
}