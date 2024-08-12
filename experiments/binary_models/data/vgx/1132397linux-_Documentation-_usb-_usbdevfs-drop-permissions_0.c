void FUN1(int VAR1)
{
int VAR2;

VAR2 = FUN2(VAR1, VAR3);
if (!VAR2)
FUN3("");
else
FUN3("",
-VAR2, strerror(-VAR2));
}