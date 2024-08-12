VAR1 <<= VAR2; \
VAR1 |= (unsigned int)((VAR3) >> (VAR4 - VAR2)); \
*VAR5++ = (VAR6)VAR1; \
VAR1 = (unsigned int)((VAR3) & ((1U << (VAR4 - VAR2)) - 1U)); \
if (VAR4 >= (VAR2 + 8)) { \
*VAR5++ = (VAR6)(VAR1 >> (VAR4 - (VAR2 + 8))); \
VAR1 &= (unsigned int)((1U << (VAR4 - (VAR2 + 8))) - 1U); \
VAR2 += 16 - VAR4; \
} else { \
VAR2 += 8 - VAR4; \
}

if (VAR4 >= VAR2) { \
FUN1(VAR3, VAR4) \
} else { \
VAR1 <<= VAR4; \
VAR1 |= (unsigned int)(VAR3); \
VAR2 -= VAR4; \
}
if (VAR2 != 8) { \
VAR1 <<= VAR2; \
*VAR5++ = (VAR6)VAR1; \
}

static void FUN2(const VAR7* VAR8, VAR6* VAR5,
OPJ_SIZE_T VAR9)
{
OPJ_SIZE_T VAR10;

for (VAR10 = 0; VAR10 < (VAR9 & ~(VAR11)7U); VAR10 += 8U) {
OPJ_UINT32 VAR12 = (VAR13)VAR8[VAR10 + 0];
OPJ_UINT32 VAR14 = (VAR13)VAR8[VAR10 + 1];
OPJ_UINT32 VAR15 = (VAR13)VAR8[VAR10 + 2];
OPJ_UINT32 VAR16 = (VAR13)VAR8[VAR10 + 3];
OPJ_UINT32 VAR17 = (VAR13)VAR8[VAR10 + 4];
OPJ_UINT32 VAR18 = (VAR13)VAR8[VAR10 + 5];
OPJ_UINT32 VAR19 = (VAR13)VAR8[VAR10 + 6];
OPJ_UINT32 VAR20 = (VAR13)VAR8[VAR10 + 7];

*VAR5++ = (VAR6)((VAR12 << 5) | (VAR14 << 2) | (VAR15 >> 1));
*VAR5++ = (VAR6)((VAR15 << 7) | (VAR16 << 4) | (VAR17 << 1) | (VAR18 >> 2));
*VAR5++ = (VAR6)((VAR18 << 6) | (VAR19 << 3) | (VAR20));
}

if (VAR9 & 7U) {
unsigned int VAR1 = 0U;
int VAR2 = 8U;
VAR9 &= 7U;
FUN3((VAR13)VAR8[VAR10 + 0], 3)
if (VAR9 > 1U) {
FUN3((VAR13)VAR8[VAR10 + 1], 3)
if (VAR9 > 2U) {
FUN3((VAR13)VAR8[VAR10 + 2], 3)
if (VAR9 > 3U) {
FUN3((VAR13)VAR8[VAR10 + 3], 3)
if (VAR9 > 4U) {
FUN3((VAR13)VAR8[VAR10 + 4], 3)
if (VAR9 > 5U) {
FUN3((VAR13)VAR8[VAR10 + 5], 3)
if (VAR9 > 6U) {
FUN3((VAR13)VAR8[VAR10 + 6], 3)
}
}
}
}
}
}
FUN4()
}
}