static struct VAR1 *FUN1(
struct VAR2 *VAR3, dma_addr_t VAR4, size_t VAR5,
size_t VAR6, enum dma_transfer_direction VAR7,
unsigned long VAR8)
{
struct VAR9 *VAR10 = FUN2(VAR3);
struct VAR11 *VAR12;
unsigned int VAR13, VAR14;

if (VAR7 != VAR10->VAR7)
return NULL;

if (!FUN3(VAR10, VAR5) ||
!FUN4(VAR10, VAR4))
return NULL;

if (VAR6 == 0 || VAR5 % VAR6)
return NULL;

VAR13 = VAR5 / VAR6;

VAR12 = FUN5(VAR13);
if (!VAR12)
return NULL;

for (VAR14 = 0; VAR14 < VAR13; VAR14++) {
if (VAR7 == VAR15)
VAR12->VAR16[VAR14].VAR17 = VAR4;
else
VAR12->VAR16[VAR14].VAR18 = VAR4;
VAR12->VAR16[VAR14].VAR19 = VAR6;
VAR12->VAR16[VAR14].VAR20 = 1;
VAR4 += VAR6;
}

VAR12->VAR21 = true;

return FUN6(&VAR10->VAR22, &VAR12->VAR23, VAR8);
}