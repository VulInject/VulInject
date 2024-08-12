int FUN1(void *VAR1, void *VAR2, enum kvm_pgtable_prot VAR3)
{
phys_addr_t VAR4;
unsigned long VAR5;
unsigned long VAR6 = FUN2((unsigned long)VAR1);
unsigned long VAR7 = FUN2((unsigned long)VAR2);

if (FUN3())
return 0;

if (!FUN4())
return -VAR8;

VAR6 = VAR6 & VAR9;
VAR7 = FUN5(VAR7);

for (VAR5 = VAR6; VAR5 < VAR7; VAR5 += VAR10) {
int VAR11;

VAR4 = FUN6(VAR1 + VAR5 - VAR6);
VAR11 = FUN7(VAR5, VAR10, VAR4,
VAR3);
if (VAR11)
return VAR11;
}

return 0;
}