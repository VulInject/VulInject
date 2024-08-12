void FUN1(struct VAR1 *VAR2, unsigned int VAR3, ...)
{
va_list VAR4;
struct kvm_regs VAR5;
int VAR6;

FUN2(VAR3 >= 1 && VAR3 <= 5, ""
"",
VAR3);

FUN3(VAR4, VAR3);
FUN4(VAR2, &VAR5);

for (VAR6 = 0; VAR6 < VAR3; VAR6++)
VAR5.VAR7[VAR6 + 2] = FUN5(VAR4, VAR8);

FUN6(VAR2, &VAR5);
FUN7(VAR4);
}