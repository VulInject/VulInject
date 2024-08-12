static VAR1 FUN1(VAR2* update, VAR3* VAR4)
{
SURFACE_FRAME_MARKER VAR5 = { 0 };
VAR6* VAR7 = FUN2(update);

FUN3(VAR4);

if (!FUN4(VAR8, VAR4, 2))
return VAR9;

FUN5(VAR4, VAR5.VAR10);
if (!FUN4(VAR8, VAR4, 4))
FUN6(VAR8,
"" VAR11 "" VAR11
""
"",
FUN7(VAR4), 4);
else
FUN8(VAR4, VAR5.VAR12);
FUN9(VAR7->VAR13, VAR14, "" VAR15 "" VAR15 "",
(!VAR5.VAR10) ? "" : "", VAR5.VAR10, VAR5.VAR12);

if (!update->VAR16)
{
FUN3(update->VAR17);
if (FUN10(update->VAR17->VAR18, VAR19))
return VAR20;
FUN11(VAR8, "");
return VAR9;
}

if (!update->FUN12(update->VAR17, &VAR5))
{
FUN13(VAR8, "");
return VAR9;
}

return VAR20;
}