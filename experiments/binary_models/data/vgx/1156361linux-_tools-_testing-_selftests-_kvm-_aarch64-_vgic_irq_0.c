static void FUN1(struct VAR1 *VAR2,
uint32_t VAR3, uint32_t VAR4,
kvm_inject_cmd VAR5)
{
uint32_t VAR6;

FUN2();


for (VAR6 = VAR3; VAR6 < VAR4 + VAR3; VAR6++)
FUN3(VAR6, (VAR6 % (VAR7 - 1)) << 3);

asm volatile("" : : : "");
FUN4(VAR5, VAR3, VAR4);

while (VAR8 < VAR4) {
asm volatile(""
""

""
: : : "");
}
asm volatile("" : : : "");

FUN5(VAR8, VAR4);
for (VAR6 = VAR3; VAR6 < VAR4 + VAR3; VAR6++)
FUN5(VAR9[VAR6], 1);
FUN6();

FUN7(VAR2);
}