static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2, 1,
FUN3(1) |
VAR4);
if (VAR3)
return VAR3;

VAR3 = FUN4(VAR2, FUN5(1),
VAR5 |
FUN6(0));
if (VAR3)
return VAR3;
VAR3 = FUN7(VAR2, 1, VAR6 |
FUN8(64) | VAR7);
if (VAR3)
return VAR3;

VAR3 = FUN2(VAR2, 2,
FUN3(1) |
VAR4);
if (VAR3)
return VAR3;

VAR3 = FUN4(VAR2, FUN5(2),
VAR5 |
FUN6(2));
if (VAR3)
return VAR3;

VAR3 = FUN7(VAR2, 2, VAR6 |
FUN8(1) | VAR8);
if (VAR3)
return VAR3;

VAR3 = FUN2(VAR2, 3,
FUN3(1) |
VAR9);
if (VAR3)
return VAR3;

VAR3 = FUN4(VAR2, FUN5(3),
VAR5 |
FUN6(2));
if (VAR3)
return VAR3;

return  FUN7(VAR2, 3, VAR6 |
FUN8(64) | VAR7);
}