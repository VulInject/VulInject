void FUN1(VAR1 *VAR2)
{
FUN2(FUN3(VAR2->VAR3));
FUN4(VAR2->VAR4);
memset(VAR2, 0, sizeof(*VAR2));
}

typedef struct {
BlockAIOCB VAR5;
VAR6 *VAR7;
VAR8 *VAR9;
VAR1 *VAR4;
uint32_t VAR10;
uint64_t VAR11;
DMADirection VAR12;
int VAR13;
dma_addr_t VAR14;
QEMUIOVector VAR15;
VAR16 *VAR17;
VAR18 *VAR19;
void *VAR20;
} VAR21;