static void VAR1 FUN1(vaddr_t addr VAR2, size_t size VAR2)
{
FUN2();
}



void VAR3##VAR4##FUN3(vaddr_t VAR5);			\
void VAR3##VAR4##FUN3(vaddr_t VAR5)			\
{ VAR6##FUN4(VAR5, VAR7); }				\
void VAR3##VAR4##VAR7##FUN5(vaddr_t VAR5);	\
void VAR3##VAR4##VAR7##FUN5(vaddr_t VAR5)	\
{ VAR6##FUN4(VAR5, VAR7); }				\
void VAR8##VAR4##VAR7##FUN5(vaddr_t VAR5);\
void __noreturn VAR8##VAR4##VAR7##FUN5(vaddr_t VAR5) \
{ VAR9##FUN4(VAR5, VAR7); }

FUN6(VAR10, 1)
FUN6(VAR10, 2)
FUN6(VAR10, 4)
FUN6(VAR10, 8)
FUN6(VAR10, 16)
FUN6(VAR11, 1)
FUN6(VAR11, 2)
FUN6(VAR11, 4)
FUN6(VAR11, 8)
FUN6(VAR11, 16)

void FUN7(vaddr_t VAR5, size_t VAR7);
void FUN7(vaddr_t VAR5, size_t VAR7)
{
FUN8(VAR5, VAR7);
}