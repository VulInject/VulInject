void
FUN1(p_rx_sw_packet_t VAR1)
{
VAR2 *VAR3;
VAR4 *VAR5;
struct VAR6 *VAR7;
uint32_t VAR8;
uint32_t VAR9;
unsigned char *VAR10;

if (VAR1->VAR9 == 0) {

return;
}

VAR3 = (VAR2 *)(VAR11)VAR1->VAR3;

if (VAR1->VAR12 == NULL) {

VAR10 = (unsigned char *)VAR1->VAR13->VAR10;
if (VAR10 != NULL) {
VAR1->VAR12 = FUN2((unsigned char *)
VAR10, VAR1->VAR13->VAR14,
VAR15, &VAR1->VAR16);
}
}


FUN3(&VAR3->VAR17);
FUN4(&VAR3->VAR18, &VAR1->VAR19);
VAR3->VAR20++;
FUN5(&VAR3->VAR17);

VAR9 = FUN6(&VAR1->VAR9);
if (VAR9 == 0) {
FUN3(&VAR21);
FUN7(VAR1, VAR22);

FUN8(&VAR3->VAR23);
FUN8(&VAR24);

if ((VAR3->VAR23 == 0) &&
(VAR3->VAR25 & VAR26)) {
VAR5 = VAR3->VAR27;

if (VAR5 != NULL) {
VAR8 = FUN6(
&VAR5->VAR28);
if ((VAR8 == 0) &&
(VAR5->VAR25 &
VAR29)) {
FUN9(
VAR5);
}
} else {
VAR7 = VAR3->VAR30->VAR31;
FUN8(
&VAR7->VAR28);
}

FUN10(VAR3);
FUN11(VAR3);
}
FUN5(&VAR21);
}
}