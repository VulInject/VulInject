void
FUN1(struct VAR1 *VAR2, dma_addr_t VAR3, dma_addr_t VAR4)
{
VAR5 *VAR6 = 
(VAR2->VAR7 & 1) ? VAR8 : VAR9;
VAR10 *VAR11;
volatile unsigned long *VAR12;
unsigned long VAR13;


VAR11 = &VAR6->VAR14;
if (VAR2->VAR7 & 2) 
VAR11 = &VAR6->VAR15;


VAR12 = &VAR11->VAR16.VAR17.VAR18.VAR12;
if (((VAR3 ^ VAR4) & 0xffff0000) == 0)
VAR12 = &VAR11->VAR16.VAR17.VAR19.VAR12;


VAR13 = (VAR3 & 0xffff0000) >> 12;

FUN2();
*VAR12 = VAR13;
FUN3();
*VAR12;
}