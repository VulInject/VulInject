static int FUN1(void)
{
if (VAR1.VAR2 != 1) {
FUN2(""
"");
return -1;
}

if (VAR3.VAR2 != 1) {
FUN2(""
"");
return -1;
}

if (VAR4.VAR2 != 1) {
FUN2(""
"");
return -1;
}

VAR5 = (VAR6*)FUN3(sizeof(VAR6));
if (!VAR5) {
FUN2("");
return -1;
}

*VAR5 = FUN4(0);
VAR7 = *VAR5;

return FUN5();
}