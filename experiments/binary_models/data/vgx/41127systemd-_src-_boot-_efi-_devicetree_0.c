static VAR1 FUN1(struct VAR2 *VAR3, size_t VAR4) {
size_t VAR5 = FUN2(VAR4, VAR6);
EFI_STATUS VAR7;

assert(VAR3);

VAR7 = VAR8->FUN3(VAR9, VAR10, VAR5, &VAR3->VAR11);
if (VAR7 != VAR12)
return VAR7;

VAR3->VAR5 = VAR5;
return VAR7;
}