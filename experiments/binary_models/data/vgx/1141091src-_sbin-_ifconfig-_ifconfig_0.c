void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct	in6_ifreq VAR5;		
u_int32_t VAR6;
char VAR7[VAR8];
const int VAR9 = VAR10;


FUN2(VAR11);
if (VAR12 == -1) {
if (VAR13 == VAR14)
return;
FUN3(1, "");
}

VAR4 = (struct VAR3 *)&VAR2->VAR15;

FUN4(VAR4);
VAR6 = VAR4->VAR16;
if (getnameinfo((struct VAR17 *)VAR4, VAR4->VAR18,
VAR7, sizeof(VAR7), NULL, 0, VAR9) != 0)
FUN5(VAR7, "", sizeof VAR7);
FUN6("", VAR7);

if (VAR19 & VAR20) {
(void) memset(&VAR5, 0, sizeof(VAR5));
(void) FUN5(VAR5.VAR21, VAR22, sizeof(VAR5.VAR21));
VAR5.VAR15 = VAR2->VAR15;
if (FUN7(VAR12, VAR23, (VAR24)&VAR5) == -1) {
if (VAR13 != VAR25)
FUN8("");
(void) memset(&VAR5.VAR15, 0, sizeof(VAR5.VAR15));
VAR5.VAR15.VAR26 = VAR11;
VAR5.VAR15.VAR18 = sizeof(struct VAR3);
}
VAR4 = (struct VAR3 *)&VAR5.VAR15;
FUN4(VAR4);
if (getnameinfo((struct VAR17 *)VAR4, VAR4->VAR18,
VAR7, sizeof(VAR7), NULL, 0, VAR9) != 0)
FUN5(VAR7, "", sizeof VAR7);
FUN6("", VAR7);
}

(void) memset(&VAR5, 0, sizeof(VAR5));
(void) FUN5(VAR5.VAR21, VAR22, sizeof(VAR5.VAR21));
VAR5.VAR15 = VAR2->VAR15;
if (FUN7(VAR12, VAR27, (VAR24)&VAR5) == -1) {
if (VAR13 != VAR25)
FUN8("");
} else {
VAR4 = (struct VAR3 *)&VAR5.VAR15;
FUN6("", FUN9(&VAR4->VAR28,
sizeof(struct VAR29)));
}

(void) memset(&VAR5, 0, sizeof(VAR5));
(void) FUN5(VAR5.VAR21, VAR22, sizeof(VAR5.VAR21));
VAR5.VAR15 = VAR2->VAR15;
if (FUN7(VAR12, VAR30, (VAR24)&VAR5) == -1) {
if (VAR13 != VAR25)
FUN8("");
} else {
if (VAR5.VAR31.VAR32 & VAR33)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR34)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR35)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR36)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR37)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR38)
FUN6("");
if (VAR5.VAR31.VAR32 & VAR39)
FUN6("");
}

if (VAR6)
FUN6("", VAR6);

if (VAR40) {
struct VAR41 *VAR42;

(void) memset(&VAR5, 0, sizeof(VAR5));
(void) FUN5(VAR5.VAR21, VAR22, sizeof(VAR5.VAR21));
VAR5.VAR15 = VAR2->VAR15;
VAR42 = &VAR5.VAR31.VAR43;
if (FUN7(VAR12, VAR44, (VAR24)&VAR5) == -1) {
if (VAR13 != VAR25)
FUN8("");
} else if (VAR42->VAR45 || VAR42->VAR46) {
time_t VAR47 = FUN10(NULL);

FUN6("");
if (VAR42->VAR45) {
FUN6("", VAR42->VAR45 < VAR47
? "" :
FUN11(VAR42->VAR45 - VAR47));
} else
FUN6("");

FUN6("");
if (VAR42->VAR46) {
FUN6("", VAR42->VAR46 < VAR47
? ""
: FUN11(VAR42->VAR46 - VAR47));
} else
FUN6("");
}
}

FUN6("");
}