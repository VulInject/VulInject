void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct bfa_rport_qos_attr_s VAR5;
struct VAR6 *VAR7 = VAR2->VAR7;
bfa_port_speed_t VAR8 = VAR2->VAR9.VAR10;
struct bfa_port_attr_s VAR11;

FUN2(VAR2->VAR12->VAR13, &VAR11);

memset(VAR4, 0, sizeof(struct VAR3));
memset(&VAR5, 0, sizeof(struct VAR14));

VAR4->VAR15 = VAR2->VAR15;
VAR4->VAR16 = VAR2->VAR16;
VAR4->VAR17 = VAR2->VAR17;
VAR4->VAR18 = VAR2->VAR19;
VAR4->VAR20 = VAR2->VAR21;
VAR4->VAR22 = FUN3(VAR2);
VAR4->VAR19 = VAR2->VAR19;
VAR4->VAR23 = VAR2->VAR23;
VAR4->VAR24 = VAR2->VAR24;
VAR4->VAR25  = VAR2->VAR9.VAR10;
VAR4->VAR26  = VAR2->VAR9.VAR26;

if (VAR2->VAR27) {
VAR5.VAR28 = VAR2->VAR27->VAR5.VAR28;
VAR5.VAR29 =
FUN4(VAR2->VAR27->VAR5.VAR29);
}
VAR4->VAR5 = VAR5;

VAR4->VAR30 = VAR31;
if (FUN5(VAR7->VAR12->VAR13) &&
(VAR2->VAR24 == VAR32)) {
if (VAR8 == VAR33)
VAR8 =
FUN6(VAR2->VAR12->VAR13);

if ((FUN7(VAR7) !=
VAR33) && (VAR8 < VAR11.VAR34))
VAR4->VAR30 = VAR35;
}
}