static bool FUN1(VAR1 *VAR2)
{
u32 VAR3;

FUN2(VAR2->VAR4, VAR5, &VAR3);

if (VAR3) {
FUN3(VAR2->VAR4, VAR5,
VAR3);

FUN4(VAR2);
VAR2->VAR6 |= VAR7;
FUN5("", VAR2->VAR8);
return true;
}
return false;
}