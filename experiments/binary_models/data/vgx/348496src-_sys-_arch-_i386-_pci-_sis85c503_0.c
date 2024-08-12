int
FUN1(pci_chipset_tag_t VAR1, bus_space_tag_t VAR2, pcitag_t VAR3,
VAR4 *VAR5, VAR6 *VAR7)
{

if (FUN2(VAR1, VAR2, VAR3, VAR5, VAR7) == 0) {
*VAR5 = &VAR8;
return (0);
}

return (1);
}