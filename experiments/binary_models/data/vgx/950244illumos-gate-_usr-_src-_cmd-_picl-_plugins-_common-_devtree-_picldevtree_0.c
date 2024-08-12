static int
FUN1(picl_nodehdl_t VAR1)
{
picl_nodehdl_t		VAR2;
int			VAR3;
char			VAR4[VAR5];
char			VAR6[VAR7];
int			VAR8;
int			VAR9;
ffb_sys_info_t		VAR10;
ptree_propinfo_t	VAR11;

for (VAR3 = FUN2(VAR1, VAR12, &VAR2,
sizeof (VAR13)); VAR3 != VAR14;
VAR3 = FUN2(VAR2, VAR15,
&VAR2, sizeof (VAR13))) {

if (VAR3 != VAR16)
return (VAR3);

VAR3 = FUN2(VAR2, VAR17,
VAR4, VAR5);

if ((VAR3 == VAR16) &&
(strcmp(VAR4, VAR18) == 0)) {

VAR3 = FUN3(VAR2, &VAR8);
if ((VAR3 == VAR16) &&
(FUN4(VAR8, VAR19, &VAR10) >= 0)) {
(void) FUN5(&VAR11,
VAR20,
VAR21, VAR22,
sizeof (int), VAR23,
NULL, NULL);
VAR9 = VAR10.VAR24.VAR25.VAR9;
(void) FUN6(VAR2, &VAR11,
&VAR9, NULL);

FUN7(VAR10.VAR26,
sizeof (VAR6), VAR6);
(void) FUN5(&VAR11,
VAR20,
VAR27, VAR22,
strlen(VAR6) + 1,
VAR28, NULL, NULL);
(void) FUN6(VAR2, &VAR11,
VAR6, NULL);

FUN7(VAR10.VAR29,
sizeof (VAR6), VAR6);
(void) FUN5(&VAR11,
VAR20,
VAR27, VAR22,
strlen(VAR6) + 1,
VAR30, NULL,
NULL);
(void) FUN6(VAR2, &VAR11,
VAR6, NULL);
(void) close(VAR8);
}
} else if (FUN1(VAR2) != VAR16)
return (VAR31);
}
return (VAR16);
}