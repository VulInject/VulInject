VAR1* FUN1(VAR2* VAR3, size_t VAR4)
{
VAR1* VAR5;
FUN2(VAR3);

if (!(VAR5 = FUN3(VAR3->VAR6, VAR4)))
return NULL;

if (!FUN4(VAR5, VAR4))
{
FUN5(VAR5);
return NULL;
}

FUN6(VAR5, 0);
return VAR5;
}