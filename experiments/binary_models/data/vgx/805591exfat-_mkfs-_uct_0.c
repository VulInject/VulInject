static int FUN1(struct VAR1* VAR2)
{
if (FUN2(VAR2, VAR3, sizeof(VAR3)) < 0)
{
FUN3("",
sizeof(VAR3));
return 1;
}
return 0;
}