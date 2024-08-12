void FUN1(struct VAR1 *VAR2, uint32_t VAR3)
{
unsigned long VAR4;

FUN2(&VAR2->VAR5, VAR4);
if (FUN3(VAR3, VAR2->VAR6))
VAR2->VAR6 = VAR3;
FUN4(&VAR2->VAR5, VAR4);
}

struct VAR7 {
struct dma_fence VAR8;
struct VAR1 *VAR2;
};