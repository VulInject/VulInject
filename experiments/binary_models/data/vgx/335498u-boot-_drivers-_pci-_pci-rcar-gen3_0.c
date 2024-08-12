static int FUN1(pci_dev_t VAR1, uint VAR2)
{
u32 VAR3;

if (FUN2(VAR1))
return -VAR4;

if (FUN3(VAR1))
return -VAR4;

VAR3 = FUN4(VAR1);
if (VAR3 > 1)
return -VAR4;

return 0;
}