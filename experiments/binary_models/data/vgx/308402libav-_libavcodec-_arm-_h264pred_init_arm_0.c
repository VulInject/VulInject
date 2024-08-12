void FUN1(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN2(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN3(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN4(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN5(VAR1 *VAR2, ptrdiff_t VAR3);

void FUN6(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN7(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN8(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN9(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN10(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN11(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN12(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN13(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN14(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN15(VAR1 *VAR2, ptrdiff_t VAR3);
void FUN16(VAR1 *VAR2, ptrdiff_t VAR3);

static av_cold void FUN17(VAR4 *VAR5, int VAR6,
const int VAR7,
const int VAR8)
{
const int VAR9 = VAR7 > 8;

if (VAR9)
return;

if (VAR8 <= 1) {
VAR5->VAR10[VAR11     ] = VAR12;
VAR5->VAR10[VAR13      ] = VAR14;
if (VAR6 != VAR15 && VAR6 != VAR16)
VAR5->VAR10[VAR17] = VAR18;
VAR5->VAR10[VAR19   ] = VAR20;
if (VAR6 != VAR21 && VAR6 != VAR15 &&
VAR6 != VAR16) {
VAR5->VAR10[VAR22     ] = VAR23;
VAR5->VAR10[VAR24] = VAR25;
VAR5->VAR10[VAR26 ] = VAR27;
VAR5->VAR10[VAR28] = VAR29;
VAR5->VAR10[VAR30] = VAR31;
VAR5->VAR10[VAR32] = VAR33;
VAR5->VAR10[VAR34] = VAR35;
}
}

VAR5->VAR36[VAR22     ] = VAR37;
VAR5->VAR36[VAR11   ] = VAR38;
VAR5->VAR36[VAR13    ] = VAR39;
VAR5->VAR36[VAR24] = VAR40;
VAR5->VAR36[VAR26 ] = VAR41;
VAR5->VAR36[VAR19 ] = VAR42;
if (VAR6 != VAR43 && VAR6 != VAR21 &&
VAR6 != VAR15 && VAR6 != VAR16)
VAR5->VAR36[VAR17  ] = VAR44;
}