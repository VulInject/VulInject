void
FUN1(int VAR1, short VAR2, void *VAR3)
{
union {
struct	cmsghdr VAR4;
char	VAR5[FUN2(VAR6)];
} VAR7;
struct msghdr		 VAR8;
struct sockaddr_storage	 VAR9;
struct iovec		 VAR10;
char			*VAR5;
struct VAR11		*VAR12;
ssize_t			 VAR13;
int			 VAR14;
int			 VAR15;
union ldpd_addr		 VAR16;
unsigned int		 VAR17 = 0;
struct VAR18		*VAR18;
uint16_t		 VAR19;
struct ldp_hdr		 VAR20;
uint16_t		 VAR21;
struct ldp_msg		 VAR22;
uint16_t		 VAR23;
struct in_addr		 VAR24;

if (VAR2 != VAR25)
return;

if (VAR26 == NULL)
if ((VAR26 = malloc(VAR27)) == NULL)
FUN3(VAR28);


memset(&VAR8, 0, sizeof(VAR8));
VAR10.VAR29 = VAR5 = VAR26;
VAR10.VAR30 = VAR27;
VAR8.VAR31 = &VAR9;
VAR8.VAR32 = sizeof(VAR9);
VAR8.VAR33 = &VAR10;
VAR8.VAR34 = 1;
VAR8.VAR35 = &VAR7.VAR5;
VAR8.VAR36 = sizeof(VAR7.VAR5);

if ((VAR13 = FUN4(VAR1, &VAR8, 0)) == -1) {
if (VAR37 != VAR38 && VAR37 != VAR39)
FUN5("", VAR28,
strerror(VAR37));
return;
}

VAR14 = (VAR8.VAR40 & VAR41) ? 1 : 0;
FUN6((struct VAR42 *)&VAR9, &VAR15, &VAR16);
if (FUN7(VAR15, &VAR16)) {
FUN5("", VAR28,
FUN8(VAR15, &VAR16));
return;
}

for (VAR12 = FUN9(&VAR8); VAR12 != NULL;
VAR12 = FUN10(&VAR8, VAR12)) {
if (VAR15 == VAR43 && VAR12->VAR44 == VAR45 &&
VAR12->VAR46 == VAR47) {
VAR17 = ((struct VAR48 *)
FUN11(VAR12))->VAR49;
break;
}
if (VAR15 == VAR50 && VAR12->VAR44 == VAR51 &&
VAR12->VAR46 == VAR52) {
VAR17 = ((struct VAR53 *)
FUN11(VAR12))->VAR54;
break;
}
}


VAR18 = FUN12(VAR17, VAR15, &VAR16, VAR14);
if (VAR18 == NULL)
return;


VAR19 = (VAR55)VAR13;
if (VAR19 < (VAR56 + VAR57) || VAR19 > VAR58) {
FUN5("", VAR28,
FUN8(VAR15, &VAR16));
return;
}


memcpy(&VAR20, VAR5, sizeof(VAR20));
if (FUN13(VAR20.VAR59) != VAR60) {
FUN5("", VAR28,
FUN13(VAR20.VAR59), FUN8(VAR15, &VAR16));
return;
}
if (FUN13(VAR20.VAR61) != 0) {
FUN5("", VAR28,
FUN13(VAR20.VAR61), FUN8(VAR15, &VAR16));
return;
}

VAR21 = FUN13(VAR20.VAR62);
if ((VAR21 < (VAR63 + VAR57)) ||
(VAR21 > (VAR19 - VAR64))) {
FUN5("",
VAR28, FUN13(VAR20.VAR62), FUN8(VAR15, &VAR16));
return;
}
VAR5 += VAR56;
VAR19 -= VAR56;

VAR24.VAR65 = VAR20.VAR24;


memcpy(&VAR22, VAR5, sizeof(VAR22));


VAR23 = FUN13(VAR22.VAR62);
if (VAR23 < VAR66 || ((VAR23 + VAR67) > VAR21)) {
FUN5("",
VAR28, FUN13(VAR22.VAR62), FUN8(VAR15, &VAR16));
return;
}
VAR5 += VAR57;
VAR19 -= VAR57;


switch (FUN13(VAR22.VAR68)) {
case VAR69:
FUN14(VAR24, &VAR22, VAR15, &VAR16, VAR18, VAR14, VAR5, VAR19);
break;
default:
FUN5("", VAR28,
FUN8(VAR15, &VAR16));
}
}