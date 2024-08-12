static void
FUN1(VAR1* VAR2,
VAR3* VAR4,
gpointer VAR5)
{
InfTcpConnectionStatus VAR6;
VAR7* VAR8;
guint VAR9;
VAR10* VAR11;
VAR12* VAR13;
VAR12* VAR14;

FUN2(
FUN3(VAR2),
"", &VAR6,
"", &VAR8,
"", &VAR9,
"", &VAR11,
NULL
);

if(VAR8 != NULL)
{
VAR13 = FUN4(VAR8);
VAR14 = FUN5("", VAR13, VAR9);
FUN6(VAR13);
}
else
{
FUN2(FUN3(VAR11), "", &VAR14, NULL);
}

if(VAR8 != NULL)
FUN7(VAR8);
if(VAR11 != NULL)
FUN8(VAR11);

switch(VAR6)
{
case VAR15:
FUN9("", VAR14);
break;
case VAR16:
FUN9("", VAR14);

FUN2(
FUN3(VAR2),
"", &VAR8,
"", &VAR9,
NULL
);

FUN6(VAR14);
VAR14 = FUN4(VAR8);
FUN7(VAR8);

FUN9("", VAR14, VAR9);
FUN10(VAR2, "", 14);
break;
case VAR17:
FUN9("", VAR14);
if(FUN11(FUN12(VAR5)))
FUN13(FUN12(VAR5));
break;
default:
FUN14();
break;
}

FUN6(VAR14);
}