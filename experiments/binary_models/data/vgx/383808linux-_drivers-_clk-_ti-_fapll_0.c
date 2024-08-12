static bool FUN1(struct VAR1 *VAR2)
{
u32 VAR3 = FUN2(VAR2->VAR4);

if (VAR2->VAR5)
return !(VAR3 & VAR6);
else
return !!(VAR3 & VAR6);
}