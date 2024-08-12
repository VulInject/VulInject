VAR1 FUN1(u32 VAR2, unsigned char const *VAR3, size_t VAR4);
VAR1 FUN2(u32 VAR2, unsigned char const *VAR3, size_t VAR4);
VAR1 FUN3(u32 VAR2, unsigned char const *VAR3, size_t VAR4);


static u32 VAR5 FUN4(u32 VAR2,				    \
unsigned char const *VAR6, size_t VAR7)  \
{								    \
struct kernel_fpu VAR8;				    \
unsigned long VAR9, VAR10, VAR11;		    \
\
if (VAR7 < VAR12 + VAR13)		    \
return FUN5(VAR2, VAR6, VAR7);		    \
\
if ((unsigned long)VAR6 & VAR13) {		    \
VAR9 = VAR14 -			    \
((unsigned long)VAR6 & VAR13);    \
VAR7 -= VAR9;				    \
VAR2 = FUN5(VAR2, VAR6, VAR9);		    \
VAR6 = (void *)((unsigned long)VAR6 + VAR9);    \
}							    \
\
VAR10 = VAR7 & ~VAR13;			    \
VAR11 = VAR7 & VAR13;			    \
\
FUN6(&VAR8, VAR15);		    \
VAR2 = FUN7(VAR2, VAR6, VAR10);			    \
FUN8(&VAR8, VAR15);		    \
\
if (VAR11)						    \
VAR2 = FUN5(VAR2, VAR6 + VAR10, VAR11);  \
\
return VAR2;						    \
}

FUN9(VAR16, VAR17, VAR18)
FUN9(VAR19, VAR20, VAR21)
FUN9(VAR22, VAR23, VAR24)


static int FUN10(struct VAR25 *VAR26)
{
struct VAR27 *VAR28 = FUN11(VAR26);

VAR28->VAR29 = 0;
return 0;
}