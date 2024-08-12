VAR1
FUN1(VAR2* VAR3, uint32 VAR4, void* VAR5, tmsize_t VAR6)
{
static const char VAR7[] = "";
VAR8 *VAR9;
uint16 VAR10;
uint32 VAR11;

if (!FUN2(VAR3, VAR7))
return ((VAR1)(-1));
VAR9 = &VAR3->VAR12;
if (VAR4 >= VAR9->VAR13) {
FUN3(VAR3->VAR14, VAR7, "",
(unsigned long) VAR4, (unsigned long) VAR9->VAR13);
return ((VAR1)(-1));
}

if (!FUN4(VAR3))
return ((VAR1)(-1));

VAR3->VAR15 |= VAR16;
VAR3->VAR17 = VAR4;

if( VAR9->VAR18[VAR4] > 0 )
{




if( VAR3->VAR19 <= (VAR1) VAR9->VAR18[VAR4] )
{
if( !(FUN5(VAR3, NULL,
(VAR1)FUN6((VAR20)(VAR9->VAR18[VAR4] + 1), 1024))) )
return ((VAR1)(-1));
}


VAR3->VAR21 = 0;
}

VAR3->VAR22 = 0;
VAR3->VAR23 = VAR3->VAR24;


VAR11=FUN7(VAR9->VAR25, VAR9->VAR26);
if (VAR11 == 0) {
FUN3(VAR3->VAR14,VAR7,"");
return ((VAR1)(-1));
}
VAR3->VAR27 = (VAR4 % VAR11) * VAR9->VAR26;
VAR11=FUN7(VAR9->VAR28, VAR9->VAR29);
if (VAR11 == 0) {
FUN3(VAR3->VAR14,VAR7,"");
return ((VAR1)(-1));
}
VAR3->VAR30 = (VAR4 % VAR11) * VAR9->VAR29;

if ((VAR3->VAR15 & VAR31) == 0) {
if (!(*VAR3->VAR32)(VAR3))
return ((VAR1)(-1));
VAR3->VAR15 |= VAR31;
}
VAR3->VAR15 &= ~VAR33;


if ( VAR6 < 1 || VAR6 > VAR3->VAR34)
VAR6 = VAR3->VAR34;


if( VAR9->VAR35 == VAR36 )
{

VAR3->FUN8( VAR3, (VAR37*) VAR5, VAR6 );

if (!FUN9(VAR3, VAR9->VAR38) &&
(VAR3->VAR15 & VAR39) == 0)
FUN10((VAR37*) VAR5, VAR6);

if (VAR6 > 0 &&
!FUN11(VAR3, VAR4, (VAR37*) VAR5, VAR6))
return ((VAR1) -1);
return (VAR6);
}

VAR10 = (VAR40)(VAR4/VAR9->VAR41);
if (!(*VAR3->VAR42)(VAR3, VAR10))
return ((VAR1)(-1));

VAR3->FUN8( VAR3, (VAR37*) VAR5, VAR6 );

if (!(*VAR3->VAR43)(VAR3, (VAR37*) VAR5, VAR6, VAR10))
return ((VAR1) -1);
if (!(*VAR3->VAR44)(VAR3))
return ((VAR1)(-1));
if (!FUN9(VAR3, VAR9->VAR38) &&
(VAR3->VAR15 & VAR39) == 0)
FUN10((VAR37*)VAR3->VAR24, VAR3->VAR22);
if (VAR3->VAR22 > 0 && !FUN11(VAR3, VAR4,
VAR3->VAR24, VAR3->VAR22))
return ((VAR1)(-1));
VAR3->VAR22 = 0;
VAR3->VAR23 = VAR3->VAR24;
return (VAR6);
}