FUN1 (VAR1 *VAR2,
VAR3        *VAR4)
{
FUN2 (VAR5) VAR6 = NULL;
FUN2 (VAR3) VAR7 = NULL;
FUN2 (VAR1) VAR8 = NULL;
gboolean VAR9;
gboolean VAR10;

FUN3 (FUN4 (VAR2), 0);

FUN3 (VAR4 == NULL || FUN5 (VAR4), 0);

VAR7 = FUN6 (VAR2);
if (VAR4 != NULL && FUN7 (VAR7, VAR4))
{
return 0;
}


VAR6 = FUN8 (VAR2);

if (FUN9 () &&
FUN10 (VAR2))
{
return VAR11;
}
else if (FUN11 (VAR2))
{
if (FUN12 (FUN13 (), VAR4))
{
return VAR11;
}
else
{
return 0;
}
}
else if (!FUN14 (VAR2) ||
!FUN15 (VAR2) ||
!FUN16 (VAR6))
{

return 0;
}
else if (FUN17 (VAR2))
{
return VAR12;
}

if (VAR4 == NULL)
{
return VAR11;
}

if (FUN18 (VAR4, ""))
{
return VAR12;
}

VAR8 = FUN19 (VAR4);
VAR9 = FUN20 (VAR2, VAR8);
VAR10 = FUN21 (VAR4);
if (VAR9 && VAR10)
{
return VAR12;
}

return VAR11;
}