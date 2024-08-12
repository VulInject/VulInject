int
FUN1(VAR1 *VAR2,
VAR3 *VAR4, VAR5 *VAR6)
{

if (FUN2(VAR4, VAR6) != 0)
goto VAR7;


if (FUN3(VAR6, VAR8,
VAR9) != 0)
goto VAR7;


if (FUN3(VAR6, VAR10,
VAR11) != 0)
goto VAR7;

if (VAR2->VAR12[0] != '') {
if (FUN4(VAR6,
VAR13, VAR2->VAR12) != 0)
return 1;
}
return 0;
VAR7:
return 1;
}