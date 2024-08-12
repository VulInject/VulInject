static int
FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4)
{
struct efc_clock VAR5 = {0};
int VAR6;


if ((VAR3 == VAR7) && (VAR4 == VAR7)) {
VAR6 = -VAR8;
goto VAR9;
}


VAR6 = FUN2(VAR2, &VAR5);
if (VAR6 < 0)
goto VAR9;


if ((VAR5.VAR3 == VAR3) && (VAR5.VAR10 == VAR4))
goto VAR9;


if ((VAR3 != VAR7) && (VAR5.VAR3 != VAR3))
VAR5.VAR3 = VAR3;
if ((VAR4 != VAR7) && (VAR5.VAR10 != VAR4))
VAR5.VAR10 = VAR4;
VAR5.VAR11 = 0;

FUN3(&VAR5.VAR3);
FUN3(&VAR5.VAR10);
FUN3(&VAR5.VAR11);

VAR6 = FUN4(VAR2, VAR12,
VAR13,
(VAR14 *)&VAR5, sizeof(struct VAR15),
NULL, 0);
if (VAR6 < 0)
goto VAR9;


FUN5(150);
VAR9:
return VAR6;
}