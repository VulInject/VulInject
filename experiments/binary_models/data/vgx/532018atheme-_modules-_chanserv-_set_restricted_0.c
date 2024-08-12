static void
FUN1(struct VAR1 *VAR2, int VAR3, char *VAR4[])
{
struct VAR5 *VAR6;

if (!(VAR6 = FUN2(VAR4[0])))
{
FUN3(VAR2, VAR7, VAR8, VAR4[0]);
return;
}

if (!VAR4[1])
{
FUN3(VAR2, VAR9, VAR10, "");
return;
}

if (!FUN4(VAR6, VAR2, VAR11))
{
FUN3(VAR2, VAR12, VAR13);
return;
}

if (FUN5(VAR6, ""))
{
FUN3(VAR2, VAR12, VAR14, VAR4[0]);
return;
}

if (!FUN6("", VAR4[1]))
{
if (VAR15 & VAR6->VAR16)
{
FUN3(VAR2, VAR17, FUN7(""), "", VAR6->VAR18);
return;
}

FUN8(VAR2, VAR19, "", VAR6->VAR18);
FUN9(VAR6, "", FUN10(VAR2));

VAR6->VAR16 |= VAR15;

FUN11(VAR2, FUN7(""), "", VAR6->VAR18);
return;
}
else if (!FUN6("", VAR4[1]))
{
if (!(VAR15 & VAR6->VAR16))
{
FUN3(VAR2, VAR17, FUN7(""), "", VAR6->VAR18);
return;
}

FUN8(VAR2, VAR19, "", VAR6->VAR18);
FUN9(VAR6, "", FUN10(VAR2));

VAR6->VAR16 &= ~VAR15;

FUN11(VAR2, FUN7(""), "", VAR6->VAR18);
return;
}
else
{
FUN3(VAR2, VAR20, VAR21, "");
return;
}
}