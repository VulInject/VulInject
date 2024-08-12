static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3,
unsigned VAR4)
{
VAR5 *VAR6 = FUN2(VAR1);
int VAR7;

for (VAR7 = 0; VAR7 < VAR4; VAR7++) {
VAR6->VAR8[VAR2 + VAR7] = (VAR3 >> (8 * (VAR4 - VAR7 - 1))) & 0xFF;
}
FUN3(VAR6, VAR2, VAR4);
}


static const MemoryRegionOps VAR9 = {
.read = VAR10,
.write = VAR11,
.VAR12 = VAR13,
.VAR14 = {
.VAR15 = 1,
.VAR16 = 4,
},
};