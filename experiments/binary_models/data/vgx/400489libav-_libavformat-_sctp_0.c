static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
int VAR9;

if (!(VAR2->VAR10 & VAR11)) {
VAR9 = FUN2(VAR7->VAR12, 0);
if (VAR9 < 0)
return VAR9;
}

if (VAR7->VAR13) {

struct sctp_sndrcvinfo VAR14 = { 0 };
VAR9 = FUN3(VAR7->VAR12, VAR4 + 2, VAR5 - 2, NULL, 0, &VAR14, 0);
FUN4(VAR4, VAR14.VAR15);
VAR9 = VAR9 < 0 ? VAR9 : VAR9 + 2;
} else
VAR9 = recv(VAR7->VAR12, VAR4, VAR5, 0);

return VAR9 < 0 ? FUN5() : VAR9;
}