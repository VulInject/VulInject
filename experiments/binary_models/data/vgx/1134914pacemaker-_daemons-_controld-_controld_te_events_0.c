static int
FUN1(gint VAR1)
{
if (VAR2 == NULL) {
VAR2 = FUN2(NULL, NULL);
}

if (FUN3(VAR2, FUN4(VAR1))) {
return VAR3;
}
return VAR4;
}