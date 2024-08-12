extern const FFBitStreamFilter VAR1;
extern const FFBitStreamFilter VAR2;
extern const FFBitStreamFilter VAR3;
extern const FFBitStreamFilter VAR4;
extern const FFBitStreamFilter VAR5;
extern const FFBitStreamFilter VAR6;
extern const FFBitStreamFilter VAR7;
extern const FFBitStreamFilter VAR8;
extern const FFBitStreamFilter VAR9;
extern const FFBitStreamFilter VAR10;
extern const FFBitStreamFilter VAR11;
extern const FFBitStreamFilter VAR12;
extern const FFBitStreamFilter VAR13;
extern const FFBitStreamFilter VAR14;
extern const FFBitStreamFilter VAR15;
extern const FFBitStreamFilter VAR16;
extern const FFBitStreamFilter VAR17;
extern const FFBitStreamFilter VAR18;
extern const FFBitStreamFilter VAR19;
extern const FFBitStreamFilter VAR20;
extern const FFBitStreamFilter VAR21;
extern const FFBitStreamFilter VAR22;
extern const FFBitStreamFilter VAR23;
extern const FFBitStreamFilter VAR24;
extern const FFBitStreamFilter VAR25;
extern const FFBitStreamFilter VAR26;


const VAR27 *FUN1(void **VAR28)
{
uintptr_t VAR29 = (VAR30)*VAR28;
const VAR31 *VAR32 = VAR33[VAR29];

if (VAR32) {
*VAR28 = (void*)(VAR29 + 1);
return &VAR32->VAR34;
}
return NULL;
}