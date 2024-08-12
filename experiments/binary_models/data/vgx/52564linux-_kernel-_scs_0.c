int FUN1(struct VAR1 *VAR2, int VAR3)
{
void *VAR4;

if (!FUN2())
return 0;

VAR4 = FUN3(VAR3);
if (!VAR4)
return -VAR5;

FUN4(VAR2) = FUN5(VAR2) = VAR4;
return 0;
}