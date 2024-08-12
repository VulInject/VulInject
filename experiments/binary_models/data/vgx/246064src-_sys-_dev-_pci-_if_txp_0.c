void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7 *VAR8 = VAR4;
pci_chipset_tag_t VAR9 = VAR8->VAR10;
pci_intr_handle_t VAR11;
const char *VAR12 = NULL;
bus_size_t VAR13;

VAR6->VAR14 = 1;

if (FUN2(VAR8, VAR15, VAR16, 0,
&VAR6->VAR17, &VAR6->VAR18, NULL, &VAR13, 0)) {
FUN3("", 0);
return;
}

VAR6->VAR19 = VAR8->VAR20;


if (FUN4(VAR8, &VAR11)) {
FUN3("");
return;
}

VAR12 = FUN5(VAR9, VAR11);
VAR6->VAR21 = FUN6(VAR9, VAR11, VAR22, VAR23, VAR6,
VAR3->VAR24);
if (VAR6->VAR21 == NULL) {
FUN3("");
if (VAR12 != NULL)
FUN3("", VAR12);
FUN3("");
return;
}
FUN3("", VAR12);

FUN7(VAR3, VAR25);

}