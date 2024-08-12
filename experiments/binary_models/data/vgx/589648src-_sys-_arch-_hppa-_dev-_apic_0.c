int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7->VAR8;
pci_chipset_tag_t VAR9 = VAR2->VAR7;
pcitag_t VAR10 = VAR2->VAR11;
pcireg_t VAR12;
int VAR13;

VAR12 = FUN2(VAR9, VAR10, VAR14);
FUN3("", FUN4(VAR12),
FUN5(VAR12));
VAR13 = FUN5(VAR12);
if (VAR6->VAR15[VAR13] <= 0) {
if ((VAR6->VAR15[VAR13] = FUN6()) == -1)
return 1;
}
*VAR4 = (VAR13 << VAR16) | VAR6->VAR15[VAR13];
return (FUN7(*VAR4) == 0);
}