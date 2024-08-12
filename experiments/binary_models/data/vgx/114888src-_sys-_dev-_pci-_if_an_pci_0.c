void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;
pci_intr_handle_t VAR9;
bus_space_handle_t VAR10;
bus_space_tag_t VAR11 = VAR8->VAR12;
pci_chipset_tag_t VAR13 = VAR8->VAR14;
const char *VAR15;


if (FUN2(VAR8, VAR16, VAR17, 0,
&VAR11, &VAR10, NULL, NULL, 0) != 0) {
FUN3("");
return;
}
VAR6->VAR18 = VAR11;
VAR6->VAR19 = VAR10;


if (FUN4(VAR8, &VAR9)) {
FUN3("", VAR6->VAR20.VAR21);
return;
}
VAR15 = FUN5(VAR13, VAR9);
VAR6->VAR22 = FUN6(VAR13, VAR9, VAR23, VAR24, VAR6,
VAR6->VAR20.VAR21);
if (VAR6->VAR22 == NULL) {
FUN3("",
VAR6->VAR20.VAR21);
if (VAR15 != NULL)
FUN3("", VAR15);
FUN3("");
return;
}
FUN3("", VAR15);

VAR6->VAR25 = 1;

FUN7(VAR6);
}