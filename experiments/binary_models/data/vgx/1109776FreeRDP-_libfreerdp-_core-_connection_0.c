VAR1 FUN1(VAR2* VAR3, VAR4* VAR5)
{
size_t VAR6;
UINT16 VAR7;
UINT16 VAR8;

FUN2(VAR3);
FUN2(VAR3->VAR9);

const UINT16 VAR10 = VAR3->VAR9->VAR10;

if (VAR10 != 0)
{

VAR6 = FUN3(VAR5);

if (FUN4(VAR3, VAR5, &VAR7, &VAR8))
{
if (VAR8 == VAR10)
{
UINT16 VAR11 = 0;

if (!FUN5(VAR5, &VAR11, &VAR7))
return VAR12;

if (VAR11 & VAR13)
{
if (!FUN6(VAR3, VAR5, &VAR7, VAR11))
return VAR12;
}

if (FUN7(VAR3, VAR5, VAR11) == VAR14)
return FUN8(VAR5, VAR7);
}
}
else
FUN9(VAR15, "" VAR16 "" VAR16, VAR10,
VAR8);

FUN10(VAR5, VAR6);
}
else
FUN9(VAR15, "");

return VAR12;
}