bool (*FUN1(bool (*VAR1)(bool)))(bool)
{return VAR1;}


struct VAR2##VAR3##VAR4##VAR5 {   \
char VAR6;                   \
VAR7;                       \
};                              \
EXPORT int VAR8##VAR3##VAR4##FUN2(char* VAR9, struct VAR2##VAR3##VAR4##VAR5* VAR10);   \
int VAR8##VAR3##VAR4##FUN2(char* VAR9, struct VAR2##VAR3##VAR4##VAR5* VAR10) { \
struct {char VAR11; struct VAR2##VAR3##VAR4##SUFFIX VAR12;} VAR13; \
int VAR14 = sprintf(VAR9, "", \
(int) sizeof(VAR13.VAR12), \
(int) (((char*) &VAR10->VAR12) - (char*) VAR10), \
(int) (((char*) &VAR13.VAR12) - (char*) &VAR13)); \
return VAR15##FUN2(VAR9+VAR14, VAR10->VAR12); \
}

FUN3(FUN4(double VAR16), VAR3, VAR17) \
FUN3(FUN4(float VAR16), VAR3, VAR18)


FUN3(FUN4(enum VAR19), VAR3, VAR19)        \
FUN3(FUN4(enum VAR20), VAR3, VAR20)      \
FUN3(FUN4(enum VAR21), VAR3, VAR21)      \


FUN3(FUN4(VAR22), VAR3, VAR23)      \
FUN3(FUN4(VAR24), VAR3, VAR25)      \
FUN3(FUN4(VAR26), VAR3, VAR27)      \
FUN3(FUN4(float), VAR3, VAR28)           \
FUN3(FUN4(double), VAR3, VAR29)          \
FUN3(FUN4(const char*), VAR3, VAR13)     \
FUN3(FUN4(void*), VAR3, VAR10)           \
FUN3(FUN4(VAR30), VAR3, VAR31)           \
FUN3(FUN4(VAR30), VAR3, VAR32)          \
FUN5(VAR3, VAR33)                   \
FUN6(VAR3, VAR33)


FUN7(VAR3, VAR34) \
FUN8(VAR3, VAR34)
FUN7(VAR3, VAR34)

FUN9(0)

FUN9(1)
FUN9(2)
FUN9(4)
FUN9(8)
FUN9(16)




FUN7(VAR35, VAR36)
FUN7(VAR37, VAR38)
FUN7(VAR39, VAR40)
FUN7(VAR41, VAR42)
FUN7(VAR43, VAR44)

FUN7(VAR45, VAR46)


EXPORT int FUN10();

int FUN10()
{ return alignof(struct VAR47); }



struct VAR48 {
unsigned short VAR49  : 3;    
unsigned short VAR50 : 6;    
unsigned short VAR51    : 5;    
unsigned short VAR52     : 8;    
};