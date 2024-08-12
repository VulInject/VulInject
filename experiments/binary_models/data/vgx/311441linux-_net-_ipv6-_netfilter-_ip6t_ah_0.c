static bool FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct ip_auth_hdr VAR5;
const struct VAR6 *VAR7;
const struct VAR8 *VAR9 = VAR4->VAR10;
unsigned int VAR11 = 0;
unsigned int VAR12 = 0;
int VAR13;

VAR13 = FUN2(VAR2, &VAR11, VAR14, NULL, NULL);
if (VAR13 < 0) {
if (VAR13 != -VAR15)
VAR4->VAR16 = true;
return false;
}

VAR7 = FUN3(VAR2, VAR11, sizeof(VAR5), &VAR5);
if (VAR7 == NULL) {
VAR4->VAR16 = true;
return false;
}

VAR12 = FUN4(VAR7);

FUN5("", VAR12, VAR7->VAR12);
FUN5("", VAR7->VAR17);
FUN5("", FUN6(VAR7->VAR18), FUN6(VAR7->VAR18));

FUN5("",
FUN7(VAR9->VAR19[0], VAR9->VAR19[1],
FUN6(VAR7->VAR18),
!!(VAR9->VAR20 & VAR21)));
FUN5("",
VAR9->VAR12, VAR12,
(!VAR9->VAR12 ||
(VAR9->VAR12 == VAR12) ^
!!(VAR9->VAR20 & VAR22)));
FUN5("",
VAR9->VAR23, VAR7->VAR17,
!(VAR9->VAR23 && VAR7->VAR17));

return FUN7(VAR9->VAR19[0], VAR9->VAR19[1],
FUN6(VAR7->VAR18),
!!(VAR9->VAR20 & VAR21)) &&
(!VAR9->VAR12 ||
(VAR9->VAR12 == VAR12) ^
!!(VAR9->VAR20 & VAR22)) &&
!(VAR9->VAR23 && VAR7->VAR17);
}