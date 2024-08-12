bool FUN1(struct VAR1 *VAR2, void *VAR3, size_t VAR4)
{
struct VAR5 *VAR6 = NULL;

while ((VAR6 = FUN2(VAR6, 0))) {
if (!FUN3(VAR6, (unsigned long)VAR3, VAR4))
continue;
FUN4(VAR6, (unsigned long)VAR3, VAR4);
return true;
}

return false;
}