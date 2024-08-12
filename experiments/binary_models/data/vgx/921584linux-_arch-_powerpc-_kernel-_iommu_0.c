static bool FUN1(struct VAR1 *VAR2, dma_addr_t VAR3,
unsigned int VAR4)
{
unsigned long VAR5, VAR6;

VAR5 = VAR3 >> VAR2->VAR7;
VAR6 = VAR5 - VAR2->VAR8;

if (((VAR6 + VAR4) > VAR2->VAR9) ||
(VAR5 < VAR2->VAR8)) {
if (FUN2()) {
FUN3(VAR10 "");
FUN3(VAR10 "", VAR5); 
FUN3(VAR10 "", (VAR11)VAR3);
FUN3(VAR10 "", (VAR11)VAR2);
FUN3(VAR10 "", (VAR11)VAR2->VAR12);
FUN3(VAR10 "", (VAR11)VAR2->VAR9);
FUN3(VAR10 "", (VAR11)VAR2->VAR8);
FUN3(VAR10 "", (VAR11)VAR2->VAR13);
FUN4(1);
}

return false;
}

return true;
}