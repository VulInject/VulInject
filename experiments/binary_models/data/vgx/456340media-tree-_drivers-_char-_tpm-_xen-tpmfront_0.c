static void FUN1(struct VAR1 *VAR2)
{
if (!VAR2)
return;

if (VAR2->VAR3)
FUN2(VAR2->VAR3, 0,
(unsigned long)VAR2->VAR4);
else
FUN3((unsigned long)VAR2->VAR4);

if (VAR2->VAR5)
FUN4(VAR2->VAR5, VAR2);

FUN5(VAR2);
}