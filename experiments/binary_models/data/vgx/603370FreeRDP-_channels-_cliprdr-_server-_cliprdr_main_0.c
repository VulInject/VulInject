static VAR1 FUN1(VAR2* VAR3)
{
UINT32 VAR4 = 0;
CLIPRDR_GENERAL_CAPABILITY_SET VAR5 = { 0 };
UINT VAR6 = 0;
CLIPRDR_MONITOR_READY VAR7 = { 0 };
CLIPRDR_CAPABILITIES VAR8 = { 0 };

FUN2(VAR3);

VAR7.VAR9.VAR10 = VAR11;
VAR8.VAR9.VAR10 = VAR12;

if (VAR3->VAR13)
VAR4 |= VAR14;

if (VAR3->VAR15)
VAR4 |= VAR16;

if (VAR3->VAR17)
VAR4 |= VAR18;

if (VAR3->VAR19)
VAR4 |= VAR20;

if (VAR3->VAR21)
VAR4 |= VAR22;

VAR8.VAR9.VAR10 = VAR12;
VAR8.VAR9.VAR23 = 0;
VAR8.VAR9.VAR24 = 4 + VAR25;
VAR8.VAR26 = 1;
VAR8.VAR27 = (VAR28*)&VAR5;
VAR5.VAR29 = VAR30;
VAR5.VAR31 = VAR25;
VAR5.VAR32 = VAR33;
VAR5.VAR4 = VAR4;

if ((VAR6 = VAR3->FUN3(VAR3, &VAR8)))
{
FUN4(VAR34, "" VAR35 "", VAR6);
return VAR6;
}

if ((VAR6 = VAR3->FUN5(VAR3, &VAR7)))
{
FUN4(VAR34, "" VAR35 "", VAR6);
return VAR6;
}

return VAR6;
}