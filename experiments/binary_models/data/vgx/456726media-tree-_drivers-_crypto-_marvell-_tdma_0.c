int FUN1(struct VAR1 *VAR2,
dma_addr_t VAR3, dma_addr_t VAR4, u32 VAR5,
u32 VAR6, gfp_t VAR7)
{
struct VAR8 *VAR9;

VAR9 = FUN2(VAR2, VAR7);
if (FUN3(VAR9))
return FUN4(VAR9);

VAR9->VAR10 = FUN5(VAR5 | FUN6(31));
VAR9->VAR4 = VAR4;
VAR9->VAR3 = VAR3;

VAR6 &= (VAR11 | VAR12);
VAR9->VAR6 = VAR6 | VAR13;

return 0;
}