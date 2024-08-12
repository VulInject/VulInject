FUN1 (struct VAR1 *VAR2)
{
int VAR3;
struct ifreq VAR4;
struct ifmediareq VAR5;

FUN2 (&VAR4, VAR2);

VAR3 = FUN3 (VAR6, (VAR7) &VAR4);
if (VAR3 < 0) 
{
FUN4("", FUN5(VAR8));
return;
}


FUN6(VAR4.VAR9, VAR10);

if (FUN7 (VAR2->VAR11, VAR12))
{
(void) memset(&VAR5, 0, sizeof(VAR5));
strncpy (VAR5.VAR13, VAR2->VAR14, VAR15);


if (FUN3(VAR16, (VAR7) &VAR5) < 0)
FUN4("", FUN5(VAR8));
else if (VAR5.VAR17 & VAR18) 
{
if (VAR5.VAR17 & VAR19)
FUN6(VAR4.VAR9, VAR10);
else
FUN8(VAR4.VAR9, VAR10);
}
}

FUN9 (VAR2, (VAR4.VAR9 & 0x0000ffff));
}