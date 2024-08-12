static void FUN1(void *VAR1, hwaddr VAR2,
uint64_t VAR3, unsigned VAR4)
{
if (VAR4 != 4) {
FUN2(VAR1, VAR2, VAR3);
return;
}

FUN3(VAR2);
}

static const MemoryRegionOps VAR5 = {
.read = VAR6,
.write = VAR7,
.VAR8 = VAR9,
};