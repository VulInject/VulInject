static int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
const VAR5 *VAR6 = &VAR2->VAR7.VAR6;
unsigned int VAR8;

if (FUN2(VAR4, VAR6->VAR9)) {
return -1;
}

for (VAR8 = 0; VAR8 < VAR6->VAR9; ++VAR8) {
const VAR10 *VAR11 = &VAR6->VAR12[VAR8];
if (FUN2(VAR4, VAR11->VAR13) ||
FUN2(VAR4, VAR11->VAR14) ||
FUN2(VAR4, VAR11->VAR15)) {
return -1;
}
}
return 0;
}