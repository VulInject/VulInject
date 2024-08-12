static VAR1 FUN1(VAR2* VAR3, VAR4* VAR5)
{
UINT VAR6;

switch (VAR5->VAR7)
{
case VAR8:
if ((VAR6 = FUN2(VAR3, VAR5)))
{
FUN3(VAR9, "" VAR10 "", VAR6);
return VAR6;
}

break;

case VAR11:
if ((VAR6 = FUN4(VAR3, VAR5)))
{
FUN3(VAR9, "" VAR10 "", VAR6);
return VAR6;
}

break;

case VAR12:
if ((VAR6 = FUN5(VAR3, VAR5)))
{
FUN3(VAR9, "" VAR10 "", VAR6);
return VAR6;
}

break;

case VAR13:
if ((VAR6 = FUN6(VAR3, VAR5)))
{
FUN3(VAR9, "" VAR10 "", VAR6);
return VAR6;
}

break;

case VAR14:
if ((VAR6 = FUN7(VAR3, VAR5)))
{
FUN3(VAR9, "" VAR10 "",
VAR6);
return VAR6;
}

break;

default:
VAR5->VAR15 = VAR16;
return VAR5->FUN8(VAR5);
}

return VAR17;
}