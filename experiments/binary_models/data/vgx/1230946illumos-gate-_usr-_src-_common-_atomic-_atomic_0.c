{ return (*VAR1 += VAR2); }

VAR3
FUN1(volatile VAR3 *VAR1, signed char VAR2)
{ return (*VAR1 += VAR2); }

VAR4
FUN2(volatile VAR4 *VAR1, int16_t VAR5)
{ return (*VAR1 += VAR5); }

VAR6
FUN3(volatile VAR6 *VAR1, short VAR2)
{ return (*VAR1 += VAR2); }

VAR7
FUN4(volatile VAR7 *VAR1, int32_t VAR5)
{ return (*VAR1 += VAR5); }

VAR8
FUN5(volatile VAR8 *VAR1, int VAR5)
{ return (*VAR1 += VAR5); }

void *
FUN6(volatile void *VAR1, ssize_t VAR2)
{ return (*(VAR9 *)VAR1 += VAR2); }

VAR10
FUN7(volatile VAR10 *VAR1, long VAR5)
{ return (*VAR1 += VAR5); }

VAR11
FUN8(volatile VAR11 *VAR1, int64_t VAR5)
{ return (*VAR1 += VAR5); }

VAR12
FUN9(volatile VAR12 *VAR1, uint8_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR3
FUN10(volatile VAR3 *VAR1, uchar_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR4
FUN11(volatile VAR4 *VAR1, uint16_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR6
FUN12(volatile VAR6 *VAR1, ushort_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR7
FUN13(volatile VAR7 *VAR1, uint32_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR8
FUN14(volatile VAR8 *VAR1, uint_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR10
FUN15(volatile VAR10 *VAR1, ulong_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR11
FUN16(volatile VAR11 *VAR1, uint64_t VAR2)
{ return (*VAR1 |= VAR2); }

VAR12
FUN17(volatile VAR12 *VAR1, uint8_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR3
FUN18(volatile VAR3 *VAR1, uchar_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR4
FUN19(volatile VAR4 *VAR1, uint16_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR6
FUN20(volatile VAR6 *VAR1, ushort_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR7
FUN21(volatile VAR7 *VAR1, uint32_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR8
FUN22(volatile VAR8 *VAR1, uint_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR10
FUN23(volatile VAR10 *VAR1, ulong_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR11
FUN24(volatile VAR11 *VAR1, uint64_t VAR2)
{ return (*VAR1 &= VAR2); }

VAR12
FUN25(volatile VAR12 *VAR1, uint8_t VAR13, uint8_t new)
{
uint8_t VAR14 = *VAR1;
if (VAR14 == VAR13)
*VAR1 = new;
return (VAR14);
}