static void *FUN1(phys_addr_t VAR1, size_t VAR2,
unsigned int VAR3, char *VAR4)
{
void *VAR5;

if (!FUN2(VAR1, VAR2, VAR4 ?: "")) {
FUN3("",
VAR4 ?: "",
(unsigned long long)VAR2, (unsigned long long)VAR1);
return NULL;
}

if (VAR3)
VAR5 = FUN4(VAR1, VAR2);
else
VAR5 = FUN5(VAR1, VAR2);


return VAR5;
}