static VAR1 FUN1(
const PDEVICE_CONTEXT VAR2,
const size_t          VAR3,
const size_t          VAR4,
const WDFREQUEST      VAR5,
VAR6              * VAR7,
BOOLEAN               VAR8
)
{

if (VAR2->VAR9)
return VAR10;

if (VAR3 != sizeof(VAR11))
{
FUN2("", sizeof(VAR11), VAR3);
return VAR12;
}

PIVSHMEM_MMAP_CONFIG VAR13;
if (!FUN3(FUN4(VAR5, VAR3, (VAR14)&VAR13, NULL)))
{
FUN2("", "");
return VAR15;
}

MEMORY_CACHING_TYPE VAR16;
switch (VAR13->VAR17)
{
case VAR18    : VAR16 = VAR19    ; break;
case VAR20       : VAR16 = VAR21       ; break;
case VAR22: VAR16 = VAR23; break;
default:
FUN2("", VAR13->VAR17);
return VAR24;
}

PIRP  VAR25 = FUN5(VAR5);
const BOOLEAN VAR26 = FUN6(VAR25);
const size_t  VAR27 = VAR26 ? sizeof(VAR28) : sizeof(VAR29);
const size_t  VAR27 = sizeof(VAR29);
PVOID VAR30;

if (VAR4 != VAR27)
{
FUN2("", VAR27, VAR4);
return VAR12;
}

if (!FUN3(FUN7(VAR5, VAR27, (VAR14 *)&VAR30, NULL)))
{
FUN2("", "");
return VAR15;
}

__try
{
VAR2->VAR9 = FUN8(
VAR2->VAR31,
VAR8 ? VAR32 : VAR33,
VAR16,
NULL,
VAR34,
VAR35 | VAR36
);
}
__except (VAR37)
{
FUN2("", "");
return VAR38;
}

if (!VAR2->VAR9)
{
FUN2("", "");
return VAR38;
}

VAR2->VAR39 = FUN9(VAR5);
if (VAR26)
{
PIVSHMEM_MMAP32 VAR40 = (VAR41)VAR30;
VAR40->VAR42  = (VAR43)VAR2->VAR44->VAR45;
VAR40->VAR46    = (VAR47)VAR2->VAR48.VAR49;
VAR40->VAR50     = FUN10(VAR2->VAR9);
VAR40->VAR51 = VAR2->VAR52;
}
else
{
PIVSHMEM_MMAP VAR40 = (VAR53)VAR30;
VAR40->VAR42  = (VAR43)VAR2->VAR44->VAR45;
VAR40->VAR46    = (VAR47)VAR2->VAR48.VAR49;
VAR40->VAR50     = VAR2->VAR9;
VAR40->VAR51 = VAR2->VAR52;
}

*VAR7 = VAR27;
return VAR54;
}