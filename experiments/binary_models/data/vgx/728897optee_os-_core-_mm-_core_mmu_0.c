void *FUN1(enum teecore_memtypes VAR1, paddr_t VAR2, size_t VAR3)
{
struct core_mmu_table_info VAR4;
struct VAR5 *VAR6;
size_t VAR7;
size_t VAR8;
paddr_t VAR9;
size_t VAR10;

if (!VAR3)
return NULL;

if (!FUN2(VAR2, VAR3))
return NULL;


VAR6 = FUN3(VAR1, VAR2, VAR3);
if (VAR6 && FUN4(VAR2, VAR3, VAR6))
return (void *)(VAR11)(VAR6->VAR12 + VAR2 - VAR6->VAR13);


VAR6 = FUN5(VAR14);
if (!VAR6)
return NULL;

if (!FUN6(NULL, VAR6->VAR12, VAR15, &VAR4))
return NULL;

VAR8 = FUN7(VAR4.VAR16);
VAR9 = FUN8(VAR2, VAR8);
VAR10 = FUN9(VAR3 + VAR2 - VAR9, VAR8);


if (VAR6->VAR17 < VAR10)
return NULL;


if (FUN10(&VAR4, VAR6->VAR12 + VAR3) >= VAR4.VAR18)
return NULL;


VAR7 = 0;
while (!FUN11(VAR19 + VAR7))
VAR7++;

if (VAR7 < (FUN12(VAR19) - 1)) {

VAR19[VAR7].VAR12 = VAR6->VAR12;
VAR19[VAR7].VAR17 = VAR10;
VAR19[VAR7 + 1].VAR1 = VAR20;
VAR6->VAR12 += VAR10;
VAR6->VAR17 -= VAR10;
VAR6 = VAR19 + VAR7;
} else {

VAR6->VAR17 = VAR10;
}
VAR6->VAR1 = VAR1;
VAR6->VAR21 = VAR8;
VAR6->VAR22 = FUN13(VAR1);
VAR6->VAR13 = VAR9;

FUN14(&VAR4, VAR6);


FUN15();

return (void *)(VAR11)(VAR6->VAR12 + VAR2 - VAR6->VAR13);
}