int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
u8 VAR4;
int VAR5;

VAR5 = FUN2(VAR2, VAR6, VAR3, &VAR4, 1);
FUN3(VAR5 == 0);

FUN4(VAR2, VAR6, VAR3, &VAR4, VAR5);

return VAR5 < 0 ? VAR5 : 0;
}