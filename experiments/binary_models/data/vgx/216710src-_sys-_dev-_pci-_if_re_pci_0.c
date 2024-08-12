int
FUN1(struct VAR1 *VAR2, void *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR4;
pci_chipset_tag_t VAR7 = VAR6->VAR8;
pcireg_t VAR9;

VAR9 = FUN2(VAR7, VAR6->VAR10, VAR11);


if (FUN3(VAR6->VAR12) == VAR13 &&
FUN4(VAR6->VAR12) == VAR14 &&
FUN5(VAR6->VAR15) == 0x20)
return (1);

if (FUN3(VAR6->VAR12) == VAR16 &&
FUN4(VAR6->VAR12) == VAR17 &&
VAR9 == VAR18)
return (1);

return (FUN6((struct VAR5 *)VAR4, VAR19,
FUN7(VAR19)));
}