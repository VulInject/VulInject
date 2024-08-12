VAR1 FUN1(ram_addr_t VAR2, void *VAR3, VAR4 *VAR5, VAR6 **VAR7);
VAR1 FUN2(ram_addr_t VAR2, VAR4 *VAR5, VAR6 **VAR7);
VAR1 FUN3(ram_addr_t VAR2, ram_addr_t VAR8, void (*VAR9)(const char *, uint64_t VAR10, void *VAR3), VAR4 *VAR5, VAR6 **VAR7);
int FUN4(ram_addr_t VAR11);
void *FUN5(ram_addr_t VAR11);
void *FUN6(ram_addr_t VAR11);
void FUN7(ram_addr_t VAR11);
void FUN8(ram_addr_t VAR11);
int FUN9(ram_addr_t VAR12, ram_addr_t VAR13, VAR6 **VAR7);
static inline bool FUN10(ram_addr_t VAR14, ram_addr_t VAR10, unsigned VAR15)
{
    unsigned long VAR16, VAR17, VAR18;
    assert(VAR15 < VAR19);
    VAR16 = FUN11(VAR14 + VAR10) >> VAR20;
    VAR17 = VAR14 >> VAR20;
    VAR18 = FUN12(VAR21.VAR22[VAR15], VAR16, VAR17);
    return VAR18 < VAR16;
}