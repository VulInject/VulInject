static VAR1 FUN1(VAR2* VAR3, UINT32 VAR4)
{
VAR5* VAR6 = (VAR5*)VAR3;
FUN2("" VAR7 "", (void*)VAR6, VAR4);
FUN3(VAR6);
VAR6->VAR8 = VAR4;

if (VAR6->VAR9)
{
if (0 == VAR6->VAR8)
return FUN4(VAR6->VAR9, true);
else
{
const int VAR10 = FUN5(VAR6->VAR9);
const int VAR11 = FUN6(VAR4 & 0xFFFF, VAR10);

if (!FUN4(VAR6->VAR9, false))
return VAR12;

if (!FUN7(VAR6->VAR9, VAR11))
return VAR12;
}
}

return VAR13;
}