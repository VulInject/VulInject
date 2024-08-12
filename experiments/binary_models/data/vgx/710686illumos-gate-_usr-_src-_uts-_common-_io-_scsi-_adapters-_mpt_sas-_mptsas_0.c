static void
FUN1(struct VAR1 *VAR2)
{
uint32_t	VAR3;
int		VAR4 = 0;
uint16_t	VAR5;
VAR6	*VAR7 = NULL;
mptsas_smp_t	VAR8;


(void) FUN2(VAR2);

VAR5 = VAR2->VAR9;
while (VAR2->VAR10 == 0) {
VAR3 = (VAR11 &
VAR12) | (VAR13)VAR5;
if (FUN3(VAR2, VAR3, &VAR8)
!= VAR14) {
break;
}
VAR2->VAR9 = VAR5 = VAR8.VAR15;
(void) FUN4(VAR2, &VAR8);
}


VAR5 = VAR16;
while (VAR2->VAR17 == 0) {
mptsas_enclosure_t VAR18;

VAR3 = (VAR19 &
VAR20) | (VAR13)VAR5;

if (FUN5(VAR2, VAR3, &VAR18) !=
VAR14) {
break;
}
VAR5 = VAR18.VAR21;
FUN6(VAR2, &VAR18);
}


VAR5 = VAR2->VAR22;


while (VAR2->VAR23 == 0) {
VAR7 = NULL;
VAR3 =
(VAR24 &
VAR25) |
(VAR13)VAR5;
VAR4 = FUN7(VAR2, VAR3,
&VAR5, &VAR7);
if ((VAR4 == VAR26) ||
(VAR4 == VAR27)) {
break;
}
if (VAR4 == VAR28) {
continue;
}

VAR2->VAR22 = VAR5;
}

}