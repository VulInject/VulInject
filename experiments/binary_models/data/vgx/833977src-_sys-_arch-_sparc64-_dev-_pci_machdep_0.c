const char *
FUN1(pci_chipset_tag_t VAR1, pci_intr_handle_t VAR2)
{
static char VAR3[16];
const char *VAR4 = VAR3;

FUN2(VAR5, ("", VAR2));
switch (FUN3(VAR2)) {
case VAR6:
VAR4 = "";
break;
case VAR7:
VAR4 = "";
break;
case VAR8:
snprintf(VAR3, sizeof VAR3, "", FUN4(VAR2));
break;
}
FUN2(VAR5, ("", VAR4));

return (VAR4);
}