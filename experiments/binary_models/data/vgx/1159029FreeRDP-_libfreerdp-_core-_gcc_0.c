static VAR1 FUN1(VAR2* VAR3, UINT32 VAR4,
UINT32 VAR5)
{
FUN2(VAR3);

VAR3->VAR6 =
VAR3->VAR6 &&
(VAR4 & VAR7)
? VAR8
: VAR9;
VAR3->VAR10 =
VAR3->VAR10 && (VAR4 & VAR11)
? VAR8
: VAR9;
VAR3->VAR12 =
VAR3->VAR12 &&
(VAR4 & VAR13)
? VAR8
: VAR9;
VAR3->VAR14 =
VAR3->VAR14 &&
(VAR4 & VAR15)
? VAR8
: VAR9;

FUN3(VAR4);
return VAR8;
}