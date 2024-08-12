\
VAR1 += FUN1(VAR2); \
VAR1 += VAR3; 			\
if (VAR1 < VAR3) 			\
VAR4 += VAR5; 	\
\
(VAR6) = VAR4 + FUN1(VAR1);			\
(VAR7) = FUN2(VAR1) * VAR5 + FUN2(VAR2);\
} while (0)

DWunion VAR8;					\
FUN3(VAR8.VAR9.VAR10, VAR8.VAR9.VAR11, VAR12, VAR13);		\
VAR8.VAR14;						\
})

long long VAR15 FUN4(long long VAR12, long long VAR13)
{
const DWunion VAR16 = {.VAR14 = VAR12};
const DWunion VAR17 = {.VAR14 = VAR13};
DWunion VAR18 = {.VAR14 = FUN5(VAR16.VAR9.VAR11, VAR17.VAR9.VAR11)};

VAR18.VAR9.VAR10 += ((unsigned long) VAR16.VAR9.VAR11 * (unsigned long) VAR17.VAR9.VAR10
+ (unsigned long) VAR16.VAR9.VAR10 * (unsigned long) VAR17.VAR9.VAR11);

return VAR18.VAR14;
}