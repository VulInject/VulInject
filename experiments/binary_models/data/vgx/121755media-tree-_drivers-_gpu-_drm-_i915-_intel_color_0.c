static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5->VAR6);
enum pipe VAR7 = FUN3(VAR2->VAR5)->VAR7;
const uint32_t VAR8 = 33;
uint32_t VAR9;


FUN4(FUN5(VAR7), 0);
FUN4(FUN5(VAR7), VAR10);


for (VAR9 = 0; VAR9 < VAR8; VAR9++) {
uint32_t VAR11 = (VAR9 * (1 << 16)) / (VAR8 - 1);

FUN4(FUN6(VAR7), VAR11);
}


while (VAR9++ < 35)
FUN4(FUN6(VAR7), (1 << 16));
}