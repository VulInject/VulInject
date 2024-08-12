static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
void	*VAR5;
uint64_t	VAR6;
struct ishtp_msg_hdr	VAR7;
struct VAR8	*VAR9 =
(struct VAR8 *) &VAR2->VAR8;
struct VAR3	*VAR10 = VAR4;
unsigned int	VAR11;

for (VAR11 = 0; VAR11 < VAR9->VAR12;
VAR11 += sizeof(struct VAR3)) {

VAR6 = VAR4->VAR13 - VAR2->VAR14;
if (VAR6 > VAR2->VAR15) {
FUN2(VAR2->VAR16, "");
return;
}
if (VAR4->VAR17 >
VAR2->VAR15 - VAR6) {
FUN2(VAR2->VAR16, "");
return;
}
VAR5 = VAR2->VAR18 + VAR6;
FUN3(VAR2, VAR5, VAR4);
VAR4->VAR19 = VAR20;	
++VAR4;
}


FUN4(&VAR7, VAR9->VAR12);
FUN5(VAR2, &VAR7, (unsigned char *)VAR10);
}