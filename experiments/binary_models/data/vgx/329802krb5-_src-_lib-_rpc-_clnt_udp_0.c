VAR1 *
FUN1(
struct VAR2 *VAR3,
rpcprog_t VAR4,
rpcvers_t VAR5,
struct timeval VAR6,
int *VAR7,
u_int VAR8,
u_int VAR9)
{
VAR1 *VAR10;
struct VAR11 *VAR12 = 0;
struct timeval VAR13;
struct rpc_msg VAR14;

VAR10 = (VAR1 *)FUN2(sizeof(VAR1));
if (VAR10 == NULL) {
(void) fprintf(VAR15, "");
VAR16.VAR17 = VAR18;
VAR16.VAR19.VAR20 = VAR21;
goto VAR22;
}
VAR8 = ((VAR8 + 3) / 4) * 4;
VAR9 = ((VAR9 + 3) / 4) * 4;
VAR12 = (struct VAR11 *)FUN2(sizeof(*VAR12) + VAR8 + VAR9);
if (VAR12 == NULL) {
(void) fprintf(VAR15, "");
VAR16.VAR17 = VAR18;
VAR16.VAR19.VAR20 = VAR21;
goto VAR22;
}
VAR12->VAR23 = &VAR12->VAR24[VAR9];

(void)FUN3(&VAR13, (struct VAR25 *)0);
if (VAR3->VAR26 == 0) {
u_short VAR27;
if ((VAR27 =
FUN4(VAR3, VAR4, VAR5, VAR28)) == 0) {
goto VAR22;
}
VAR3->VAR26 = FUN5(VAR27);
}
VAR10->VAR29 = &VAR30;
VAR10->VAR31 = (VAR32)VAR12;
VAR12->VAR33 = *VAR3;
VAR12->VAR34 = sizeof (VAR12->VAR33);
VAR12->VAR35 = VAR6;
VAR12->VAR36.VAR37 = -1;
VAR12->VAR36.VAR38 = -1;
VAR12->VAR39 = VAR8;
VAR12->VAR40 = VAR9;
VAR14.VAR41 = FUN6() ^ VAR13.VAR37 ^ VAR13.VAR38;
VAR14.VAR42 = VAR43;
VAR14.VAR44.VAR45 = VAR46;
VAR14.VAR44.VAR47 = VAR4;
VAR14.VAR44.VAR48 = VAR5;
FUN7(&(VAR12->VAR49), VAR12->VAR23,
VAR8, VAR50);
if (! FUN8(&(VAR12->VAR49), &VAR14)) {
goto VAR22;
}
VAR12->VAR51 = FUN9(&(VAR12->VAR49));
if (*VAR7 < 0) {
int VAR52 = 1;

*VAR7 = socket(VAR53, VAR54, VAR28);
if (*VAR7 < 0) {
VAR16.VAR17 = VAR18;
VAR16.VAR19.VAR20 = VAR21;
goto VAR22;
}

(void)FUN10(*VAR7, NULL);

(void)FUN11(*VAR7, VAR55, (char *) &VAR52);
VAR12->VAR56 = VAR57;
} else {
VAR12->VAR56 = VAR58;
}
if (connect(*VAR7, (struct VAR59 *)VAR3, sizeof(*VAR3)) < 0)
goto VAR22;
VAR12->VAR60 = sizeof(VAR12->VAR61);
if (FUN12(*VAR7, (struct VAR59 *)&VAR12->VAR61, &VAR12->VAR60) < 0)
goto VAR22;

VAR12->VAR62 = *VAR7;
VAR10->VAR63 = FUN13();
return (VAR10);
VAR22:
if (VAR12)
FUN14((VAR32)VAR12, sizeof(*VAR12) + VAR8 + VAR9);
if (VAR10)
FUN14((VAR32)VAR10, sizeof(VAR1));
return ((VAR1 *)NULL);
}