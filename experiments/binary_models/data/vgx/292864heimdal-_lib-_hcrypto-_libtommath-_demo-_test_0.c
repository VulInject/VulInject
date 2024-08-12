static int FUN1(void)
{
if (!FUN2(VAR1)) {
FUN3();
return VAR2;
}

if (FUN2(VAR3)) {
FUN3();
return VAR2;
}

if (FUN2(VAR4)) {
FUN3();
return VAR2;
}

if (FUN2(VAR5)) {
FUN3();
return VAR2;
}

if (FUN2(VAR6)) {
FUN3();
return VAR2;
}

return VAR7;
}