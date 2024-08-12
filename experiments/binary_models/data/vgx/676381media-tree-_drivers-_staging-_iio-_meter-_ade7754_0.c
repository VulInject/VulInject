static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
u8 VAR4;

VAR3 = FUN2(VAR2, VAR5, &VAR4);
if (VAR3 < 0)
return VAR3;

VAR4 |= FUN3(6); 
return FUN4(VAR2, VAR5, VAR4);
}