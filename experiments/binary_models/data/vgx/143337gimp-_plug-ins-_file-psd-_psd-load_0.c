FUN1 (VAR1      *VAR2,
VAR3  *VAR4,
VAR5       **VAR6)
{
static guchar VAR7[]    = { 0, 0, 0, 255, 255, 255 };
guint32       VAR8 = 0;

VAR2->VAR9 = 0;
VAR2->VAR10 = 0;
if (FUN2 (VAR4, &VAR8, 4, VAR6) < 4)
{
FUN3 (VAR6);
return -1;
}
VAR8 = FUN4 (VAR8);

FUN5(1) FUN6 ("", VAR8);

if (VAR8 == 0)
{
if (VAR2->VAR11 == VAR12 ||
VAR2->VAR11 == VAR13 )
{
FUN5(1) FUN6 ("");
FUN7 (VAR6, VAR14, VAR15,
FUN8(""));
return -1;
}
}
else if (VAR2->VAR11 == VAR12)
{
if (VAR8 != 768)
{
FUN5(1) FUN6 ("");
FUN7 (VAR6, VAR14, VAR15,
FUN8(""));
return -1;
}
else
{
VAR2->VAR10 = VAR8;
VAR2->VAR16 = FUN9 (VAR2->VAR10);
if (FUN2 (VAR4, VAR2->VAR16, VAR8, VAR6) < VAR8)
{
FUN3 (VAR6);
return -1;
}
else
{
FUN10 (VAR2->VAR16);
VAR2->VAR9 = 256;
}
}
}
else if (VAR2->VAR11 == VAR13)
{
VAR2->VAR10 = VAR8;
VAR2->VAR16 = FUN9 (VAR2->VAR10);
if (FUN2 (VAR4, VAR2->VAR16, VAR8, VAR6) < VAR8)
{
FUN3 (VAR6);
return -1;
}
}
else
{

if (! FUN11 (VAR4, VAR8, VAR17, VAR6))
{
FUN3 (VAR6);
return -1;
}
}


if (VAR2->VAR11 == VAR18)
{
VAR2->VAR10 = 6;
VAR2->VAR16 = FUN9 (VAR2->VAR10);
memcpy (VAR2->VAR16, VAR7, VAR2->VAR10);
VAR2->VAR9 = 2;
}
FUN5(2) FUN6 ("", VAR2->VAR10);

return 0;
}