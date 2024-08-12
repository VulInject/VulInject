int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5,
target_ulong VAR6)
{
struct prom_args VAR7;
uint32_t VAR8[FUN2(VAR7.VAR8)];
uint32_t VAR9[FUN2(VAR7.VAR8)] = { 0 }, VAR10;
char VAR11[64];
unsigned VAR12, VAR13, VAR14;

if (FUN3(VAR6, &VAR7, sizeof(VAR7)) != VAR15) {
return -VAR16;
}
VAR12 = FUN4(VAR7.VAR12);
if (VAR12 >= FUN2(VAR7.VAR8)) {
return -VAR16;
}

if (FUN3(FUN4(VAR7.VAR11), VAR11, sizeof(VAR11)) !=
VAR15) {
return -VAR16;
}
if (FUN5(VAR11, sizeof(VAR11)) == sizeof(VAR11)) {

return -VAR16;
}

for (VAR14 = 0; VAR14 < VAR12; ++VAR14) {
VAR8[VAR14] = FUN4(VAR7.VAR8[VAR14]);
}

VAR13 = FUN4(VAR7.VAR13);
if (VAR13 > FUN2(VAR7.VAR8) - VAR12) {
return -VAR16;
}
VAR10 = FUN6(VAR2, VAR5, VAR4, VAR11, VAR8, VAR12, VAR9, VAR13);
if (!VAR13) {
return 0;
}


VAR7.VAR8[VAR12] = FUN7(VAR10);
for (VAR14 = 1; VAR14 < VAR13; ++VAR14) {
VAR7.VAR8[VAR12 + VAR14] = FUN7(VAR9[VAR14 - 1]);
}

if (FUN8(VAR6 + FUN9(struct VAR17, VAR8[VAR12]),
VAR7.VAR8 + VAR12, sizeof(VAR7.VAR8[0]) * VAR13) !=
VAR15) {
return -VAR16;
}

return 0;
}