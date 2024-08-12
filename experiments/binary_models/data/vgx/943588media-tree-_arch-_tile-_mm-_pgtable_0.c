void FUN1(volatile void VAR1 *VAR2)
{
volatile void VAR1 *VAR3 = (volatile void VAR1 *)
(VAR4 & (unsigned long VAR5)VAR2);
FUN2((void * VAR5)VAR3);

struct VAR6 *VAR7, *VAR8;


VAR7 = FUN3((void *)VAR3);

if (!VAR7) {
FUN4("", VAR3);
FUN5();
return;
}


VAR8 = FUN6((void *)VAR3);
FUN7(VAR7 != VAR8 || VAR8 == NULL);
FUN8(VAR7);
}