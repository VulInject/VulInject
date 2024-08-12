void FUN1(unsigned int VAR1)
{
FUN2("", VAR1);
}

atomic_t VAR2;

int FUN3(struct VAR3 *VAR4, int VAR5)
{
FUN4(VAR4, "", VAR5, "", FUN5(&VAR2));
return 0;
}