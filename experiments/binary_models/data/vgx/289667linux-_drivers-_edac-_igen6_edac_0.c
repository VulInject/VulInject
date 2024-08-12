static bool FUN1(struct VAR1 *VAR2)
{
u32 VAR3;

if (FUN2(VAR2, VAR4, &VAR3))
return false;

return !(VAR5 & VAR3);
}