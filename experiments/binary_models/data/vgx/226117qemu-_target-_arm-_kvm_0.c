int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = &VAR2->VAR4;
struct kvm_vcpu_events VAR5;
int VAR6;

if (!FUN2()) {
return 0;
}

memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR7.VAR8 = VAR4->VAR9.VAR10;


if (VAR11) {
VAR5.VAR7.VAR12 = VAR4->VAR9.VAR13;
VAR5.VAR7.VAR14 = VAR4->VAR9.VAR15;
}

VAR6 = FUN3(FUN4(VAR2), VAR16, &VAR5);
if (VAR6) {
FUN5("");
}

return VAR6;
}