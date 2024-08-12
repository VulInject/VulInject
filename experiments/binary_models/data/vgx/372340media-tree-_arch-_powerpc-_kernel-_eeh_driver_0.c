static void *FUN1(void *VAR1, void *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR1;
struct VAR5 *VAR6 = FUN2(VAR4);
enum pci_ers_result VAR7, *VAR8 = VAR2;
struct VAR9 *VAR10;

if (!VAR6 || FUN3(VAR4) || FUN4(VAR4->VAR11))
return NULL;
VAR6->VAR12 = VAR13;

VAR10 = FUN5(VAR6);
if (!VAR10) return NULL;

FUN6(VAR6);

if (!VAR10->VAR14 ||
!VAR10->VAR14->VAR15) {
FUN7(VAR6);
return NULL;
}

VAR7 = VAR10->VAR14->FUN8(VAR6, VAR13);


if (VAR7 == VAR16) *VAR8 = VAR7;
if (*VAR8 == VAR17) *VAR8 = VAR7;

VAR4->VAR18 = true;
FUN7(VAR6);
return NULL;
}