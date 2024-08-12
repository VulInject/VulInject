static int FUN1(struct VAR1 *VAR1, void *VAR2, int VAR3, int VAR4,
gfp_t VAR5)
{
int VAR6;

FUN2(VAR5);
FUN3(&VAR7);
VAR6 = FUN4(VAR1, VAR2, VAR3, VAR4, VAR5 & ~VAR8);
FUN5(&VAR7);
FUN6();
return VAR6;
}