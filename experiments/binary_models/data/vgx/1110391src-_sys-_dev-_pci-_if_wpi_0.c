void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = VAR2->VAR9;
struct VAR10 *VAR11 = (void *)VAR4;
struct wpi_node_info VAR12;

if ((VAR6->VAR13 & VAR14) ||
VAR6->VAR15 != VAR16) {

FUN2(VAR2, VAR4, VAR6);
return;
}
if (VAR2->VAR17 != VAR18)
return;	
memset(&VAR12, 0, sizeof VAR12);
VAR12.VAR19 = VAR11->VAR19;
VAR12.VAR20 = VAR21;
VAR12.VAR22 = VAR23;
VAR12.VAR24 = 0;
FUN3(("", VAR12.VAR19));
(void)FUN4(VAR8, VAR25, &VAR12, sizeof VAR12, 1);
}