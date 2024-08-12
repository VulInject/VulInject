void *FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
size_t VAR5,	VAR6 *VAR7,
unsigned long VAR8, gfp_t VAR9, int VAR10)
{
void *VAR11 = NULL;
dma_addr_t VAR12;
unsigned int VAR13;
unsigned int VAR14, VAR15;
struct VAR16 *VAR16;

VAR5 = FUN2(VAR5);
VAR13 = FUN3(VAR5);


if (VAR13 >= VAR17) {
FUN4(VAR2, "",
VAR5);
return NULL;
}

if (!VAR4)
return NULL;


VAR16 = FUN5(VAR10, VAR9, VAR13);
if (!VAR16)
return NULL;
VAR11 = FUN6(VAR16);
memset(VAR11, 0, VAR5);


VAR14 = VAR5 >> VAR4->VAR18;
VAR15 = FUN7(VAR5, VAR4);
VAR12 = FUN8(VAR2, VAR4, VAR11, VAR14, VAR19,
VAR8 >> VAR4->VAR18, VAR15, 0);
if (VAR12 == VAR20) {
FUN9((unsigned long)VAR11, VAR13);
return NULL;
}
*VAR7 = VAR12;
return VAR11;
}