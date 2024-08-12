const char*
FUN1(const VAR1* VAR2, int VAR3)
{
if (VAR3 < 0 || VAR3 >= FUN2(VAR2))
return NULL;
return *(char**)FUN3(VAR2->VAR4, VAR3);
}