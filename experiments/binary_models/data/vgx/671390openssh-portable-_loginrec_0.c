static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct utmp VAR5;
register int VAR6;
int VAR7;



struct VAR8 *VAR9;

VAR7=0;
FUN2();
while (NULL != (VAR9 = FUN3())) {
VAR7++;
if (!FUN4(VAR9->VAR10, VAR4->VAR11, sizeof(VAR4->VAR11)))
break;
}
FUN5();

if (NULL == VAR9) {
FUN6("", VAR12);
return (0);
}

VAR7 = FUN7(); 


if (VAR7 > 0 && (VAR6 = open(VAR13, VAR14|VAR15, 0644)) >= 0) {
off_t VAR16, VAR17;

VAR16 = (VAR18)VAR7 * sizeof(struct VAR3);
if ((VAR17 = FUN8(VAR6, VAR16, VAR19)) == -1) {
FUN6("", VAR12, strerror(VAR20));
close(VAR6);
return (0);
}
if (VAR17 != VAR16) {
FUN6("",
VAR12, VAR7, VAR13);
close(VAR6);
return (0);
}

if (FUN9(read, VAR6, &VAR5, sizeof(VAR5)) == sizeof(VAR5) &&
(VAR4->VAR21[0] == '') && (VAR5.VAR21[0] != '') &&
(FUN4(VAR5.VAR11, VAR4->VAR11, sizeof(VAR4->VAR11)) == 0) &&
(FUN4(VAR5.VAR22, VAR4->VAR22, sizeof(VAR4->VAR22)) == 0))
memcpy(VAR4->VAR21, VAR5.VAR21, sizeof(VAR4->VAR21));

if ((VAR17 = FUN8(VAR6, VAR16, VAR19)) == -1) {
FUN6("", VAR12, strerror(VAR20));
close(VAR6);
return (0);
}
if (VAR17 != VAR16) {
FUN6("",
VAR12, VAR7, VAR13);
close(VAR6);
return (0);
}
if (FUN9(VAR23, VAR6, VAR4, sizeof(*VAR4)) != sizeof(*VAR4)) {
FUN6("", VAR12,
VAR13, strerror(VAR20));
close(VAR6);
return (0);
}

close(VAR6);
return (1);
} else {
return (0);
}
}