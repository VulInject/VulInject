static void
FUN1(struct VAR1* VAR2)
{
FUN2(FUN3(VAR2)->VAR2);

FUN2(FUN3(VAR2)->VAR2);
free(FUN3(VAR2));
}