static int FUN1(QVA_t VAR1, rpmts VAR2, rpmgi VAR3)
{
int VAR4 = 0;
Header VAR5;

while ((VAR5 = FUN2(VAR3)) != NULL) {
int VAR6;

if ((VAR6 = VAR1->FUN3(VAR1, VAR2, VAR5)) != 0)
VAR4 = VAR6;
FUN4(VAR5);
}
return VAR4 + FUN5(VAR3);
}