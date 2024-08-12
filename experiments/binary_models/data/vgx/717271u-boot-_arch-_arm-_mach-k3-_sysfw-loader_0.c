static void FUN1(int VAR1, bool VAR2,
ulong VAR3, ulong VAR4)
{
int VAR5;

VAR5 = FUN2(VAR1);
if (VAR5)
FUN3("", VAR5);

if (!VAR2) {
VAR5 = FUN4(VAR1, VAR3, VAR4);
if (VAR5)
FUN3("", VAR5);
}

VAR5 = FUN5(0);
if (VAR5)
FUN3("", VAR5);
}