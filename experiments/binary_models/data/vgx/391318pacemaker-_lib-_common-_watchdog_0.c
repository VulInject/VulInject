bool
FUN1(const char *VAR1)
{
long VAR2 = VAR1? FUN2(VAR1) : 0;

if (VAR2 < 0) {
VAR2 = FUN3();
FUN4("",
VAR2, VAR1);
}

if (VAR2 == 0) {
FUN4("",
VAR1? VAR1 : "");

} else if (FUN5() == 0) {
FUN6(""
"", (VAR1? VAR1 : ""));
FUN7(VAR3);
return false;

} else {
long VAR4 = FUN8();

if (VAR2 < VAR4) {
FUN6(""
"", VAR1, VAR4);
FUN7(VAR3);
return false;
}
FUN9("",
VAR1, VAR4);
}
return true;
}