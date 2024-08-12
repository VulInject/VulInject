void *
FUN1(struct VAR1 *VAR2, size_t VAR3)
{
void *VAR4;
FUN2(VAR2, VAR3);
VAR4 = FUN3(VAR2);
FUN4(VAR2, FUN5(VAR2) + VAR3);
return VAR4;
}